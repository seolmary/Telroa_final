import os
from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import Node
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, TimerAction
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration, PythonExpression
def generate_launch_description():
    sdf_location = "src/telroa_launch_pkg/urdf/carbon_pipe_arm.sdf"
    hard_node = Node(
        package='telroa_hardware_pkg',
        executable='hard_node',
        name='hard_node',
        output='screen',)
    
    ik_node = Node(
        package='telroa_hardware_pkg',
        executable='ik_node',
        name='ik_node',
        output='screen',)
    
    comm_node = Node(
        package='telroa_communication_pkg',
        executable='comm_node',
        name='comm_node',
        output='screen',)
    
    bridge = Node(
    package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=['/rotor_cmd1@std_msgs/msg/Float64@ignition.msgs.Double',
                '/rotor_cmd2@std_msgs/msg/Float64@ignition.msgs.Double',
                '/rotor_cmd3@std_msgs/msg/Float64@ignition.msgs.Double',
                '/rotor_cmd4@std_msgs/msg/Float64@ignition.msgs.Double',
                '/rotor_cmd5@std_msgs/msg/Float64@ignition.msgs.Double'],
        output='screen')
    return LaunchDescription([
        ExecuteProcess(
            cmd=[ "ign", "gazebo", sdf_location ],
            output="screen",
        ),
        # hard_node,
        # ik_node,
        # comm_node,
        bridge
  ])
