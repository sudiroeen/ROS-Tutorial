#include "subscribe_/topic_subscriber.h"

int main(int argc, char** argv){
  ros::init(argc, argv, "topic_subscriber_node");
  
  ros_hitung RH;

  ros::Rate loop_rate(10);

  while(ros::ok()){
      RH.PublishAll();

      ros::spinOnce();
      loop_rate.sleep();
  }
  return 0;
}