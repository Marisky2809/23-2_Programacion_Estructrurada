// 2023_04_24_009_LogIn_V1.cpp
// Daniel Mariscal
// Este programa usa decisiones simples para hacer una interfaz de Log In
//

#include <iostream>
#include <locale.h>

int main()
{
    std::string usuario = "Marisky";
    std::string correo = "danymariscalg@gmail.com";
    std::string usuario1;
    std::string contrasena = "Cacahuate123";
    std::string contrasena1;
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::cout << "Hola, ingresa tu correo electrónico o tu nombre de usuario para continuar\n" << std::endl;
    std::cin >> usuario1;
    if (usuario1 == usuario || usuario1 == correo) {
        std::cout << "Ahora ingresa tu contraseña:\n" << std::endl;
        std::cin >> contrasena1;
        if (contrasena1 == contrasena) {
            std::cout << "Bienvenido, Daniel :)\n" << std::endl;
        }
        else {
            std::cout << "Lo siento, tu contraseña no es correcta." << std::endl;
        }
    }
    else {
        std::cout << "Lo siento, tu correo electrónico o nombre de usuario no es correcto." << std::endl;
    }
}