#ifndef VIDEOJUEGOS_H
#define VIDEOJUEGOS_H


#include <string>

class Videojuegos{
  //ATRIBUTOS
  private:
    std::string Nombre;
    int NuJugadores;
    std::string Online;
    std::string Clasificacion;
    std::string GENERO;
    std::string id;
    float Precio;


  //MÉTODOS
  public:
    Videojuegos();

    Videojuegos(std::string GENERO);

    Videojuegos(int id);

    int visualizarPrecio(int id);
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

#endif
