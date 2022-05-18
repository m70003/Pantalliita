#include "my_library.h"

class Pantalla{
  private:
    HardwareSerial* _serial;
    
  public:
  
    Pantalla(HardwareSerial &serial) {
      _serial = &serial;
    }
  
    void enviarDatosGear(int str) {
      
      _serial->begin(115200);
      byte a = 0xff;
      //int value = str - '0';
      _serial->write("rpm.txt=\"%f\"",str);
      //String devuelve = "gear.txt=\"" + str + "\"";
      //_serial->write("gear.txt=\"" + str + "\""); 
      for ( int i = 0; i < 3; i ++ ){
        _serial->write(a);
      }
      delay(1000);
    }

    void enviarDatosRPM(int str) {
      
     _serial->begin(115200);
      byte a = 0xff;
      //int value = str - '0';
      _serial->write("rpm.txt=\"%f\"",str);
      //String devuelve = "rpm.txt=\"" + str + "\"";
      //_serial->write("rpm.txt=\""+str+"\"");
      for ( int i = 0; i < 3; i ++ ){
       _serial->write(a);
      }
      delay(1000);
  
    }

}; 

