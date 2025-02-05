#include <iostream>
#include <ros/ros.h>
#include "opti/get.h"
#include <stdlib.h>


int main (int argc, char **argv)
{
    
    // Check for invalid number of arguments
    if (argc != 1) {
        std::cerr << "Usage: " << argv[0] << std::endl;
        return 1;
    }

    // Initialize ROS
    try {
        ros::init(argc, argv, "opti");
    } catch (const std::exception& e) {
        std::cerr << "Error initializing ROS: " << e.what() << std::endl;
        return 1;
    }

    ros::init(argc, argv, "opti");
    ros::NodeHandle n;
	getter getter(&n, 20);
	
 while(ros::ok())
        {

    // Create getter object
    getter getter(&n, 20);
    if (!getter) {
        std::cerr << "Failed to create getter object" << std::endl;
        return 1;
    }

    // Enter main loop
    while(ros::ok())
    {
        try {
            ros::spinOnce();
        } catch (const std::exception& e) {
            std::cerr << "Exception caught in main loop: " << e.what() << std::endl;
            break;
ros::spinOnce();
        }
    }

    return 0;
return 0;
}

