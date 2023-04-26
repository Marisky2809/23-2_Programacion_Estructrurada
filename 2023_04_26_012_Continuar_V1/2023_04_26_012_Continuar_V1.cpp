// 2023_04_26_012_Continuar_V1.cpp
// Daniel Mariscal
// Ciclo que pregunta si quieres continuar y cuenta hasta 100.
//

#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    bool respuesta = 1;
    int vidas = 3;
    char ppt;

    std::cout << "Hola, quieres jugar piedra papel o tijera?" << std::endl;
    std::cout << "Mira, te explico:\nPara utilizar tijera, digita 's'\nPara utilizar piedra, digita 'r'\nPara utilizar papel, digita 'p'" << std::endl;
    std::cout << "Ok, empezamos..." << std::endl;

    while (vidas > 0) {
        std::cout << "Tienes " << vidas << " vidas.\n" << std::endl;
        std::cout << "Piedra, papel o tijera... (digita tu respuesta)" << std::endl;
        std::cin >> ppt;

        if (ppt == 's') {
            std::cout << "*Pone piedra*\nJaja, joven. Le gané. Pierde una vida." << std::endl;
        }
        if (ppt == 'r') {
            std::cout << "*Pone papel*\nJaja, joven. Le gané. Pierde una vida." << std::endl;
        }
        if (ppt == 'p') {
            std::cout << "*Pone tijeras*\nJaja, joven. Le gané. Pierde una vida." << std::endl;
        }
        vidas--;
    }
    while (respuesta == 1) {
        respuesta = 0;
        std::cout << "\nQuieres volver a jugar? (Responde con '1' o '0')" << std::endl;
        std::cin >> respuesta;
        if (respuesta == 1) {
            vidas = 3;
            while (vidas > 0) {
                std::cout << "Ok, tiene " << vidas << " vidas.\n" << std::endl;
                std::cout << "Piedra, papel o tijera... (digita tu respuesta)" << std::endl;
                std::cin >> ppt;

                if (ppt == 's') {
                    std::cout << "*Pone piedra*\n\nJaja, joven. Le gané. Pierde una vida." << std::endl;
                }
                if (ppt == 'r') {
                    std::cout << "*Pone papel*\n\nJaja, joven. Le gané. Pierde una vida." << std::endl;
                }
                if (ppt == 'p') {
                    std::cout << "*Pone tijeras*\n\nJaja, joven. Le gané. Pierde una vida." << std::endl;
                }
                vidas--;
            }
        }
    }
    std::cout << "\n\nOk, ahora wacha cómo cuento hasta 100..." << std::endl;
    for (int a = 1; a < 101; a++) {
        std::cout << a << std::endl;
    }
}