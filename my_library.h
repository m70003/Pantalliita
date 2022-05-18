#ifndef MY_LIBRARY_H
#define MY_LIBRARY_H
#include <Arduino.h>
#include "HardwareSerial.h"
void enviarDatosGear(int str);
void enviarDatosRPM(int str);
HardwareSerial* _serial;
#endif