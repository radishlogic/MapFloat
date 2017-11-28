/*
	MapFloat.h

	Based on the Arduino Map function but this time input, output and parameters are float.

	This code is maintained by the team at RadishLogic.com
*/


#include "MapFloat.h"

float mapFloat(float _input, float _inputMin, float _inputMax, float _outputMin, float _outputMax) {
  return (_input - _inputMin) * (_outputMax - _outputMin) / (_inputMax - _inputMin) + _outputMin; 
}