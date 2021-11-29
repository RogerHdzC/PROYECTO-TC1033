#include <sstream>

#define NOMBRE_ARCHIVO "VIDEOJUEGOS.csv"

#include <fstream>
using namespace std;
#include <iostream>
#include <string>
#include "Videojuegos.h"

using namespace std;
Videojuegos::Videojuegos(){
  Nombre="";
  NuJugadores=0;
  Online="";
  Clasificacion="";
  GENERO = "";
  id = "";
  float Precio;
}

Videojuegos::Videojuegos(std::string GENERO){
  this -> GENERO = GENERO;
}

Videojuegos::Videojuegos(int id){
  this -> id=id;
}


int Videojuegos::visualizarPrecio(int id){
  float price=0;
  stringstream ss;
  ss<<id;
  string s;
  ss>>s;
  ifstream archivo(NOMBRE_ARCHIVO);
    string linea;
    char delimitador = ',';
    // Leemos la primer línea para descartarla, pues es el encabezado
    getline(archivo, linea);
    // Leemos todas las líneas
    while (getline(archivo, linea))
    {

        stringstream stream(linea); // Convertir la cadena a un stream
        string ID,NOMBRE, GENERO, JUGADORES, ONLINE, CLASIFICACION, PRECIO;
        // Extraer todos los valores de esa fila
        getline(stream, ID, delimitador);
        getline(stream, NOMBRE, delimitador);
        getline(stream, GENERO, delimitador);
        getline(stream, JUGADORES, delimitador);
        getline(stream, ONLINE, delimitador);
        getline(stream, CLASIFICACION, delimitador);
        getline(stream, PRECIO, delimitador);

        // Imprimir
        if (ID == s){
        cout << "Precio: " << PRECIO <<"\n"<<endl;

        }
    }

    archivo.close();

  return 0;
}
void Videojuegos::visualizarDeportes(){
  ifstream archivo(NOMBRE_ARCHIVO);
    string linea;
    char delimitador = ',';
    // Leemos la primer línea para descartarla, pues es el encabezado
    getline(archivo, linea);
    // Leemos todas las líneas
    while (getline(archivo, linea))
    {

        stringstream stream(linea); // Convertir la cadena a un stream
        string ID,NOMBRE, GENERO, JUGADORES, ONLINE, CLASIFICACION, PRECIO;
        // Extraer todos los valores de esa fila
        getline(stream, ID, delimitador);
        getline(stream, NOMBRE, delimitador);
        getline(stream, GENERO, delimitador);
        getline(stream, JUGADORES, delimitador);
        getline(stream, ONLINE, delimitador);
        getline(stream, CLASIFICACION, delimitador);
        getline(stream, PRECIO, delimitador);

        // Imprimir
        if (GENERO=="DEPORTES"){
        cout << "==================" << endl;
        cout<< "ID: " << ID << endl;
        cout << "Nombre: " << NOMBRE << endl;
        cout << "Género: " << GENERO << endl;
        cout << "Número de jugadores: " << JUGADORES << endl;
        cout << "Tiene juego online: " << ONLINE << endl;
        cout << "Clasificación: " << CLASIFICACION << endl;
        cout << "Precio: " << PRECIO << endl;
        }
    }

    archivo.close();

}
void Videojuegos::visualizarAccionAventura(){
  ifstream archivo(NOMBRE_ARCHIVO);
    string linea;
    char delimitador = ',';
    // Leemos la primer línea para descartarla, pues es el encabezado
    getline(archivo, linea);
    // Leemos todas las líneas
    while (getline(archivo, linea))
    {

        stringstream stream(linea); // Convertir la cadena a un stream
        string ID,NOMBRE, GENERO, JUGADORES, ONLINE, CLASIFICACION, PRECIO;
        // Extraer todos los valores de esa fila
        getline(stream, ID, delimitador);
        getline(stream, NOMBRE, delimitador);
        getline(stream, GENERO, delimitador);
        getline(stream, JUGADORES, delimitador);
        getline(stream, ONLINE, delimitador);
        getline(stream, CLASIFICACION, delimitador);
        getline(stream, PRECIO, delimitador);

        // Imprimir
        if (GENERO=="ACCION Y AVENTURA"){
        cout << "==================" << endl;
        cout<< "ID: " << ID << endl;
        cout << "Nombre: " << NOMBRE << endl;
        cout << "Género: " << GENERO << endl;
        cout << "Número de jugadores: " << JUGADORES << endl;
        cout << "Tiene juego online: " << ONLINE << endl;
        cout << "Clasificación: " << CLASIFICACION << endl;
        cout << "Precio: " << PRECIO << endl;
        }
    }

    archivo.close();

}
void Videojuegos::visualizarCarreras(){
  ifstream archivo(NOMBRE_ARCHIVO);
    string linea;
    char delimitador = ',';
    // Leemos la primer línea para descartarla, pues es el encabezado
    getline(archivo, linea);
    // Leemos todas las líneas
    while (getline(archivo, linea))
    {

        stringstream stream(linea); // Convertir la cadena a un stream
        string ID,NOMBRE, GENERO, JUGADORES, ONLINE, CLASIFICACION, PRECIO;
        // Extraer todos los valores de esa fila
        getline(stream, ID, delimitador);
        getline(stream, NOMBRE, delimitador);
        getline(stream, GENERO, delimitador);
        getline(stream, JUGADORES, delimitador);
        getline(stream, ONLINE, delimitador);
        getline(stream, CLASIFICACION, delimitador);
        getline(stream, PRECIO, delimitador);

        // Imprimir
        if (GENERO == "CARRERAS"){
        cout << "==================" << endl;
        cout << "Nombre: " << NOMBRE << endl;
        cout<< "ID: " << ID << endl;
        cout << "Género: " << GENERO << endl;
        cout << "Número de jugadores: " << JUGADORES << endl;
        cout << "Tiene juego online: " << ONLINE << endl;
        cout << "Clasificación: " << CLASIFICACION << endl;
        cout << "Precio: " << PRECIO << endl;
    }
    }

    archivo.close();

}
void Videojuegos::visualizarFPS(){
  ifstream archivo(NOMBRE_ARCHIVO);
    string linea;
    char delimitador = ',';
    // Leemos la primer línea para descartarla, pues es el encabezado
    getline(archivo, linea);
    // Leemos todas las líneas
    while (getline(archivo, linea))
    {

        stringstream stream(linea); // Convertir la cadena a un stream
        string ID,NOMBRE, GENERO, JUGADORES, ONLINE, CLASIFICACION, PRECIO;
        // Extraer todos los valores de esa fila
        getline(stream, ID, delimitador);
        getline(stream, NOMBRE, delimitador);
        getline(stream, GENERO, delimitador);
        getline(stream, JUGADORES, delimitador);
        getline(stream, ONLINE, delimitador);
        getline(stream, CLASIFICACION, delimitador);
        getline(stream, PRECIO, delimitador);

        // Imprimir
        if (GENERO == "FPS"){
        cout << "==================" << endl;
        cout<< "ID: " << ID << endl;
        cout << "Nombre: " << NOMBRE << endl;
        cout << "Género: " << GENERO << endl;
        cout << "Número de jugadores: " << JUGADORES << endl;
        cout << "Tiene juego online: " << ONLINE << endl;
        cout << "Clasificación: " << CLASIFICACION << endl;
        cout << "Precio: " << PRECIO << endl;
        }
    }

    archivo.close();

}
void Videojuegos::visualizarLucha(){
  ifstream archivo(NOMBRE_ARCHIVO);
    string linea;
    char delimitador = ',';
    // Leemos la primer línea para descartarla, pues es el encabezado
    getline(archivo, linea);
    // Leemos todas las líneas
    while (getline(archivo, linea))
    {

        stringstream stream(linea); // Convertir la cadena a un stream
        string ID,NOMBRE, GENERO, JUGADORES, ONLINE, CLASIFICACION, PRECIO;
        // Extraer todos los valores de esa fila
        getline(stream, ID, delimitador);
        getline(stream, NOMBRE, delimitador);
        getline(stream, GENERO, delimitador);
        getline(stream, JUGADORES, delimitador);
        getline(stream, ONLINE, delimitador);
        getline(stream, CLASIFICACION, delimitador);
        getline(stream, PRECIO, delimitador);

        // Imprimir
        if (GENERO == "LUCHA"){
        cout << "==================" << endl;
        cout << "Nombre: " << NOMBRE << endl;
        cout<< "ID: " << ID << endl;
        cout << "Género: " << GENERO << endl;
        cout << "Número de jugadores: " << JUGADORES << endl;
        cout << "Tiene juego online: " << ONLINE << endl;
        cout << "Clasificación: " << CLASIFICACION << endl;
        cout << "Precio: " << PRECIO << endl;
        }
    }

    archivo.close();

}
void Videojuegos::visualizarPlataforma(){
  ifstream archivo(NOMBRE_ARCHIVO);
    string linea;
    char delimitador = ',';
    // Leemos la primer línea para descartarla, pues es el encabezado
    getline(archivo, linea);
    // Leemos todas las líneas
    while (getline(archivo, linea))
    {

        stringstream stream(linea); // Convertir la cadena a un stream
        string ID,NOMBRE, GENERO, JUGADORES, ONLINE, CLASIFICACION, PRECIO;
        // Extraer todos los valores de esa fila
        getline(stream, ID, delimitador);
        getline(stream, NOMBRE, delimitador);
        getline(stream, GENERO, delimitador);
        getline(stream, JUGADORES, delimitador);
        getline(stream, ONLINE, delimitador);
        getline(stream, CLASIFICACION, delimitador);
        getline(stream, PRECIO, delimitador);

        // Imprimir
        if (GENERO == "PLATAFORMA"){
        cout << "==================" << endl;
        cout<< "ID: " << ID << endl;
        cout << "Nombre: " << NOMBRE << endl;
        cout << "Género: " << GENERO << endl;
        cout << "Número de jugadores: " << JUGADORES << endl;
        cout << "Tiene juego online: " << ONLINE << endl;
        cout << "Clasificación: " << CLASIFICACION << endl;
        cout << "Precio: " << PRECIO << endl;
        }
    }

    archivo.close();

}
void Videojuegos::visualizarRol(){
  ifstream archivo(NOMBRE_ARCHIVO);
    string linea;
    char delimitador = ',';
    // Leemos la primer línea para descartarla, pues es el encabezado
    getline(archivo, linea);
    // Leemos todas las líneas
    while (getline(archivo, linea))
    {

        stringstream stream(linea); // Convertir la cadena a un stream
        string ID,NOMBRE, GENERO, JUGADORES, ONLINE, CLASIFICACION, PRECIO;
        // Extraer todos los valores de esa fila
        getline(stream, ID, delimitador);
        getline(stream, NOMBRE, delimitador);
        getline(stream, GENERO, delimitador);
        getline(stream, JUGADORES, delimitador);
        getline(stream, ONLINE, delimitador);
        getline(stream, CLASIFICACION, delimitador);
        getline(stream, PRECIO, delimitador);

        // Imprimir
        if (GENERO == "ROL"){
        cout << "==================" << endl;
        cout<< "ID: " << ID << endl;
        cout << "Nombre: " << NOMBRE << endl;
        cout << "Género: " << GENERO << endl;
        cout << "Número de jugadores: " << JUGADORES << endl;
        cout << "Tiene juego online: " << ONLINE << endl;
        cout << "Clasificación: " << CLASIFICACION << endl;
        cout << "Precio: " << PRECIO << endl;}
    }

    archivo.close();

}
void Videojuegos::visualizarRpg(){
  ifstream archivo(NOMBRE_ARCHIVO);
    string linea;
    char delimitador = ',';
    // Leemos la primer línea para descartarla, pues es el encabezado
    getline(archivo, linea);
    // Leemos todas las líneas
    while (getline(archivo, linea))
    {

        stringstream stream(linea); // Convertir la cadena a un stream
        string ID,NOMBRE, GENERO, JUGADORES, ONLINE, CLASIFICACION, PRECIO;
        // Extraer todos los valores de esa fila
        getline(stream, ID, delimitador);
        getline(stream, NOMBRE, delimitador);
        getline(stream, GENERO, delimitador);
        getline(stream, JUGADORES, delimitador);
        getline(stream, ONLINE, delimitador);
        getline(stream, CLASIFICACION, delimitador);
        getline(stream, PRECIO, delimitador);

        // Imprimir
        if (GENERO == "RPG"){
        cout << "==================" << endl;
        cout<< "ID: " << ID << endl;
        cout << "Nombre: " << NOMBRE << endl;
        cout << "Género: " << GENERO << endl;
        cout << "Número de jugadores: " << JUGADORES << endl;
        cout << "Tiene juego online: " << ONLINE << endl;
        cout << "Clasificación: " << CLASIFICACION << endl;
        cout << "Precio: " << PRECIO << endl;
        }
    }

    archivo.close();

}
void Videojuegos::visualizarShooter(){
  ifstream archivo(NOMBRE_ARCHIVO);
    string linea;
    char delimitador = ',';
    // Leemos la primer línea para descartarla, pues es el encabezado
    getline(archivo, linea);
    // Leemos todas las líneas
    while (getline(archivo, linea))
    {

        stringstream stream(linea); // Convertir la cadena a un stream
        string ID,NOMBRE, GENERO, JUGADORES, ONLINE, CLASIFICACION, PRECIO;
        // Extraer todos los valores de esa fila
        getline(stream, ID, delimitador);
        getline(stream, NOMBRE, delimitador);
        getline(stream, GENERO, delimitador);
        getline(stream, JUGADORES, delimitador);
        getline(stream, ONLINE, delimitador);
        getline(stream, CLASIFICACION, delimitador);
        getline(stream, PRECIO, delimitador);

        // Imprimir
        if (GENERO == "SHOOTER"){
        cout << "==================" << endl;
        cout<< "ID: " << ID << endl;
        cout << "Nombre: " << NOMBRE << endl;
        cout << "Género: " << GENERO << endl;
        cout << "Número de jugadores: " << JUGADORES << endl;
        cout << "Tiene juego online: " << ONLINE << endl;
        cout << "Clasificación: " << CLASIFICACION << endl;
        cout << "Precio: " << PRECIO << endl;
        }
    }

    archivo.close();

}
void Videojuegos::visualizarSurvivalHorror(){
  ifstream archivo(NOMBRE_ARCHIVO);
    string linea;
    char delimitador = ',';
    // Leemos la primer línea para descartarla, pues es el encabezado
    getline(archivo, linea);
    // Leemos todas las líneas
    while (getline(archivo, linea))
    {

        stringstream stream(linea); // Convertir la cadena a un stream
        string ID,NOMBRE, GENERO, JUGADORES, ONLINE, CLASIFICACION, PRECIO;
        // Extraer todos los valores de esa fila
        getline(stream, ID, delimitador);
        getline(stream, NOMBRE, delimitador);
        getline(stream, GENERO, delimitador);
        getline(stream, JUGADORES, delimitador);
        getline(stream, ONLINE, delimitador);
        getline(stream, CLASIFICACION, delimitador);
        getline(stream, PRECIO, delimitador);

        // Imprimir
        if (GENERO == "SURVIVAL HORROR" ){
        cout << "==================" << endl;
        cout<< "ID: " << ID << endl;
        cout << "Nombre: " << NOMBRE << endl;
        cout << "Género: " << GENERO << endl;
        cout << "Número de jugadores: " << JUGADORES << endl;
        cout << "Tiene juego online: " << ONLINE << endl;
        cout << "Clasificación: " << CLASIFICACION << endl;
        cout << "Precio: " << PRECIO << endl;
        }
    }

    archivo.close();
}
