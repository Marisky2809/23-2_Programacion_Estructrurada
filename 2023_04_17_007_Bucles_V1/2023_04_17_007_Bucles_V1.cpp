// 2023_04_17_007_Bucles_V1.cpp :
// 
//

#include <iostream>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    //Ciclo infinito hasta que se deje de cumplir la condición
    bool credito = true;
    int aux = 0;
    while (credito)//evalúa la veracidad de la sentencia
    {
        std::cout << "Tienes crédito \n";
        aux = aux + 1;
        if (aux == 10)
        {
            credito = false;
        }
    }
    do {
        std::cout << "Quieres continuar?\n 0) No\n1) Sí\n";
        std::cin >> credito;
    } while (credito);

    //For es el ciclo de mayor control porque depende de 3 variables en su declaración
    //1. Variable de inicial
    //2. Límite
    //3. Paso de variable, aumento o disminución

    for (int i = 0; i < 10; i++)
    {
        std::cout << "El contador va en " << i << std::endl;
    }
}