// 2023_03_15_002_HMOPVAR_V1.cpp :
// Daniel Mariscal
// Hola Mundo, Variables, Operadores Aritméticos
// 

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "Hola \nchiquitines " << std::endl;//std::endl da un salto de línea
    //Tipos de variables bool, int, float, char, string
    //sintaxis para nombrar variables
    //Tipo de variable - nombre de la variable - inicialización
    bool continuar = true;
    int Vida = 100;
    float ataque = 18.5;
    char nombre[15] = "Daniel";
    std::string namertag = "Marisky";
    // << es concatenar o sumar textos
    std::cout << "Hola, " << nombre << ". Bienvenido al mundo de " << namertag <<std::endl;

    //Operadores aritméticos
    // + - * / ^2 raiz

    Vida = Vida - ataque;
    std::cout << "tu vida restante es: " << Vida << std::endl;
    float Vida_Aux = 0;
    Vida_Aux = Vida - ataque;
    std::cout << "Tu Vida_Aux restante es: " << Vida_Aux << std::endl;
}