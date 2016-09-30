#include <ros/ros.h>
#include <geometry_msgs/Quaternion.h>
#include <tf/tf.h>
#include <stdio.h>


int main(int argc,char **argv)
{
//    ros::init(argc,argv,"getYaw");

    double x_a[4] = {0.0,0.0,0.0,0.0};
    double y_a[4] = {0.0,0.0,0.0,0.0};
    double z_a[4] = {-0.032,0.099,0.0,0.0};
    double w_a[4] = {0.9999,0.995,0.0,0.0};



    geometry_msgs::Quaternion quatation;
    for (int i = 0; i < 4; i ++)
    {
        quatation.x = x_a[i];
        quatation.y = y_a[i];
        quatation.z = z_a[i];
        quatation.w = w_a[i];
        double result = tf::getYaw(quatation);
        printf("%lf \n",result * 180 / 3.1415926);
    }
    return 0;
}
