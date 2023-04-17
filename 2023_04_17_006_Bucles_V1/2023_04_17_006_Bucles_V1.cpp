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
    int peleadores;
    int formato;
    int royal = 0;
    int directa = 0;
    int grupos = 0;
    int a = 0;

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
        std::cout << "Entonces el número de batallas será de " << royal <<  ". El mejor de la batalla será el ganador." << std::endl;
        break;
    case 2:
        for (int n = 1; n < peleadores; ) {
            n = n * 2;
            a = n;
        }
        directa = a - peleadores;
        std::cout << "Entonces será por eliminación directa?\nCool :)\n" << std::endl;
        std::cout << "Entonces el número de batallas será de " << directa << " batallas." << std::endl;
        break;
    case 3:
        std::cout << "Entonces será por grupos, semifinal y final?\nOk ok, ese es complicado de calcular, pero me gusta mucho...\n" << std::endl;
        std::cout << "Entonces el número de batallas será de ..." << std::endl;
    default:
        std::cout << "Híjole, joven. Esa no se la vengo manejando." << std::endl;
    }
}