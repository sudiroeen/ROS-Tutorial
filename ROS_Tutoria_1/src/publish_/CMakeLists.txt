cmake_minimum_required(VERSION 2.8.3)
project(publish_)

add_compile_options(-std=c++11 -mavx -mfma)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
)

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES publish_
)

add_executable(topic_publisher_node src/topic_publisher_node.cpp)

target_link_libraries(topic_publisher_node  ${catkin_LIBRARIES})

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)
