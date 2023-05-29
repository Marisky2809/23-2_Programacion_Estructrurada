// 2023_05_15_016_Arreglos_V1.cpp
// Daniel Mariscal
//

#include <iostream>
#include <string>

int main()
{
    std::string Titulo[5];
    std::string Autor[5];
    int Fecha[5];

    std::cout << "Hola, usuario :D\nIngresa dime cuáles son tus libros favoritos\n";
    
    for (int i=0; i < 5; i++) {
        std::cout << "Ingresa el título del libro " << i + 1 << std::endl;
        if (i > 0) {
            std::cin.ignore();//ignora la entrada a la memoria y corrige el bug a partir del bucle número 2 (i=1).
        }
        getline(std::cin, Titulo[i]);
        std::cout << "Ingresa el nombre del autor del libro " << i + 1 << std::endl;
        getline(std::cin, Autor[i]);
        std::cout << "Ingresa la fecha de publicación del libro en formato aaaammdd" << i + 1 << std::endl;
        std::cin >> Fecha[i];
    }

    std::cout << "\nEntendido :D\n\nTus libros son: " << std::endl;
    for (int j = 0; j < 5; j++) {
        std::cout << j + 1 << ". " << Titulo[j] << "\nEl autor es: " << Autor[j] << "\nPublicado el día: " << Fecha[j] << std::endl << std::endl;
    }
}