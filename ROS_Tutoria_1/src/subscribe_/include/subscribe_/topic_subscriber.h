#pragma once 

#include "ros/ros.h"
#include "std_msgs/Int32.h"
#include <iostream>

class ros_hitung{
   private:
  		int hitung_hitung(int nilai);
		void num_callback(const std_msgs::Int32::ConstPtr& msg_);
		ros::NodeHandle nh_;
		ros::Subscriber num_sub;
		ros::Publisher hit_pub;
		
		std_msgs::Int32 data_pub_hit;

	public:
		ros_hitung();
		void PublishAll();
};