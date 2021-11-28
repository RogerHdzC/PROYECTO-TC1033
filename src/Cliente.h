#include <string>

class Cliente{

  private:
    std::string nombre, apellido1, apellido2, edad, telefono, pais, ciudad, direccion;

  public:

    //Constructor
    Cliente();

    Cliente(std::string name, std::string ap1, std::string ap2, std::string age, std::string tel, std::string paisc, std::string city, std::string dir);

    std::string get_nombre();
    std::string get_apellido1();
    std::string get_apellido2();
    std::string get_edad();
    std::string get_telefono();
    std::string get_pais();
    std::string get_ciudad();
    std::string get_direccion();
};
