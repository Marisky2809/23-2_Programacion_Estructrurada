// 2023_04_24_010_Calculadora_V1.cpp
// Daniel Mariscal
// Calcula el valor absoluto
// Te dice qué número es mayor
// Utiliza decisiones simples para realizar distintas operaciones
//

#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    int operacion = 0;
    float n1 = 0;
    float n2 = 0;
    float resultado = 0;

    std::cout << "Hola, soy una calculadora :3\nElije qué tipo de operación quieres realizar:\n\n" <<
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
        std::cout << "El producto de " << n1 << " y " << n2 << " es: " << resultado;
        break;
    case 4:
        std::cout << "OK, vamos a Dividir. Dame el valor del dividendo:" << std::endl;
        std::cin >> n1;
        std::cout << "Ok, ahora dame el valor del divisor" << std::endl;
        std::cin >> n2;
        resultado = n1 / n2;
        std::cout << "El cociente de dividir " << n1 << " entre " << n2 << " es: " << resultado;
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