#include "ConvertNk.h"

float ConvCtoF(float tempC)
{
   float tempF;

   tempF = static_cast<float> (tempC * static_cast<float>(9.0 / 5.0));
   tempF +=  static_cast<float> (32.0);

   return tempF;
}
