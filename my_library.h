#ifndef PANTALLITA_H
#define PANTALLITA_H
#include <Arduino.h>
#include "HardwareSerial.h"
void enviarDatosGear(int str);
void enviarDatosRPM(int str);
HardwareSerial* _serial;
#endif
