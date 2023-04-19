// 2023_03_08_2023_ValorAbsoluto_V1.cpp 
// Daniel Mariscal
//

#include <iostream>

int main()
{
    int n = 0;
    int n2 = 0;
    std::cout << "Hola, dame un número y te daré su valor absoluto." << std::endl;
    std::cin >> n;
    if (n < 0) {
        n2 = n * (-1);
        std::cout << "El valor absoluto es " << n2 << std::endl;
    }
    else {
        std::cout << "El valor absoluto es " << n << std::endl;
    }
}
