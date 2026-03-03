#include "flight_control.h"
#include <iostream>

void fc_init()
{
    std::cout << "Flight controller initialized\n";
}

void fc_update(float roll, float pitch, float yaw)
{
    std::cout << "Stabilizing RPY: "
              << roll << " "
              << pitch << " "
              << yaw << "\n";
}
