// 2023_05_17_Matriz_V1.cpp
// Daniel Mariscal
// Matrices
//

#include <iostream>
#include <random>

int main()
{
    srand(time(NULL));
    int respuesta;
    std::cout << "Hola, usuario :D\nTengo varias matrices, de qué tamaño te gustaría verla?\n" <<
        "1. 3x3\n2. 5x5\n3. 10x10\n\n(Digita el número del tamaño de la matriz que quieras ver)" << std::endl;
    std::cin >> respuesta;
    /*int edades[5][7] = {{1, 2}, {9,8}, {14,21}};
    int filas = (sizeof(edades) / sizeof(edades[0]));
    std::cout << "Filas: " << filas << std::endl;
    int columnas = (sizeof(edades[0]) / sizeof(edades[0][0]));
    std::cout << "Columnas: " << columnas;
    std::cout << std::endl << sizeof(edades) << std::endl;
    std::cout << sizeof(edades[0]) << std::endl;
    std::cout << sizeof(edades[0][0]) << std::endl;*/

    //Declarar la matriz
    int matriz1[3][3];
    int matriz2[5][5];
    int matriz3[10][10];
    //Ingresar datos aleatorios de la matriz
    switch (respuesta) {
    case 1:
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                matriz1[i][j] = rand() % 10;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                std::cout << matriz1[i][j] << " ";
            }
            std::cout << std::endl;
        }
        break;

    case 2:
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                matriz2[i][j] = rand() % 10;
            }
        }

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                std::cout << matriz2[i][j] << " ";
            }
            std::cout << std::endl;
        }
        break;

    case 3:
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                matriz3[i][j] = rand() % 10;
            }
        }

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                std::cout << matriz3[i][j] << " ";
            }
            std::cout << std::endl;
        }
        break;

    default:
        std::cout << "._. digita un número válido, porfa";
    }
}