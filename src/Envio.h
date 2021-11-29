#include <string>
#include "Videojuegos.h"
#include "Cliente.h"

class Envio : public Videojuegos, public Cliente{
  private:
    std::string Tarjeta,CVV,Vencimiento;
  public:

  Envio();

  Envio(int id) : Videojuegos(id){}

  Envio(std::string nombre, std::string apellido1, std::string apellido2, std::string edad, std::string telefono, std::string pais, std::string ciudad, std::string direccion, std::string Tarjeta, std::string CVV,std::string Vencimiento) : Cliente(nombre,apellido1,apellido2,edad,telefono,pais,ciudad,direccion){
    this -> Tarjeta = Tarjeta;
    this -> CVV = CVV;
    this -> Vencimiento = Vencimiento;
  }

  std::string getTarjeta();
  std::string getCVV();
  std::string getVencimiento();
};
