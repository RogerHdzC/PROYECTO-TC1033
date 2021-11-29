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

int datos(int);

int main(int argc, char** argv) {
  int opcion,desplegar,indatos;

  cout<<"Bienvenido a la ROCH: XBOX GAMES STORE \n";

  cout<<"Desea darnos un poco de información sobre usted antes de entrar a la tienda? \n1.Si \n2.No \n";
  cin>>indatos;
  if(indatos==1){
    datos(indatos);
  }
  else if (indatos == 2){
    cout<<"Desea ver nuestra librería de juegos? \n1.Si \n2.No \n";
    cin>>desplegar;
    if (desplegar==1){
      menu(opcion);
    }
    else if(desplegar==2){
      cout<<"Hasta luego, vuelva pronto :)";
    }
  }






  return 0;
}

int menu(int option){
  int opcion,use,add;
  bool usar=true,agregar=true;
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
  cout<<"¿Gustaría agregar a su carrito alguno de estos juegos?\n1.Si \n2.No";
  cin>>use;
  while (agregar==true){
  if (use ==1){
    add=true;
    cout<<"******Ingrese el ID******\n";
  }
  else{
    agregar=false;
  }
  }
  cout<<"¿Quieres ver juegos de otro géneros? \n1.Si \n2.No\n"<<endl;
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
int datos(int opcion){
  int desplegar;
   string nombre1,apellido_materno1,apellido_paterno1,edad1,telefono1,pais1,ciudad1,direccion1;
    cout<<"Introduce tu nombre:\n ";
   cin.ignore();
   getline(cin,nombre1);
   cout<<"Introduce tu apellido paterno:\n ";
   getline(cin,apellido_paterno1);

   cout<<"Introduce tu apellido materno:\n ";
   getline(cin,apellido_materno1);

   cout<<"Introduce tu edad: \n";
   cin>>edad1;

   cout<<"Introduce tu número telefónico:\n ";
   cin.ignore();
   getline(cin,telefono1);

   cout<<"Introduce tu pais:\n ";
   cin>>pais1;

   cout<<"Introduce tu ciudad:\n ";
   cin>>ciudad1;

   cout<<"Introduce tu direccion:\n ";
   cin.ignore();
   getline(cin,direccion1);


   Cliente* cliente1 = new Cliente(nombre1,apellido_materno1,apellido_paterno1,edad1,telefono1,pais1,ciudad1,direccion1);

   cout<<"Bienvenido/a "<<cliente1->get_nombre();cout<<"\n";
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
