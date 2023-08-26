#include "Funciones.h"
#include <iostream>
#include <stdlib.h>
#include <Windows.h>

void gotoxy(int x, int y) {
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}


//FUNCION QUE DIBUJA EL CUADRO
void dibujarCuadro(int x1, int y1, int x2, int y2) {
    int i;

    for (i = x1;i < x2;i++) {
        gotoxy(i, y1); std::cout << "\304"; //linea horizontal superior
        gotoxy(i, y2); std::cout << "\304"; //linea horizontal inferior
    }

    for (i = y1;i < y2;i++) {
        gotoxy(x1, i); std::cout << "\263"; //linea vertical izquierda
        gotoxy(x2, i); std::cout << "\263"; //linea vertical derecha
    }

    gotoxy(x1, y1); std::cout << "\332";
    gotoxy(x1, y2); std::cout << "\300";
    gotoxy(x2, y1); std::cout << "\277";
    gotoxy(x2, y2); std::cout << "\331";
}
