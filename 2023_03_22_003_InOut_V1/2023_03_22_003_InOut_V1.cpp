// 2023_03_22_003_InOut_V1.cpp :
// Daniel Mariscal
// vamos a usar bibliotecas
// Reforzaremos el hablar con el usuario
// Recibiremos datos del usuario.


//Sintaxys para agregar lobrerías
//# obligado y ponerla entre <>
//
#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    bool pregunta = false;
    int n_tacos = 0;
    float costo = 0;
    char genero;
    std::string carne;
    
    std::cout << "Hola, Bienvenido/a a tu programa...\n";
    std::cout << "Qué sos?\nh) Hombre\nm) Mujer\nn)No binario" << std::endl;
    std::cin >> genero;
    std::cout << "Oh, excelente! Eres " << genero << ". Entendido! :)" << std::endl;
    
    std::cout << "Lea y responda con verdadero o falso: \n" <<
        "Anoche cenó tacos?\n0) No\n1) Sí" << std::endl;
    //Recibir respuesta del usuario
    std::cin >> pregunta;

    std::cout << "Ya veo, entonces es " << pregunta << " que cenaste tacos" << std::endl;

    std::cout << "Cuántos tacos?" << std::endl;
    std::cin >> n_tacos;
    std::cout << "Baia, te comiste " << n_tacos << " tacos??!!\n" << std::endl;

    std::cout << "Cuánto te costaron en total?" << std::endl;
    std::cin >> costo;
    std::cout << "\n" << costo << "???!!!!! Por qué tan caro??! :(" << std::endl;

    std::cout << "De qué son los más buenos? .__.\n" << std::endl;
    
    std::cin >> carne;
    std::cout << "\nEntonces los más buenos son los de " << carne << "? Va, Los voy a probar, pero están caros..." << std::endl;
    std::cout << "Gracias por la recomendación :)\nHasta la proccismaaaaa" << std::endl;
}