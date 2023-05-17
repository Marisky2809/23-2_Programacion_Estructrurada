// 2023_05_17_Matriz_V1.cpp
// Daniel Mariscal
// Matrices
//

#include <iostream>
#include <random>

int main()
{
    srand(time(NULL));

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
    std::cout << std::endl;
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
    std::cout << std::endl;
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
}