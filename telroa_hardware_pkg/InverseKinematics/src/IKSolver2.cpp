//
// Created by starlight on 24. 8. 18.
//

#include "IKSolver2.hpp"





Eigen::Matrix<float,5,1> robotLink;
void initializeRobotLink() {
    robotLink << 35, 55, 105, 70, 150;
}

Eigen::Matrix<float,6,5> screw;
void initializeScrew() {
    Eigen::Matrix<float,3,5> w;
    w <<  0, 0, 0, 0, 1,
          0, 1, 1, 1, 0,
          1, 0, 0, 0, 0;

    Eigen::Matrix<float,5,1> l;
    l << robotLink(0),
         robotLink(0)+robotLink(1),
         robotLink(0)+robotLink(1)+robotLink(2),
         robotLink(0)+robotLink(1)+robotLink(2)+robotLink(3),
         robotLink(0)+robotLink(1)+robotLink(2)+robotLink(3)+robotLink(4);

    Eigen::Matrix<float,3,5> p;
    p << 0      , 0         , 59.6      , 283.2     , 368.5,
         0      , 0         , 0         , 0         , 0       ,
         0      , 60.9      , 288.8     , 288.8     , 288.8;

    Eigen::Matrix<float,3,1> v_0 = p.col(0).cross(w.col(0));
    Eigen::Matrix<float,3,1> v_1 = p.col(1).cross(w.col(1));
    Eigen::Matrix<float,3,1> v_2 = p.col(2).cross(w.col(2));
    Eigen::Matrix<float,3,1> v_3 = p.col(3).cross(w.col(3));
    Eigen::Matrix<float,3,1> v_4 = p.col(4).cross(w.col(4));

    screw.block<3,1>(0,0) = w.col(0);
    screw.block<3,1>(0,1) = w.col(1);
    screw.block<3,1>(0,2) = w.col(2);
    screw.block<3,1>(0,3) = w.col(3);
    screw.block<3,1>(0,4) = w.col(4);
    screw.block<3,1>(3,0) = v_0;
    screw.block<3,1>(3,1) = v_1;
    screw.block<3,1>(3,2) = v_2;
    screw.block<3,1>(3,3) = v_3;
    screw.block<3,1>(3,4) = v_4;
}

Eigen::Matrix<float,3,3> GetSkewSymmetricMatrix3d(const Eigen::Matrix<float,3,1>& v) {
    Eigen::Matrix<float,3,3> skew3d;
    skew3d <<   0,   -v.z(), v.y(),
             v.z(),  0,   -v.x(),
            -v.y(), v.x(),  0;
    return skew3d;
}

Eigen::Matrix<float,4,4> GetSkewSymmetricMatrix4d(const Eigen::Matrix<float,6,1>& screw) {
    Eigen::Matrix<float, 3, 1> w = screw.block<3, 1>(0,0);
    Eigen::Matrix<float, 3, 1> v = screw.block<3, 1>(3,0);
    const Eigen::Matrix<float,3,3> wSkew = GetSkewSymmetricMatrix3d(w);
    Eigen::Matrix<float,4,4> skew4d;
    skew4d <<  wSkew,  v,
              0, 0, 0, 0;
    return skew4d;
}

Eigen::Matrix<float,6,1> ConvertSkew4ToVec6(const Eigen::Matrix<float,4,4>& T) {
    Eigen::Matrix<float,6,1> v;
    v << T(2,1),
        T(0,2),
        T(1,0),
        T(0,3),
        T(1,3),
        T(2,3);
    return v;
}

Eigen::Matrix<float,6,6> GetAdjointMatrix(const Eigen::Matrix<float,4,4>& T) {
    Eigen::Matrix<float,3,3> rotation = T.block<3,3>(0,0);
    Eigen::Matrix<float,3,1> position = T.block<3,1>(0,3);
    Eigen::Matrix<float,3,3> positionSkew = GetSkewSymmetricMatrix3d(position);

    Eigen::Matrix<float,Eigen::Dynamic,Eigen::Dynamic> adj(6,6);
    adj.block<3,3>(0,0) = rotation;
    adj.block<3,3>(0,3) << Eigen::Matrix<float,3,3>::Zero();
    adj.block<3,3>(3,0) = positionSkew * rotation;
    adj.block<3,3>(3,3) = rotation;
    return adj;
}

Eigen::Matrix<float,4,4> GetTransformationMatrix(const char& rpy,const float& theta, const float& x, const float& y, const float& z ) {
    Eigen::Matrix<float,4,4> mat= Eigen::Matrix<float,4,4>::Identity();
    switch(rpy) {
        case 'r':
            mat <<  1          , 0         , 0          , x,
                    0          , cos(theta), -sin(theta), y,
                    0          , sin(theta), cos(theta) , z,
                    0          , 0         , 0          , 1; break;

        case 'p':
            mat <<  cos(theta) , 0         , sin(theta) , x,
                    0          , 1         , 0          , y,
                    -sin(theta), 0         , cos(theta) , z,
                    0          , 0         , 0          , 1; break;

        case 'y':
            mat <<  cos(theta), -sin(theta), 0          , x,
                    sin(theta), cos(theta) , 0          , y,
                    0         , 0          , 1          , z,
                    0         , 0          , 0          , 1; break;
        default:
            mat <<  1         , 0          , 0          , x,
                    0         , 1          , 0          , y,
                    0         , 0          , 1          , z,
                    0         , 0          , 0          , 1; break;
    }
    return mat;
}

//          0      , 0         , 59.6      , 283.2     , 368.5,
//          0      , 0         , 0         , 0         , 0       ,
//          0      , 60.9      , 288.8     , 288.8     , 288.8

Eigen::Matrix<float,4,4> ComputeForwardKinematics(const Eigen::Matrix<float,5,1>& theta) {

    Eigen::Matrix<float,4,4> T = Eigen::Matrix<float,4,4>::Identity();

    Eigen::Matrix<float,4,4> T_01 = GetTransformationMatrix('y',theta(0),0,0,0);
    Eigen::Matrix<float,4,4> T_12 = GetTransformationMatrix('p',theta(1),0,0,60.9);
    Eigen::Matrix<float,4,4> T_23 = GetTransformationMatrix('p',theta(2),59.6,0,227.9);
    Eigen::Matrix<float,4,4> T_34 = GetTransformationMatrix('p',theta(3),229.2,0,0);
    Eigen::Matrix<float,4,4> T_45 = GetTransformationMatrix('r',theta(4),85.3,0,0);
    Eigen::Matrix<float,4,4> T_5E = GetTransformationMatrix('i',0       ,119,0,0);

    T = T * T_01* T_12* T_23* T_34* T_45* T_5E;
    return T;
}

Eigen::Matrix<float,6,5> GetSpaceJacobian(const Eigen::Matrix<float,5,1>& theta) {
    Eigen::Matrix<float,4,4> T = Eigen::Matrix<float,4,4>::Identity();
    Eigen::Matrix<float,6,5> J_s = Eigen::Matrix<float,6,5>::Zero();
    J_s.col(0) = screw.col(0);

    for (int i = 1; i < 5; ++i) {
        T = T * (GetSkewSymmetricMatrix4d(screw.col(i-1)) * theta(i-1)).exp();
        J_s.col(i) = GetAdjointMatrix(T) * screw.col(i);
    }
    return J_s;
}

Eigen::Matrix<float, 6, 5> GetBodyJacobian(const Eigen::Matrix<float,5,1>& theta) {
    Eigen::Matrix<float,4,4> T_sb = ComputeForwardKinematics(theta);
    Eigen::Matrix<float,6,5> spaceJacobian = GetSpaceJacobian(theta);
    Eigen::Matrix<float,6,5> bodyJacobian = GetAdjointMatrix(T_sb.inverse())*spaceJacobian;
    return bodyJacobian;
}

Eigen::Matrix<float,5,6> GetPseudoInverse(const Eigen::Matrix<float,5,1>& theta) {
    Eigen::Matrix<float,6,5> bodyJacobian = GetBodyJacobian(theta);
    Eigen::Matrix<float,5,6> pinvJ = bodyJacobian.completeOrthogonalDecomposition().pseudoInverse();
    return pinvJ;
}

Eigen::Matrix<float, 5,6> GetDLSInverse(const Eigen::Matrix<float, 5, 1> &theta) {
    float lambda_dls = 1;
    Eigen::Matrix<float,6,5> bodyJacobian = GetBodyJacobian(theta);
    Eigen::Matrix<float,5,6> dlsJ = (bodyJacobian.transpose() * bodyJacobian + lambda_dls * Eigen::Matrix<float,5,5>::Identity()).inverse()*bodyJacobian.transpose();
    return dlsJ;
}

Eigen::Matrix<float,6,1> GetBodyTwist(const Eigen::Matrix<float,5,1>& theta, const Eigen::Matrix<float,5,1>& desiredTheta) {
    Eigen::Matrix<float,4,4> T_sb = ComputeForwardKinematics(theta);
    Eigen::Matrix<float,4,4> T_sd = ComputeForwardKinematics(desiredTheta);
    Eigen::Matrix<float,4,4> bodyTwistMatrix = (T_sb.inverse()*T_sd).log();
    Eigen::Matrix<float,6,1> bodyTwist = ConvertSkew4ToVec6(bodyTwistMatrix);

    return bodyTwist;
}

Eigen::Matrix<float,6,1> GetBodyTwistPosition(const Eigen::Matrix<float,5,1>& theta, const Eigen::Matrix<float,3,1>& desiredPosition) {
    Eigen::Matrix<float,4,4> T_sb = ComputeForwardKinematics(theta);
    Eigen::Matrix<float,4,4> T_sd = GetTransformationMatrix('i',0,desiredPosition(0),desiredPosition(1),desiredPosition(2));
    Eigen::Matrix<float,4,4> bodyTwistMatrix = (T_sb.inverse()*T_sd).log();
    Eigen::Matrix<float,6,1> bodyTwist = ConvertSkew4ToVec6(bodyTwistMatrix);

    return bodyTwist;
}

Eigen::Matrix<float,5,1> ComputeNumericalInverseKinematics(const Eigen::Matrix<float,5,1>& desiredTheta) {
    const Eigen::Matrix<float,5,1> theta_init = Eigen::Matrix<float,5,1>::Zero();

    const float beta = 0.1;
    Eigen::Matrix<float,5,6> pinvJ_b = GetPseudoInverse(theta_init);
    Eigen::Matrix<float,6,1> bodyTwist = GetBodyTwist(theta_init,desiredTheta);

    Eigen::Matrix<float,5,1> theta_iter = Eigen::Matrix<float,5,1>::Zero();
    int count=0;
    float error = bodyTwist.block<3,3>(3,0).norm();
    while(error > pow(10,-3)) {
        theta_iter = theta_iter + beta * pinvJ_b.block<5,3>(0,3) * bodyTwist.block<3,1>(3,0);

        pinvJ_b = GetPseudoInverse(theta_iter);
        bodyTwist = GetBodyTwist(theta_iter,desiredTheta);

        error = bodyTwist.norm();
        count++;
        if(count > 10000) {
            std::cout << "Iteration limit reached." << std::endl;
            break;
        }
    }
    std::cout << "Iteration: " << count << std::endl;
    return theta_iter;
}


//TODO : When iteration ends, theta_iter is initial theta of next IK;
Eigen::Matrix<float,5,1> ComputeNumericalInverseKinematicsPosition(const Eigen::Matrix<float,5,1>& currentTheta, const Eigen::Matrix<float,3,1>& desiredPosition) {

    const float beta = 0.1;
    Eigen::Matrix<float,5,6> pinvJ_b = GetPseudoInverse(currentTheta);
    Eigen::Matrix<float,5,6> dlsJ_b = GetDLSInverse(currentTheta);
    // Eigen::Matrix<float,6,5> J_b = GetBodyJacobian(currentTheta);
    Eigen::Matrix<float,6,1> bodyTwist = GetBodyTwistPosition(currentTheta, desiredPosition);
    Eigen::Matrix<float,5,1> theta_iter = currentTheta;
    Eigen::Matrix<float,5,5> I = Eigen::Matrix<float,5,5>::Identity();
    // Eigen::Matrix<float,5,1> del_h = Eigen::Matrix<float,5,1>::Zero();
    float theta_h = M_PI/3;


    int count=0;
    float error = bodyTwist.block<3,1>(3,0).norm();

    while(error > 1) {
        count++;
        if(count > MAX_ITER) {
            std::cout << "Iteration limit reached." << std::endl;
            return currentTheta;
        }
        // del_h[0] = currentTheta[0] - theta_h;
        theta_iter += beta * pinvJ_b.block<5,3>(0,3) * bodyTwist.block<3,1>(3,0);
        // theta_iter += beta * dlsJ_b.block<5,3>(0,3) * bodyTwist.block<3,1>(3,0) - (I - dlsJ_b.block<5,3>(0,3)* J_b.block<3,5>(3,0)) * del_h * beta;
        //pinvJ_b = GetPseudoInverse(theta_iter);
         dlsJ_b = GetDLSInverse(theta_iter);
        // J_b = GetBodyJacobian(theta_iter);
        bodyTwist = GetBodyTwistPosition(theta_iter,desiredPosition);
        error = bodyTwist.block<3,1>(3,0).norm();
        /*for(int i=0;i<5;i++) {
            theta_iter[i] = fmod(theta_iter[i],2*M_PI);
            if(theta_iter[i] > M_PI)
            {
                theta_iter[i] = M_PI;
            }
            else if(theta_iter[i] < -M_PI)
            {
                theta_iter[i] = -M_PI;
            }
        }*/
    }

    for(int i=0;i<5;i++) {
        theta_iter[i] = fmod(theta_iter[i],2*M_PI);
        theta_iter[i] = (theta_iter[i]>M_PI?theta_iter[i]-2*M_PI:theta_iter[i]);
        theta_iter[i] = (theta_iter[i]<-1*M_PI?theta_iter[i]+2*M_PI:theta_iter[i]);
    }
    return theta_iter;
}









