// 2023_05_24_018_MatrizDinamica_V1.cpp
// Daniel Mariscal
// Este programa imprime matrices con los datos que haya ingresado el usuario
// En caso de ser muy extensa, pone los valores de forma automática
//

#include <iostream>
#include <random>
#include <Windows.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "es_MX.UTF-8");
    srand(time(NULL));

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


    int x = 0;
    int y = 0;
    int matriz1[2][3];
    std::cout << "Hola, soy una calculadora de matrices c:\nPrimero que nada, ayúdame a ingresar datos para una matriz de 2x3" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <2; j++)
        {
            std::cout << "Ingresa un dato para la posición (" << j + 1 << ", " << i + 1 << ")" << std::endl;
            std::cin >> matriz1[j][i];
        }
    }
    std::cout << "\n\nMira, esta es la Matriz que hicimos :D\n" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << matriz1[j][i] << " ";
        }
        std::cout << std::endl;
    }
    system("PAUSE");
    system("CLS");
    std::cout << "Ahora, vamos a hacer una matriz personalizada :)" << std::endl;
    std::cout << "Cuántas columnas quieres que tenga tu matriz ? " << std::endl;
    std::cin >> x;
    std::cout << "Cuántas filas quieres que tenga?" << std::endl;
    std::cin >> y;

    int** matriz = new int* [y];

    for (int i = 0; i < y; i++) {
        matriz[i] = new int[x];
    }

    std::cout << "OK, te confirmo que tu matriz será de " << x << " x " << y << ". " << std::endl;
    if (x < 4 && y < 4) {
        std::cout << "Tu matriz es lo suficientemente pequeña para que ni a mí ni a tí nos dé hueva el pedirte ingresar los datos..." << std::endl;
        for (int i = 0; i < y; i++) {
            for (int j = 0; j < x; j++) {
                std::cout << "Dime el valor que quieres ingresar en la posición (" << j + 1 << ", " << i + 1 << ")" << std::endl;
                std::cin >> matriz[i][j];
            }
        }
    }
    else {
        std::cout << "Uy, tu Matriz es demasiado larga, ingresaré los datos de forma aleatoria." << std::endl;
        for (int i = 0; i < y; i++) {
            for (int j = 0; j < x; j++) {
                matriz[i][j] = rand() % 10;
            }
        }
    }
    system("PAUSE");
    system("CLS");
    std::cout << "Aquí está tu matriz :D\n\n\n";
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            std::cout << matriz[i][j] << " ";
            Sleep(100);
        }
        std::cout << std::endl;
    }
}