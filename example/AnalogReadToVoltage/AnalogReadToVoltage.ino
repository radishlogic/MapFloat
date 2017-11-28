#include "MapFloat.h"

#define PIN_ANALOG A0

void setup() {
  Serial.begin(115200); // Initialize Serial
  while(!Serial);       // Wait for Serial Connection
}

void loop() {
  // Read the Analog Value of A0 pin.
  int analogValue = analogRead(A0);  

  // Computation for the Voltage Value using mapFloat
  float voltageValue = mapFloat(analogValue, 0, 1023, 0, 5);
  
  Serial.println(voltageValue);
  
  delay(1000);
}
