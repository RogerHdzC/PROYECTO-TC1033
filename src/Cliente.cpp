#include "Cliente.h"
#include <string>
using namespace std;

Cliente::Cliente(){
  nombre = "";
  apellido1 = "";
  apellido2 = "";
  edad = "";
  telefono = "";
  pais = "";
  ciudad = "";
  direccion = "";
}

Cliente::Cliente(std::string name,std::string ap1, std::string ap2, std::string age, std::string tel, std::string paisc, std::string city, std::string dir){
  nombre = name;
  apellido1 = ap1;
  apellido2 = ap2;
  edad = age;
  telefono = tel;
  pais = paisc;
  ciudad = city;
  direccion = dir;
}

std::string Cliente::get_nombre(){
  return nombre;
}

std::string Cliente::get_apellido1(){
  return apellido1;
}

std::string Cliente::get_apellido2(){
  return apellido2;
}

std::string Cliente::get_edad(){
  return edad;
}

std::string Cliente::get_telefono(){
  return telefono;
}

std::string Cliente::get_pais(){
  return pais;
}

std::string Cliente::get_ciudad(){
  return ciudad;
}

std::string Cliente::get_direccion(){
  return direccion;
}
