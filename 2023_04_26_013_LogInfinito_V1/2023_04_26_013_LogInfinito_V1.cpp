// 2023_04_26_013_LogInfinito_V1.cpp
// Daniel Mariscal
// Interfaz de Log In, pero debe preguntar de forma infinita aún si los datos son correctos.
//

#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::string usuario = "Marisky";
    std::string correo = "danymariscalg@gmail.com";
    std::string usuario1;
    std::string contrasena = "Cacahuate123";
    std::string contrasena1;
    int a=1;
    std::cout << "Hola :3" << std::endl;
    while (a > 0) {
        std::cout << "Ingresa tu correo electrónico o tu nombre de usuario para continuar\n" << std::endl;
        std::cin >> usuario1;
        if (usuario1 == usuario || usuario1 == correo) {
            std::cout << "Ahora ingresa tu contraseña:\n" << std::endl;
            std::cin >> contrasena1;
            if (contrasena1 == contrasena) {
                std::cout << "Bienvenido, Daniel :)\n" << std::endl;
            }
            else {
                std::cout << "Lo siento, tu contraseña no es correcta.\n" << std::endl;
            }
        }
        else {
            std::cout << "Lo siento, tu correo electrónico o nombre de usuario no es correcto." << std::endl;
        }
    }
}