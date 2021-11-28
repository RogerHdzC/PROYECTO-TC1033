// Instituto Tecnológico y de Estudios Superiores de Monterrey
// Campus Puebla
// Pensamiento Computacional Orientado a Objetos TC1033
// Proyecto Integrador
// Título del Proyecto: Tienda en Línea de XBOX
// Profesor: Dr. Daniel Pérez Rojas
/* Estudiantes:
   Diego García de los Salmones Ajuria / A01736106
   Rogelio Hernández Cortés / A01735819
   Christian Antonio Ruiz Pérez / A01736431
*/
// Primer Semestre
// Periodo Agosto – Diciembre 2021
// Fecha de Entrega: 30 de Noviembre de 2021

#include <sstream>

#define NOMBRE_ARCHIVO "VIDEOJUEGOS.csv"
#include <iostream>
#include <fstream>
using namespace std;
#include "Cliente.h"
#include "Videojuegos.h"
#include <string>

int menu(int);

int main(int argc, char** argv) {
  int opcion,desplegar;

  cout<<"Bienvenido a la ROCH: XBOX GAMES STORE \n";

  cout<<"Desea ver nuestra librería de juegos? \n1.Si \n2.No \n";
  cin>>desplegar;
  if (desplegar==1){
    menu(opcion);
  }
  else if(desplegar==2){
    cout<<"Hasta luego, vuelva pronto :)";
  }




  return 0;
}

int menu(int option){
  int opcion,use;
  bool usar=true;
  Videojuegos* uno = new Videojuegos("AccionAventura");
  Videojuegos* dos = new Videojuegos("Carreras");
  Videojuegos* tres = new Videojuegos("Deportes");
  Videojuegos* cuatro = new Videojuegos("FPS");
  Videojuegos* quinto = new Videojuegos("Lucha");
  Videojuegos* sexto = new Videojuegos("Plataforma");
  Videojuegos* septimo = new Videojuegos("Rol");
  Videojuegos* octavo = new Videojuegos("Rpg");
  Videojuegos* noveno = new Videojuegos("Shooter");
  Videojuegos* decimo = new Videojuegos("Survival Horror");

  cout<<"Eliga un género para ver nuestras ofertas\n1.Accion y Aventura \n2.Carreras \n3. Deportes \n4.FPS \n5.Lucha \n6.Plataforma \n7.Rol \n8.Rpg \n9.Shooter \n10.Survival Horror \n11.Cerrar Tienda ";
  cout<<"\nIngresa una opcion: ";
  cin>>opcion;
  while (opcion<=0 || opcion>=12){
    cout<<"Ingresa una opcion válida: \n";
    cin>>opcion;
  }
  while (usar == true){
  switch (opcion){
    case 1: uno -> visualizarAccionAventura(); break;
    case 2: dos -> visualizarCarreras(); break;
    case 3: tres -> visualizarDeportes(); break;
    case 4: cuatro -> visualizarFPS(); break;
    case 5: quinto -> visualizarLucha(); break;
    case 6: sexto -> visualizarPlataforma(); break;
    case 7: septimo -> visualizarRol(); break;
    case 8: octavo -> visualizarRpg(); break;
    case 9: noveno -> visualizarShooter(); break;
    case 10: decimo -> visualizarSurvivalHorror(); break;
    default: cout<<"Hasta luego"; return 0;
  }
  cout<<"¿Quieres ver más juegos? \n1.Si \n2.No"<<endl;
    cin>>use;
    if (use == 1){
      usar = true;
      cout<<"Eliga un género para ver nuestras ofertas\n1.Accion y Aventura \n2.Carreras \n3. Deportes \n4.FPS \n5.Lucha \n6.Plataforma \n7.Rol \n8.Rpg \n9.Shooter \n10.Survival Horror \n11.Cerrar Tienda ";
      cout<<"\nIngresa una opcion: ";
      cin>>opcion;
    }
    else{
      usar = false;
    }

  }
  return 0;
}
