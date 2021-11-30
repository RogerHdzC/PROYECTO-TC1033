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
#include "Envio.h"
#include <thread>
#include <chrono>
using std::this_thread::sleep_for;

void menu();

void datos();

bool carrito(bool);

int envio(int);
Envio baseDatos(Envio* objeto,Envio* juego1);

int main(int argc, char** argv) {
int desplegar,indatos;

cout<<"Bienvenido a la XBOX GAMES STORE \n";

cout<<"¿Desea darnos un poco de informacion sobre usted antes de entrar a la tienda? \n1.Si \n2.No \n";
cin>>indatos;
while(indatos<=0 || indatos>=3){
  cout<<"Ingresa una opcion valida entre 1 o 2\n";
  cin>>indatos;
}

if(indatos==1){
  datos();
}
else if (indatos == 2){
  cout<<"¿Desea ver nuestra libreria de juegos? \n1.Si \n2.No \n";
  cin>>desplegar;
  while(desplegar<=0 || desplegar>=3){
    cout<<"Ingresa una opcion válida entre 1 o 2";
    cin>>desplegar;
  }
  if (desplegar==1){
    menu();
  }
  else if(desplegar==2){
    cout<<"Hasta luego, vuelva pronto :)";
  }
}
return 0;
}

void menu(){
int opcion,use,again,fin;
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
while(usar==true) {
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
  default: cout<<"Hasta luego";
  }
  cout<<"Comprobando que estes bien :)\n1.Continuar\n2.Terminar Programa :)\n";
  cin>>fin;
  while(fin<=0 || fin>=3){
    cout<<"Indique una respuesta entre 1 o 2 \n";
    cin>>fin;
  }
  if (fin == 1){
    cout<<"¿Gustaría agregar a su carrito alguno de estos juegos?\n1.Si \n2.No \n";
    cin>>use;
    while(use<=0 || use>=3){
      cout<<"Ingresa una opcion válida entre 1 o 2\n";
      cin>>use;
    }
    if (use ==1){
      carrito(usar);
    }
    else if (use==2){
      cout<<"¿Quieres ver juegos de otro géneros? \n1.Si \n2.No\n"<<endl;
      cin>>again;
      while(again<=0 || again>=3){
      cout<<"Ingresa una opcion válida entre 1 o 2\n";
      cin>>again;
      }
      if (again == 1){
      cout<<"Eliga un género para ver nuestras ofertas\n1.Accion y Aventura \n2.Carreras \n3. Deportes \n4.FPS \n5.Lucha \n6.Plataforma \n7.Rol \n8.Rpg \n9.Shooter \n10.Survival Horror \n11.Cerrar Tienda ";
        cout<<"\nIngresa una opcion: ";
        cin>>opcion;
      }
      else if(again==2){
        cout<<"Hasta luego\n";
        usar=false;
      }
    }
  }
  else{
    cout<<"Hasta luego :)\n ";
    usar=false;
  }
}
}

void datos(){
int desplegar;
string nombre1,apellido_materno1,apellido_paterno1,edad1,telefono1,pais1,ciudad1,direccion1;
cout<<"Introduce tu nombre:\n ";
cin.ignore();
getline(cin,nombre1);

Cliente* cliente1 = new Cliente(nombre1);

cout<<"Bienvenido/a "<<cliente1->get_nombre();cout<<"\n";
cout<<"Desea ver nuestra librería de juegos? \n1.Si \n2.No \n";
cin>>desplegar;
while(desplegar<=0 || desplegar>=3){
  cout<<"Ingresa una opcion válida entre 1 o 2\n";
  cin>>desplegar;
}
if (desplegar==1){
  menu();
}
else if(desplegar==2){
  cout<<"Hasta luego, vuelva pronto :)\n";
}
}

bool carrito(bool sig){
int idL, seg,opcion;
    cout<<"**POR EL MOMENTO LA PÁGINA SOLO ADMITE UN MÁXIMO DE 1 COMPRA POR VUELTA**\n";
    cout<<"Introduzca el ID del juego que desea: \n";
    cin>>idL;
    while(idL<=0 || idL>=51){
      cout<<"Ingresa un ID válido\n";
      cin>>idL;
    }
    cout<<"Esta seguro/a de su elección? Le recomendamos ver el catalogo completo antes de tomar una elección \n1.Si\n2.No\n";
    cin>>seg;
    while(seg<=0 || seg>=3){
      cout<<"Ingresa una opción válida entre 1 o 2\n";
      cin>>seg;
    }
    if (seg==1){
      envio(idL);
    }
    else if (seg==2){
      sig=false;
      menu();
}
return 0;
}

int envio(int option){
int idl=option;
int con,info;
bool seguir=true;
string name, ap1, ap2, paisc, city,ven,dir1,age,nutarj,tel,segur;
Envio* juego1 = new Envio(idl);

cout<<"Monto a pagar de \n"<<juego1->visualizarPrecio(idl);
cout<<"El monto en pantalla es correcto? \n1.Si\n2.No\n";
cin>>con;
while(con<=0 || con>=3){
  cout<<"Ingresa una opción válida entre 1 o 2\n";
  cin>>con;
}
if (con==1){
  cout<<"Ingrese su nombre: \n";
  cin.ignore();
  getline(cin,name);
  cout<<"Ingrese su apellido paterno todo junto si es compuesto: \n";
  cin>>ap1;
  cout<<"Ingrese su apellido materno todo junto si es compuesto: \n";
  cin>>ap2;
  cout<<"Ingrese su edad: \n";
  cin>>age;
  cout<<"Ingrese su número telefónico todo junto: \n";
  cin>>tel;
  cout<<"Ingrese su país: \n";
  cin>>paisc,
  cout<<"Ingrese su ciudad: \n";
  cin>>city;
  cout<<"Ingrese la dirección donde llegará el paquete: \n";
  cin.ignore();
  getline(cin,dir1);
  cout<<"Ingrese el número de su tarjeta todo junto: \n";
  cin>>nutarj;
  cout<<"Ingrese la fecha de vencimiento de tu tarjeta: \n";
  cin.ignore();
  getline(cin,ven);
  cout<<"Ingrese el CVV: \n";
  cin>>segur;
  cout<<"Verifique si la información es correcta \n";

  Envio* datosenvio1=new Envio(name,ap1,ap2,age,tel,paisc,city,dir1,nutarj,ven,segur);
  sleep_for(1000ms);
  cout<<"\nTu nombre es: \n"<<datosenvio1->get_nombre();
  sleep_for(1000ms);
  cout<<"\nTu apellido paterno es: \n"<<datosenvio1->get_apellido1();
  sleep_for(1000ms);
  cout<<"\nTu apellido materno es: \n"<<datosenvio1->get_apellido2();
  sleep_for(1000ms);
  cout<<"\nTu edad es: \n"<<datosenvio1->get_edad();
  sleep_for(1000ms);
  cout<<"\nTu telefono es: \n"<<datosenvio1->get_telefono();
  sleep_for(1000ms);
  cout<<"\nTu pais es: \n"<<datosenvio1->get_pais();
  sleep_for(1000ms);
  cout<<"\nTu ciudad es: \n"<<datosenvio1->get_ciudad();
  sleep_for(1000ms);
  cout<<"\nTu direccion es: \n"<<datosenvio1->get_direccion();
  sleep_for(1000ms);
  cout<<"\nTu numero de tarjeta es: \n"<<datosenvio1 -> getTarjeta();
  sleep_for(1000ms);
  cout<<"\nTu CVV es: \n"<<datosenvio1 -> getCVV();
  sleep_for(1000ms);
  cout<<"\nTu número de vencimiento es: \n"<<datosenvio1 -> getVencimiento();
  sleep_for(1000ms);
  cout<<"\n Su información es correcta?\n1.Si\n2.No\n";
  cin>>info;
  while(info<=0 || info>=3){
    cout<<"Ingresa una opcion válida entre 1 o 2\n";
    cin>>info;
  }
  if(info==1){
    cout<<"Su información pasará a nuestra base de datos\n";
    baseDatos(datosenvio1,juego1);
    sleep_for(1000ms);
    cout<<"Recibirá el juego en un plazo máximo de 2 días\n";
    sleep_for(1000ms);
    cout<<"Gracias por preferirnos\n";
    sleep_for(1000ms);
    cout<<"Vuelva pronto\n";
    sleep_for(1000ms);
    cout<<"Se le regresará a la ventana de elección\n";
    sleep_for(1000ms);

  }
  else if(info==2){
    envio(option);

  }
}
else if (con==2){
  carrito(seguir);

}
return 0;
}

Envio baseDatos(Envio* datosenvio1, Envio* juego1){

  string filename("e1.txt");
  fstream file_out;

  file_out.open(filename, std::ios_base::out);
  if (!file_out.is_open()) {
      cout << "failed to open " << filename << '\n';
  }
  else {
    file_out << "Datos de contacto y envío\n";
    file_out << "\nNombre: \n"<<datosenvio1->get_nombre();
    file_out<<"\nApellido Paterno: \n"<<datosenvio1->get_apellido1();
    file_out<<"\nApellido Materno: \n"<<datosenvio1->get_apellido2();
    file_out<<"\nEdad: \n"<<datosenvio1->get_edad();
    file_out<<"\nNúmero Telefónico: \n"<<datosenvio1->get_telefono();
    file_out<<"\nPaís Objetivo: \n"<<datosenvio1->get_pais();
  file_out<<"\nCiudad Objetivo: \n"<<datosenvio1->get_ciudad();
    file_out<<"\nDirección Objetivo: \n"<<datosenvio1->get_direccion();
    file_out<<"\nNúmero de Tarjeta: \n"<<datosenvio1 -> getTarjeta();
    file_out<<"\nCVV: \n"<<datosenvio1 -> getCVV();
    file_out<<"\nFecha de Vencimiento: \n"<<datosenvio1 -> getVencimiento();
    cout << "Done Writing!" << endl;
  }
return 0;
}
