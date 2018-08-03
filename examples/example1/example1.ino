#include <BH1750.h>

BH1750 lightsensor;

void setup() {

  lightsensor.begin();
  Serial.begin(9600);
  Serial.println(" BH1750 example1");
  Serial.println(" ");
}

void loop() {

  Serial.print("Lightsensor: ");
  Serial.print(lightsensor.readLight());
  Serial.println(" lux");
  delay(1000);
}
