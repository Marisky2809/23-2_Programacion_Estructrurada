// 2023_03_27_004_EControl_V1.cpp : 
// Daniel Mariscal
// Repaso del tema pasado In/Out - Consultorio médico
// Agregamos la syntaxis de las estructuras de control
//

#include <iostream>
#include <locale.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::string nombre;
    std::string apellido;
    int edad = 0;
    int horas = 0;
    float estatura = 0;
    float peso = 0;
    bool fiebre = 0;
    bool dormir = 0;
    bool dolor = 0;
    char sexo;
    float IMC = 0;
    std::cout << "Hola, soy el doctor Nefario. Yo te voy a atender.\n¿Cuál es tu nombre?" << std::endl;
    getline(std::cin, nombre); //Getline puede tomar espacios, solo funciona con strings, no con arreglos.
    std::cout << "Ok, " << nombre << "\n¿Cómo te apellidas" << std::endl;
    getline(std::cin, apellido);
    std::cout << "\nEntendido.\n¿Cuál es tu género?\nh) Hombre\nm) Mujer\nn) Prefieres no decirlo" << std::endl;
    std::cin >> sexo;
    std::cout << "\nOk, entendido.\n¿Cuántos años tienes?" << std::endl;
    std::cin >> edad;
    std::cout << "\nA continuación te voy a hacer unas cuantas preguntas. Necesito que me respondas 1 como afirmación o 0 como negación.\n"
        << "¿Tienes dolor en alguna parte del cuerpo?" << std::endl;
    std::cin >> dolor;
    std::cout << "Ok... ¿Tienes fiebre?" << std::endl;
    std::cin >> fiebre;
    std::cout << "¿Has dormido bien últimamente?" << std::endl;
    std::cin >> dormir;
    std::cout << "¿Cuántas horas sueles dormir al día?" << std::endl;
    std::cin >> horas;
    std::cout << "OK, " << nombre << "...\n\nA continuación, sacaremos tu índice de masa corporal, más conocido como IMC.\n"
        << "¿Cuál es tu peso en kilogramos?" << std::endl;
    std::cin >> peso;
    std::cout << "Ok, y ¿Cuánto mides en metros?";
    std::cin >> estatura;

    IMC = (peso/(estatura*estatura));

    std::cout << "OK, excelente. Ya tengo todos los datos necesarios, este es tu diagnóstico.\n\n" << std::endl;
    std::cout << nombre << " " << apellido << "\n\nEdad: " << edad << "\nSexo: " << sexo
        << "\nEstatura: " << estatura << " m" << "\nPeso: " << peso << " kg" << "\nIMC: " << IMC
        << "\nFiebre: " << fiebre << "\nDolor: " << dolor << "\nDuerme bien: " << dormir << "  (" << horas << " hrs)"
        << "\n\nTomar paracetamol y galletas de chocomenta cada 8 horas.\n\nDr. Nefario." << std::endl;
} 
