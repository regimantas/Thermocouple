#include <Thermocouple.h>

Thermocouple Therm;

void setup() {
  // put your setup code here, to run once:
  double temp = Therm.KtypeTemp(2.022);
  double Volt = Therm.KtypeVoltage(50);
  Serial.begin(9600);
  delay(1000);
  Serial.println(temp);
  delay(1000);
  Serial.println(Volt);

}

void loop() {
  // put your main code here, to run repeatedly:

}