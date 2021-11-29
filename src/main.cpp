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

int menu(int);

int datos(int);

int carrito(int);

int envio(int);
Envio baseDatos(Envio* objeto);

int main(int argc, char** argv) {
int opcion,desplegar,indatos;

cout<<"Bienvenido a la XBOX GAMES STORE \n";

cout<<"¿Desea darnos un poco de informacion sobre usted antes de entrar a la tienda? \n1.Si \n2.No \n";
cin>>indatos;
if(indatos==1){
  datos(indatos);
}
else if (indatos == 2){
  cout<<"¿Desea ver nuestra libreria de juegos? \n1.Si \n2.No \n";
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
cout<<"¿Gustaría agregar a su carrito alguno de estos juegos?\n1.Si \n2.No \n";
cin>>use;
agregar=true;
while (agregar==true){
if (use ==1){

  carrito(add);
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

 Cliente* cliente1 = new Cliente(nombre1);

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

int carrito(int id){
int idL;
int seg;
bool sig=true;

cout<<"**POR EL MOMENTO LA PÁGINA SOLO ADMITE UN MÁXIMO DE 1 COMPRA POR VUELTA**\n";

cout<<"Introduzca el ID del juego que dease: \n";
cin>>idL;
if (idL>0 && idL<51){
  cout<<"Esta segura de su elección? Le recomendamos ver el catalogo completo antes de tomar una elección \n1.Si\n2.No\n3.Salir de la tienda\n";
  cin>>seg;

  if (seg==1){
    envio(idL);
  }
  else if (seg==2){
    menu(seg);
  }
  else if (seg==3){
    return 0;
  }
}
return 0;
}

int envio(int option){
int opcion,con;
string name, ap1, ap2, paisc, city,ven,dir1,age,nutarj,tel,segur;
Envio* juego1 = new Envio(option);
 cout<<"Monto a pagar de \n"<<juego1->visualizarPrecio(option);
cout<<"El monto en pantalla es correcto? \n1.Si\n2.No\n";
cin>>con;
if (con==1){
  cout<<"Ingrese su nombre: \n";
  cin>>name;
  cout<<"Ingrese su apellido paterno: \n";
  cin>>ap1;
  cout<<"Ingrese su apellido materno: \n";
  cin>>ap2;
  cout<<"Ingrese su edad: \n";
  cin>>age;
  cout<<"Ingrese su número telefónico: \n";
  cin>>tel;
  cout<<"Ingrese su país: \n";
  cin>>paisc;
  cout<<"Ingrese su ciudad: \n";
  cin>>city;
  cout<<"Ingrese la dirección donde llegará el paquete: \n";
  cin.ignore();
  getline(cin,dir1);
  cout<<"Ingrese el número de su tarjeta: \n";
  cin>>nutarj;
  cout<<"Ingrese la fecha de vencimiento: \n";
  cin>>ven;
  cout<<"Ingrese el CVV: \n";
  cin>>segur;
  cout<<"Verifique si la información es correcta \n";

  Envio* datosenvio1=new Envio(name,ap1,ap2,age,tel,paisc,city,dir1,nutarj,ven,segur);
  cout<<"\nTu nombre es: \n"<<datosenvio1->get_nombre();
  cout<<"\nTu apellido paterno es: \n"<<datosenvio1->get_apellido1();
  cout<<"\nTu apellido materno es: \n"<<datosenvio1->get_apellido2();
  cout<<"\nTu edad es: \n"<<datosenvio1->get_edad();
  cout<<"\nTu telefono es: \n"<<datosenvio1->get_telefono();
  cout<<"\nTu pais es: \n"<<datosenvio1->get_pais();
  cout<<"\nTu ciudad es: \n"<<datosenvio1->get_ciudad();
  cout<<"\nTu direccion es: \n"<<datosenvio1->get_direccion();
  cout<<"\nTu numero de tarjeta es: \n"<<datosenvio1 -> getTarjeta();
  cout<<"\nTu CVV es: \n"<<datosenvio1 -> getCVV();
  cout<<"\nTu número de vencimiento es: \n"<<datosenvio1 -> getVencimiento();
  cout<<"\n Su información es correcta?\n1.Si\n2.No";
  cin>>con;
  if(con==1){
    cout<<"Su información pasará a nuestra base de datos";
    baseDatos(datosenvio1);
    cout<<"Recibirá el juego en un plazo máximo de 2 días";
    cout<<"Gracias por preferirnos";
    cout<<"Desea volver a comprer?\n1.Si\n2.No";
    cin>>con;
    if(con==1){
      menu(con);
    }
    else if(con==2){
      cout<<"Vuelva Pronto!";
      return 0;
    }
  }
}
else if (con==2){
  carrito(con);
}

return 0;
}

Envio baseDatos(Envio* datosenvio1){
  string filename("Datos Cliente.txt");
  fstream file_out;

  file_out.open(filename, std::ios_base::out);
  if (!file_out.is_open()) {
      cout << "failed to open " << filename << '\n';
  } else {
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
