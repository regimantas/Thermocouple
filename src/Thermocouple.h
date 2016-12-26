#ifndef THERMOCOUPLE_H
#define THERMOCOUPLE_H

#include <Arduino.h>

class Thermocouple {
public:
        //Thermocouple();
        double KtypeTemp(double voltage);
        double KtypeVoltage(double input_temp);
        double StypeVoltage(double temp_s);
		double StypeTemp(double volt_s);
		double JtypeVoltage(double temp_j);
		double JtypeVolt(double volt_t_j);
private:
		
};
 
#endif