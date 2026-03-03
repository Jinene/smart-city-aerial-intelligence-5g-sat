#include "ai_inference.h"

bool detectAnomaly(float temperature, float battery)
{
    if (temperature > 80 || battery < 15)
        return true;
    return false;
}
