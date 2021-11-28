#include <string>

class Videojuegos{
  //ATRIBUTOS
  private:
    std::string Nombre;
    int NuJugadores;
    std::string Online;
    std::string Clasificacion;
    std::string GENERO;
    int Precio;


  //MÉTODOS
  public:
    Videojuegos(std::string Nombre, int NuJugadores, std::string Clasificacion, int Precio,std::string GENERO, std::string Online){ //CONSTRUCTOR
      this -> Nombre = Nombre;
      this -> NuJugadores = NuJugadores;
      this -> Clasificacion = Clasificacion;
      this -> Precio = Precio;
      this -> Online = Online;
    }
    Videojuegos(std::string GENERO){}

    std::string getNombre();
    int getNuJugadores();
    std::string getOnline();
    bool multiplayer(Videojuegos& d);
    std::string getClasificacion();
    int getPrecio();
    void visualizarDeportes();
    void visualizarAccionAventura();
    void visualizarCarreras();
    void visualizarFPS();
    void visualizarLucha();
    void visualizarPlataforma();
    void visualizarRol();
    void visualizarRpg();
    void visualizarShooter();
    void visualizarSurvivalHorror();

};
