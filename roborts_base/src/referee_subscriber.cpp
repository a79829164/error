#include <ros/ros.h>
#include "roborts_msgs/RobotHeat.h"


void RefereeInfoCallback(const roborts_msgs::RobotHeat& msg)
{
    ROS_INFO("Subcribe Referee Info: %f", msg.chassis_volt);
    ROS_INFO("Subcribe Referee Info: %f", msg.chassis_current);
    ROS_INFO("Subcribe Referee Info: %f", msg.chassis_power);
    ROS_INFO("Subcribe Referee Info: %f", msg.chassis_power_buffer);
    ROS_INFO("Subcribe Referee Info: %f", msg.shooter_heat);
}

int main(int argc, char **argv)
{
    // 初始化ROS节点
    ros::init(argc, argv, "heat_subscriber");

    // 创建节点句柄
    ros::NodeHandle n;
    ROS_INFO("what?");
    // 创建一个Subscriber，订阅名为/person_info的topic，注册回调函数personInfoCallback
    ros::Subscriber Referee_info_sub = n.subscribe("/robot_heat", 30, RefereeInfoCallback);
    ROS_ERROR("???");

    ros::spin();

    return 0;
}
