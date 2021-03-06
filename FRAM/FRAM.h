/*##################################################################################
  ############ Programa creado por FDSoftware ######################################
  ############       codereactor.xyz          ######################################
  ##################################################################################
*/
/*Libreria para control de memoria FRAM por i2c (FM24CL16)
Funciones:
  guarda variable en memoria
  recupera la informacion como variable
  borra todos los datos de la memoria
*/
#ifndef FRAM_h
#define FRAM_h

#include <Arduino.h>
#include <Wire.h>

class FRAMControl(){
public:
  FRAMControl();
  void leer(int dir);
  void  grabar(float dato, int dir);
  void  format();
private:
  int _dir;
  float _dato;
  int dirFRAM = 0;
  int indice = 0;
  int dirfinal = 0;
};

#endif
