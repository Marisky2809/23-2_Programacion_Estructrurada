// 2023_05_22_018_Punteros_V1.cpp
// Daniel Mariscal
// Punteros
//

#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <cstdlib>
#include <Windows.h>

int main()
{
    //Punteros:
    int edad = 0;
    int* apuntador = &edad;

    std::cout << "El valor de la edad: " << edad
        << std::endl;
    std::cout << "El valor del puntero: " << apuntador //dirección del puntero
        << std::endl;
    std::cout << "El valor de la variable apuntada: " << *apuntador
        << std::endl;
    std::cout << "El valor de la variable apuntada: " << &apuntador //dirección de la variable apuntada
        << std::endl;

    //borrar apuntador
    apuntador = NULL;

    //Repaso de funciones de control.
    system("PAUSE");
    system("CLS");
    Sleep(100);
    int filas = 0;
    int columnas = 0;

    std::cout << "Hola, usuario :)\nSoy una máquina de hacer matrices, wuuuuu" << std::endl;
    std::cout << "Dime, cuántas filas quieres que tenga tu matriz?" << std::endl;
    std::cin >> filas;
    std::cout << "Y cuántas columnas quieres que tenga?" << std::endl;
    std::cin >> columnas;


    int** matriz = new int* [filas];
    for (int i=0; i < filas; i++) {
        matriz[i] = new int[columnas];
    }

    std::cout << "OK, ayúdame a ingresar los datos:" << std::endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j <= columnas; j++) {
            std::cout << "Dame un número para la coordenada (" << i << ", " << j << ")" << std::endl;
            std::cin >> j;
        }
    }
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j <= columnas; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}