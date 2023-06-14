// 2023_05_22_018_Punteros_V1.cpp
// Daniel Mariscal
// Punteros
//

#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <cstdlib>
#include <Windows.h>
#include <string>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
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
    //Para crear arreglos dinámicos necesitamos memoria no estática. Esto se logra con punteros
    //Creamos la variable puntera y la inicializamos en NULL.
    std::string* titulos = NULL;
    std::string* autores = NULL;
    //std::string libros[10]; Memoria Estática
    int peliculas;

    std::cout << "Hola, usuario :)\nSoy una máquina de hacer matrices, wuuuuu" << std::endl;
    std::cout << "Dime, cuántas películas quieres ingresar?" << std::endl;
    std::cin >> peliculas;

    //Crear arreglos dinámicos
    titulos = new std::string[peliculas];
    autores = new std::string[peliculas];

    
    //Ahora solicita la información:
    for (int i = 0; i < peliculas; i++) {
        if (i == 0) {
            std::cin.ignore();
        }
        std::cout << "Película " << i+1 << ": " << std::endl;
        getline(std::cin, titulos[i]);
        std::cout << "Quién es su autor?" << std::endl;
        getline(std::cin, autores[i]);
    }
    system("CLS");
    //imprimir información:
    for (int i = 0; i < peliculas; i++) {
        std::cout << "El título de la película " << i+1 << " es:\n" << titulos[i];
        std::cout << "\nEl autor de dicha película es: " << autores[i] << std::endl << std::endl;
    }
    //Destruir memoria dinámica
    delete[] titulos;
    delete[] autores;
    titulos = NULL;
    autores = NULL;
}