#include "subscribe_/topic_subscriber.h"

ros_hitung::ros_hitung()
			: num_sub(nh_.subscribe("/numbers", 10, &ros_hitung::num_callback, this)),
			  hit_pub(nh_.advertise<std_msgs::Int32>("/hasil_hit", 10))
			{}

int ros_hitung::hitung_hitung(int nilai){
	int hn = nilai - 100;
	return hn;
}

void ros_hitung::num_callback(const std_msgs::Int32::ConstPtr& msg_){
	ROS_INFO("Received from publisher: %d", msg_->data);
	data_pub_hit.data = hitung_hitung(msg_->data);
}

void ros_hitung::PublishAll(){
	hit_pub.publish(data_pub_hit);
}