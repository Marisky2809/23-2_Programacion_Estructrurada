// 2023_03_29_005_EstructurasC_V1.cpp :
// Daniel Mariscal
// Decisiones
// Bucles
//

#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    //Estructura de control 1
    //IF
    //Syntaxis
    int edad = 0;
    float temperatura = 0;
    std::cout << "Qué edad tienes?" << std::endl;
    std::cin >> edad;
    if (edad >= 18) {
        std::cout << "Bienvenido al club de los adultos, ¿Una chelita? " << std::endl;
    }
    if (edad < 18) {
        std::cout << "Sáquese de aquí, chiquitín" << std::endl;
    }
    //IF-ELSE
    //Syntaxis
    float temperatua = 0;
    std::cout << "Cuántos grados centígrados tienes de temperatura?" << std::endl;
    std::cin >> temperatura;
    if (temperatura >= 36 && temperatura <= 38) {
        std::cout << "Usted está en perfectas condiciones" << std::endl;
    }
    else {
        std::cout << ":O  alv\nSi sigue vivo, vaya al médico" << std::endl;
    }
    //Switch Case
    //Syntaxis
    int opcion = 0;
    std::cout << "Hola, usuaio. Presiona una tecla del uno al 4 para leer la frase de tu personaje favorito\n" << std::endl;
    std::cin >> opcion;
    switch (opcion) {
    case 1:
        std::cout << "Para todo en la vida hay solución, excepto para la muerte. Siuuuu\n";
        break;
    case 2:
        std::cout << "Qué mirá, bobo? Andá pa'llá, bobo\n";
        break;
    case 3:
        std::cout << "Mejor afuera que adentro\n";
        break;
    case 4:
        std::cout << "Ayudé a una viejita a cruzar la calle y me compró un churro :3\n";
        break;
    default:
        std::cout << "Híjole, no le sé a esas opciones. Esa no se la vengo manejando, joven.\n";
        break;
    }
}