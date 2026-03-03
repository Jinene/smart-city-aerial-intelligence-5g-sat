#include "flight_control.h"
#include "5g_comm.h"
#include "sat_backup.h"
#include "ai_inference.h"

int main()
{
    fc_init();
    comm5g_init();
    sat_init();

    float temperature = 45;
    float battery = 60;

    if (detectAnomaly(temperature, battery))
    {
        sat_sendEmergency("Drone anomaly detected!");
    }
    else
    {
        comm5g_sendTelemetry("Drone operating normally");
    }

    return 0;
}
