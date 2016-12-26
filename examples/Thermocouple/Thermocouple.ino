#include <Thermocouple.h>

void setup() {
  // put your setup code here, to run once:
  double temp = Thermocouple.KtypeTemp(2.022);
  double Volt = Thermocouple.KtypeVoltage(50);
  Serial.begin(9600);
  delay(1000);
  Serial.println(temp);
  delay(1000);
  Serial.println(Volt);

}

void loop() {
  // put your main code here, to run repeatedly:

}
