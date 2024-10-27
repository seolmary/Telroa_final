//
// Created by starlight on 24. 8. 18.
//

#ifndef IKSOLVER2_H
#define IKSOLVER2_H

#include <iostream>
#include <cmath>
#include <Eigen/Dense>
#include <time.h>
#include <unsupported/Eigen/MatrixFunctions>

#define MAX_ITER 100

extern Eigen::Matrix<float,5,1> robotLink;
extern Eigen::Matrix<float,6,5> screw;
extern Eigen::Matrix<float,5,1> theta_max;

void initializeRobotLink();
void initializeScrew();
Eigen::Matrix<float,3,3> GetSkewSymmetricMatrix3d(const Eigen::Matrix<float,3,1>& v);
Eigen::Matrix<float,4,4> GetSkewSymmetricMatrix4d(const Eigen::Matrix<float,6,1>& screw);
Eigen::Matrix<float,6,1> ConvertSkew4ToVec6(const Eigen::Matrix<float,4,4>& T);
Eigen::Matrix<float,6,6> GetAdjointMatrix(const Eigen::Matrix<float,4,4>& T);
Eigen::Matrix<float,4,4> GetTransformationMatrix(const char& rpy, const float& theta,
                                                  const float& x, const float& y, const float& z );
Eigen::Matrix<float,4,4> ComputeForwardKinematics(const Eigen::Matrix<float,5,1>& theta);
Eigen::Matrix<float,6,5> GetSpaceJacobian(const Eigen::Matrix<float,5,1>& theta);
Eigen::Matrix<float,6,5> GetBodyJacobian(const Eigen::Matrix<float,5,1>& theta);
Eigen::Matrix<float,5,6> GetPseudoInverse(const Eigen::Matrix<float,5,1>& theta);
Eigen::Matrix<float,5,6> GetDLSInverse(const Eigen::Matrix<float,5,1>& theta);
Eigen::Matrix<float,6,1> GetBodyTwist(const Eigen::Matrix<float,5,1>& theta, const Eigen::Matrix<float,5,1>& desiredTheta);
Eigen::Matrix<float,5,1> ComputeNumericalInverseKinematics(const Eigen::Matrix<float,5,1>& desiredTheta);
Eigen::Matrix<float,5,1> ComputeNumericalInverseKinematicsPosition(const Eigen::Matrix<float,5,1>& currentTheta, const Eigen::Matrix<float,3,1>& desiredPosition);

#endif //IKSOLVER2_H
