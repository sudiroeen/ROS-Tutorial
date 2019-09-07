#include "ros/ros.h"
#include "std_msgs/Int32.h"
#include <iostream>


void getHitung(const std_msgs::Int32::ConstPtr& msg)
{
  ROS_INFO("Hasil Hitung: [%d]\n\n",msg->data);
}

int main(int argc, char **argv)
{
  ros::init(argc, argv,"main_node");
  ros::NodeHandle node_obj;
  ros::Subscriber number_subscriber = node_obj.subscribe("/hasil_hit",10,getHitung);
  ros::spin();
  return 0;
}

