#include <Arduino.h>
/*********
  Mohamed Al Howaidi
*********/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SoftwareSerial.h>

#include "my_library.h"

#define RXD2 16
#define TXD2 17

void setup() {
  Serial2.begin(115200);
}

void loop() {
    //Serial2.write("gear.txt=\"5\""); 
    //Serial2.write("rpm.txt=\"445\"");
  enviarDatosGear(1);  
  enviarDatosRPM(455);
  enviarDatosGear(2);  
  enviarDatosRPM(565); 
  enviarDatosGear(3);  
  enviarDatosRPM(575); 
  enviarDatosGear(2);  
  enviarDatosRPM(485); 
  enviarDatosGear(3);  
  enviarDatosRPM(565); 
  enviarDatosGear(4);  
  enviarDatosRPM(645);
  enviarDatosGear(5);  
  enviarDatosRPM(985);
  enviarDatosGear(6);  
  enviarDatosRPM(1145);        
}