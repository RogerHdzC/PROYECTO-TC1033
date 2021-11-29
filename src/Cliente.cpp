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

Cliente::Cliente(std::string nombre){
  this -> nombre = nombre;
}

Cliente::Cliente(std::string nombre, std::string apellido1, std::string apellido2, std::string edad, std::string telefono, std::string pais, std::string ciudad, std::string direccion){
  this -> nombre = nombre;
  this -> apellido1 = apellido1;
  this -> apellido2 = apellido2;
  this -> edad = edad;
  this -> telefono = telefono;
  this -> pais = pais;
  this -> ciudad = ciudad;
  this -> direccion = direccion;
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
