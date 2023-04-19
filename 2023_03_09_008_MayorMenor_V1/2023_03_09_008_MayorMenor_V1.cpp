// 2023_03_09_008_MayorMenor_V1.cpp
// Daniel Mariscal
// Identificar el número mayor
//

#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    std::cout << "Hola, dime un número\n" << std::endl;
    std::cin >> a;
    std::cout << "Ok, dame otro. Te diré cuál es el mayor" << std::endl;
    std::cin >> b;
    if (a < b) {
        std::cout << b << " es mayor que " << a << std::endl;
    }
    else {
        if (b == a) {
            std::cout << "Los dos números son iguales." << std::endl;
        }
        else {
            std::cout << a << " es mayor que " << b << std::endl;
        }
    }
}