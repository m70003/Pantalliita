#include "pantallita.h"

class Pantalla{
  private:
    HardwareSerial* _serial;
    
  public:
  
    Pantalla(HardwareSerial &serial) {
      _serial = &serial;
    }
  
    void enviarDatosGear(int n) {
      
      _serial->begin(115200);
      byte a = 0xff;
      _serial->write("gear.txt=\"%f\"",n);
      for ( int i = 0; i < 3; i ++ ){
        _serial->write(a);
      }
    }

    void enviarDatosRPM(int n) {
      
     _serial->begin(115200);
      byte a = 0xff;
      _serial->write("rpm.txt=\"%f\"",n);
      for ( int i = 0; i < 3; i ++ ){
       _serial->write(a);
      }
    }

}; 

