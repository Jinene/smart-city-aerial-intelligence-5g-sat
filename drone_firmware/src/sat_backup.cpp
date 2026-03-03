#include "sat_backup.h"
#include <iostream>

void sat_init()
{
    std::cout << "Satellite backup ready\n";
}

void sat_sendEmergency(const std::string& msg)
{
    std::cout << "Emergency via SAT: " << msg << "\n";
}
