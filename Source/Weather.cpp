#include "Weather.h"

float LocalAdjust(float raw)
{
   return static_cast<float> (raw* static_cast<float>(0.98));
}
