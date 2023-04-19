// 2023_04_17_006_Bucles_V1.cpp :
// 
// Hacer un programa que te solicite el número de peleadores en una arena y te dé el número de batallas que se tendrán que realizar para obtener un ganador
// Royal Rumble
// Eliminatoria directa
// Grupos, semifinal y final
// 
//

#include <iostream>
#include <locale.h>

int main()
{
    int peleadores = 0;
    int formato = 0;
    int royal = 0;
    int directa = 0;
    int grupos = 0;
    int a = 0;
    int d1 = 0;
    int grupo = 0;
    int cruces = 0;
    int mundialito = 0;
    int f_grupos = 0;
    int sobrantes = 0;
    int extras = 0;

    setlocale(LC_ALL, "es_MX.UTF-8");
    std::cout << "Hola, te voy a ayudar a contar cuántas batallas se necesitan para obtener a un ganador\n" << std::endl;
    std::cout << "¿Cuántos peleadores habrá en esta competición?" << std::endl;
    std::cin >> peleadores;
    std::cout << "Qué tipo de batalla habrá?\n1) Royal Rumble\n2) Eliminatoria directa\n3) Grupos, semifinal y final" << std::endl;
    std::cin >> formato;

    switch (formato) {


    case 1:

        for (int f = 1; f < peleadores; f++) {
            royal = (peleadores - f) + royal;
        }
        std::cout << "Entonces será Royal Rumble?\nExcelente :D\n" << std::endl;
        std::cout << "Entonces el número de batallas será de " << royal << ". Cada peleador se enfrentará a los demás." << std::endl;
        break;


    case 2:
        std::cout << "Entonces será por eliminación directa?\nCool :)\n" << std::endl;
        for (int n = 1; n < peleadores; ) {
            n = n * 2;
            a = n;
        }
        if (a == peleadores) {
            directa = (a - 1);
            std::cout << "Entonces el número de batallas será de " << directa << " batallas." << std::endl;
        }
        else {
            d1 = (a / 2);
            directa = (peleadores - 1);
            std::cout << "Entonces el número de batallas será de " << directa << " batallas. Aunque recomendaría hacerla de " << d1 << " peleadores." << std::endl;
        }
        break;


    case 3:
        if (peleadores < 4) {
            std::cout << "Lo siento, para calcular una competición con este formato debe haber por lo menos 4 participantes :(";
        }
        else {
            cruces = (peleadores / 4);
            for (int g = 1; g < cruces; g++) {
                grupo = (cruces - g) + grupo;
            }
            f_grupos = grupo * 4;
            sobrantes = peleadores % 4;
            extras = sobrantes * cruces;
            mundialito = f_grupos + extras + 3;

            std::cout << "Entonces será por grupos, semifinal y final?\nOk ok, ese es complicado de calcular, pero me gusta mucho...\n" << std::endl;
            std::cout << "Entonces el número de batallas será de " << mundialito << " enfrentamientos." << std::endl;
            if (sobrantes == 0) {
                std::cout << "Los grupos serían de " << cruces << " peleadores. Los mejores de cada grupo pasan a las semifinales :)";
            }
            else {
                std::cout << "Los grupos serían de " << cruces << " peleadores. Aunque habría " << sobrantes << " grupos con un peleador más.";
            }
        }


        break;


    default:
        std::cout << "Híjole, joven. Esa no se la vengo manejando." << std::endl;
    }
}