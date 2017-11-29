/*
	MapFloat.h

	Based on the Arduino Map function but this time input, output and parameters are float.

	This code is maintained by the team at RadishLogic.com
*/


#include "MapFloat.h"

float mapFloat(float value, float fromLow, float fromHigh, float toLow, float toHigh) {
  return (value - fromLow) * (toHigh - toLow) / (fromHigh - fromLow) + toLow; 
}