#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

  private:
    std::string nombre, apellido1, apellido2, edad, telefono, pais, ciudad, direccion;

  public:

    //Constructor
    Cliente();

    Cliente(std::string nombre);
    Cliente(std::string nombre, std::string apellido1, std::string apellido2, std::string edad, std::string telefono, std::string pais, std::string ciudad, std::string direccion);

    std::string get_nombre();
    std::string get_apellido1();
    std::string get_apellido2();
    std::string get_edad();
    std::string get_telefono();
    std::string get_pais();
    std::string get_ciudad();
    std::string get_direccion();
};

#endif
