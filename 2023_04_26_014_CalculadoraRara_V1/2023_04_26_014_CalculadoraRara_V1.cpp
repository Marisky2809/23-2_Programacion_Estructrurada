// 2023_04_26_014_CalculadoraRara_V1.cpp
// Daniel Mariscal
// Calculadora que te permite hacer 3 operaciones
// Cuenta lento
// Y de 10 en 10
//

#include <iostream>
#include <locale.h>
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    int operacion = 0;
    float n1 = 0;
    float n2 = 0;
    float resultado = 0;
    int veces = 0;
    int cuenta10 = 10;
    int b = 1;
    int wile = 1000;
    std::cout << "Hola, soy una calculadora :3" << std::endl;

    /*while (veces < 5) {
        veces++;
        std::cout << "Elije qué tipo de operación quieres realizar : \n\n" <<
            "1) Suma\n2) Resta\n3) Multiplicación\n4) División\n5) Mayor o Menor\n6) Valor Absoluto" << std::endl;
        std::cin >> operacion;
        switch (operacion) {
        case 1:
            std::cout << "OK, vamos a sumar. Dame un valor:" << std::endl;
            std::cin >> n1;
            std::cout << "Ok, dame otro número para sumárselo al " << n1 << std::endl;
            std::cin >> n2;
            resultado = n1 + n2;
            std::cout << "La suma de " << n1 << " y " << n2 << " es: " << resultado << std::endl;
            break;
        case 2:
            std::cout << "OK, vamos a restar. Dame un valor:" << std::endl;
            std::cin >> n1;
            std::cout << "Ok, dame otro número para restárselo al " << n1 << std::endl;
            std::cin >> n2;
            resultado = n1 - n2;
            std::cout << "La diferencia entre " << n1 << " y " << n2 << " es: " << resultado << std::endl;
            break;
        case 3:
            std::cout << "OK, vamos a multiplicar. Dame un valor:" << std::endl;
            std::cin >> n1;
            std::cout << "Ok, dame otro número para multiplicar al " << n1 << std::endl;
            std::cin >> n2;
            resultado = n1 * n2;
            std::cout << "El producto de " << n1 << " y " << n2 << " es: " << resultado << std::endl;
            break;
        case 4:
            std::cout << "OK, vamos a Dividir. Dame el valor del dividendo:" << std::endl;
            std::cin >> n1;
            std::cout << "Ok, ahora dame el valor del divisor" << std::endl;
            std::cin >> n2;
            resultado = n1 / n2;
            std::cout << "El cociente de dividir " << n1 << " entre " << n2 << " es: " << resultado << std::endl;
            break;
        case 5:
            std::cout << "\nExcelente, te voy a ayudar a saber qué número es mayor que otro :)\nDame el primer número\n" << std::endl;
            std::cin >> n1;
            std::cout << "Ok, dame otro. Te diré cuál es el mayor" << std::endl;
            std::cin >> n2;
            if (n1 < n2) {
                std::cout << n2 << " es mayor que " << n1 << std::endl;
            }
            else {
                if (n2 == n1) {
                    std::cout << "Los dos números son iguales." << std::endl;
                }
                else {
                    std::cout << n1 << " es mayor que " << n2 << std::endl;
                }
            }
            break;
        case 6:
            std::cout << "Ok, te ayudaré a calcular el valor absoluto de cualquier número, ingrésalo: " << std::endl;
            std::cin >> n1;
            if (n1 < 0) {
                n2 = n1 * (-1);
                std::cout << "El valor absoluto es " << n2 << std::endl;
            }
            else {
                std::cout << "El valor absoluto es " << n1 << std::endl;
            }
            break;
        default:
            std::cout << "Híjole, joven; esa no se la vengo manejando. Lea bien qué operaciones puedo hacer, estoy chiquito :(" << std::endl;
        }
    }
    */
    std::cout << "Ira, ahora wacha cómo cuento del mil al cero utilizando un for." << std::endl;
    system("PAUSE");
    for (int a = 1000; a >=0; a--) {
        std::cout << a << std::endl;
    }
    std::cout << "Ira, ahora wacha cómo cuento del mil al cero utilizando un while." << std::endl;
    system("PAUSE");
    while(wile>=0) {
        std::cout << wile << std::endl;
        wile--;
    }
    std::cout << "Ira, ahora wacha cómo cuento del mil al cero utilizando un do while." << std::endl;
    wile = 1000;
    system("PAUSE");
    do{
        std::cout << wile << std::endl;
        wile--;
    } while (wile >= 0);
    std::cout << "Ira, ahora ve cómo cuento del 0 al 100, pero más lento :D" << std::endl;
    system("PAUSE");
    for (int a = 0; a <= 100; a++) {
        Sleep(100);
        std::cout << a << std::endl;
    }
    std::cout << "Ira, ahora de 10 en 10 iré saltando espacios *inserte emoji de carita hot*" << std::endl;
    system("PAUSE");
    for (int a = 0; a < 101;a++) {
        Sleep(100);
        std::cout << a << " - ";
        if (b == 10) {
            std::cout << std::endl;
            b = 0;
        }
        b++;
    }
    std::cout << "\n\nGracias por utilizar esta calculadora :D" << std::endl;
}