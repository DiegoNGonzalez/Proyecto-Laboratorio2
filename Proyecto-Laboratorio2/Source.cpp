#include <iostream>
#include <string>
#include "DatosMeteorologicos.h"
#include "DatosMeteorologicosDiarios.h"
#include <fstream>
#include <stdio.h>
#include "Funciones.h"
#include <vector>



using namespace std;

int main() {
    system("COLOR 80");
    //system("mode con: cols=80 lines=25"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA A 80 COLUMNAS Y 25 FILAS
    //system("COLOR B0"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
    //dibujarCuadro(0, 0, 78, 24); //SE DIBUJA EL CUADRO PRINCIPAL
    //dibujarCuadro(1, 1, 77, 3); //SE DIBUJA EL CUADRO DEL TITULO
    //gotoxy(30, 2); cout << "Muestra de datos ";
    Fecha f = Fecha();
    Horario h = Horario();
    DatosMeteorologicosDiarios dmd = DatosMeteorologicosDiarios(Fecha(), "Soleado", 20.0, 50.0, 1000.0, 10.0, 0.0, Horario(00, 30, 12));
    cout << dmd.toString() << endl;
    DatosMeteorologicos dm = DatosMeteorologicos(20.3, 50, 30, 50, 0.0, h);
    cout << dm.toString() << endl;

    std::vector <DatosMeteorologicos> datos;
    datos.push_back(dmd);
    datos.push_back(dm);

    for (DatosMeteorologicos dato : datos) {
        cout << dato.toString() << endl;
    }

    int numeros[5] = { 10,20,30,40,50 };
    for (int numero : numeros) {
        cout << numero << endl;
    }

    std::ofstream archivo("datos.txt");
    if (!archivo) {
        std::cerr << "No se pudo abrir el archivo." << std::endl;
        return 1;
    }

    // Escribe el encabezado en el archivo CSV
    archivo << "Fecha ,Descripcion ,Temperatura ,Humedad ,Presion ,VelocidadViento ,Lluvia ,HorasSol \n";

    // Utiliza el m?todo toCSVString para escribir el dato en formato CSV
    archivo << dmd.toCSVString() << "\n";

    // Cierra el archivo
    archivo.close();
    /* gotoxy(2, 12); system("pause");*/
    return 0;
}