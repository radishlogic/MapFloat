#include "MapFloat.h"

void setup() {
  Serial.begin(115200);   // Initialize Serial
  while(!Serial);         // Wait for Serial connection
}

void loop() {
  float input, output;

  input = 32.5;
  output = mapFloat(input, 0.0, 100.0, 0.0, 1000.0);
  Serial.println(input);
  Serial.println(output);
  Serial.println("++++");

  input = 45.67;
  output = mapFloat(input, 0.0, 100.0, 0.0, -1000.0);
  Serial.println(input);
  Serial.println(output);
  Serial.println("++++");

  input = 321.83;
  output = mapFloat(input, 0.0, 1000.0, 1000.0, 2000.0);
  Serial.println(input);
  Serial.println(output);
  Serial.println("++++");

  input = 563.09;
  output = mapFloat(input, 0.0, 1000.0, -1000.0, -2000.0);
  Serial.println(input);
  Serial.println(output);
  Serial.println("++++");

  input = 743.88;
  output = mapFloat(input, 32.76, 1023.32, 3212.32, -5212.978);
  Serial.println(input);
  Serial.println(output);
  Serial.println("++++");
  

  while(true);
  

}

