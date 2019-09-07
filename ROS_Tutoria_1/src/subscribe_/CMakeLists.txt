cmake_minimum_required(VERSION 2.8.3)
project(subscribe_)

add_compile_options(-std=c++11 -mavx -mfma)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
)

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES subscribe_
)

add_executable(topic_subscriber_node src/topic_subscriber.cpp src/topic_subscriber_node.cpp)

target_link_libraries(topic_subscriber_node  ${catkin_LIBRARIES})

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)
