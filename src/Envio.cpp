#include "Envio.h"
#include <iostream>
using namespace std;
  Envio::Envio(){
    Tarjeta="";
    CVV="";
    Vencimiento="";
  }


  std::string Envio::getTarjeta(){
    return Tarjeta;
  }

  std::string Envio::getCVV(){
    return CVV;
  }
  std::string Envio::getVencimiento(){
    return Vencimiento;
  }
