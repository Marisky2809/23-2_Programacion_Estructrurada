// 2023_05_14_Pokemon_V1.cpp
// Daniel Mariscal
// Batalla Pokémon
//

#include <iostream>
#include <locale.h>
#include <ctime>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    std::string Pokemon[4] = { "Charizard", "Garchomp", "Lucario", "Pikachu" };

    std::string Charizard[4] = { "Evite_Ígneo", "Llamarada", "Danza_Dragón", "Golpe_Roca" };
    int charizard[4] = { 45,30,0,20 };
    std::string Garchomp[4] = { "Terremoto", "Danza_Dragón", "Garra_Dragón", "Triturar" };
    int garchomp[4] = { 20, 0, 35,30 };
    std::string Lucario[4] = { "Esfera_Aural", "A_Bocajarro", "Patada_Salto_Alto", "Danza_Espada" };
    int lucario[4] = { 25, 40, 30, 0 };
    std::string Pikachu[4] = { "Cola_Férrea", "Electrobola","Impactrueno", "Trueno" };
    int pikachu[4] = { 20, 25, 40, 35 };

    int Vidas[4] = { 100, 100, 100, 100 };

    int j1_1 = 0;
    int j1_2 = 0;
    int j2_1 = 0;
    int j2_2 = 0;

    int J1 = 0;
    int J2 = 0;

    int P1 = 0;
    int P2 = 0;

    int Pokebola1 = 0;
    int Pokebola2 = 0;

    int Ac1 = 0;
    int Ac2 = 0;

    int mov1 = 0;

    int Pos1 = 3;
    int Pos2 = 3;

    std::cout << "Hola, bienvenidos a la batalla Pokémon.\nEn esta ocación, cada entrenador contará con dos pokemones, será un enfrentamiento 1v1 con cambios ilimitados." << std::endl;
    std::cout << "Estos son los pokemones posibles a elegir (NO PUEDEN REPETIRSE):\n\n1. " << Pokemon[0] << "\n2. " << Pokemon[1] << "\n3. "
        << Pokemon[2] << "\n4. " << Pokemon[3] << std::endl;
    system("PAUSE");
    std::cout << "\n\nJugador 1, elije un pokémon (digita el número de este)" << std::endl;
    std::cin >> j1_1;
    std::cout << "Ok, tu primer pokemon es " << Pokemon[j1_1 - 1] << std::endl;
    std::cout << "\nJugador 2, elije un pokémon (digita el número de este)" << std::endl;
    std::cin >> j2_1;
    std::cout << "Ok, tu primer pokemon es " << Pokemon[j2_1 - 1] << std::endl;
    std::cout << "\nJugador 1, elije un segundo pokémon para completar tu equipo (digita el número de este)" << std::endl;
    std::cin >> j1_2;
    std::cout << "Ok, tu segundo pokemon es " << Pokemon[j1_2 - 1] << std::endl;
    std::cout << "\nJugador 2, elije un segundo pokémon para completar tu equipo (digita el número de este)" << std::endl;
    std::cin >> j2_2;
    std::cout << "Ok, tu segundo pokemon es " << Pokemon[j2_2 - 1] << std::endl;
    system("CLS");
    std::cout << "OK, les confirmo los equipos:" << std::endl;
    std::cout << "\nEl equipo 1 está conformado por: " << Pokemon[j1_1 - 1] << " y " << Pokemon[j1_2 - 1] << std::endl;
    std::cout << "\nEl equipo 2 está conformado por: " << Pokemon[j2_1 - 1] << " y " << Pokemon[j2_2 - 1] << std::endl << std::endl;

    system("PAUSE");

    std::cout << "\n\nJugador 1, dime con qué pokémon quieres iniciar el combate (digita el número):\n1. "
        << Pokemon[j1_1 - 1] << "\n2. " << Pokemon[j1_2 - 1] << std::endl;
    std::cin >> J1;
    if (J1 == 1) {
        J1 = j1_1 - 1;
        P1 = j1_2 - 1;
    }
    else {
        J1 = j1_2 - 1;
        P1 = j1_1 - 1;
    }
    std::cout << "Ok, te confirmo que iniciarás con " << Pokemon[J1] << std::endl << std::endl;

    std::cout << "\n\nJugador 2, dime con qué pokémon quieres iniciar el combate (digita el número):\n1. "
        << Pokemon[j2_1 - 1] << "\n2. " << Pokemon[j2_2 - 1] << std::endl;
    std::cin >> J2;
    if (J2 == 1) {
        J2 = j2_1 - 1;
        P2 = j2_2 - 1;
    }
    else {
        J2 = j2_2 - 1;
        P2 = j2_1 - 1;
    }
    std::cout << "Ok, te confirmo que iniciarás con " << Pokemon[J2] << std::endl << std::endl;

    std::cout << "Listos para el combate?" << std::endl;
    system("PAUSE");
    system("CLS");
    std::cout << "****EL COMBATE COMENZÓ****\n" << std::endl;
    while (Vidas[J1] > 0 && Vidas[J2] > 0)
    {
        std::srand(std::time(0));
        int random1 = std::rand() % 11;
        int random2 = std::rand() % 11;
        if (random1 > random2) {

        
        std::cout << "\nJ1: " << Pokemon[J1] << "    LP: " << Vidas[J1] << "\n" << std::endl;
        std::cout << "J2: " << Pokemon[J2] << "    LP: " << Vidas[J2] << "\n" << std::endl;
        std::cout << "Jugador 1, tu pokémon fue más rapido\n¿Qué quieres hacer?\n1. Luchar\n2. Utilizar Objeto\n3. Cambiar de Pokémon" << std::endl;
        std::cin >> Ac1;
        switch (Ac1)
        {
        case 1:
            std::cout << "Qué movimiento quieres realizar?\n";
            if (J1 == 0) {
                for (int a = 0; a < 4; a++) {
                    std::cout << a+1 << ". " << Charizard[a] << std::endl;
                }
                std::cin >> mov1;
                std::cout << "Charizard utilizó " << Charizard[mov1-1] << std::endl;
                if (mov1 == 3) {
                    charizard[0] = charizard[0] + 5;
                    charizard[1] = charizard[1] + 5;
                    charizard[3] = charizard[3] + 5;
                }
                else {
                    Vidas[J2] = Vidas[J2] - (charizard[mov1 - 1] + random1);
                }
                system("PAUSE");
            }
            if (J1 == 1) {
                for (int a = 0; a < 4; a++) {
                    std::cout << a+1 << ". " << Garchomp[a] << std::endl;
                }
                std::cin >> mov1;
                std::cout << "Garchomp utilizó " << Garchomp[mov1-1] << std::endl;
                if (mov1 == 2) {
                    garchomp[0] = garchomp[0] + 5;
                    garchomp[2] = garchomp[2] + 5;
                    garchomp[3] = garchomp[3] + 5;
                }
                else {
                    Vidas[J2] = Vidas[J2] - (garchomp[mov1 - 1] + random1);
                }
                system("PAUSE");
                
            }
            if (J1 == 2) {
                for (int a = 0; a < 4; a++) {
                    std::cout << a+1 << ". " << Lucario[a] << std::endl;
                }
                std::cin >> mov1;
                std::cout << "Lucario utilizó " << Lucario[mov1 - 1] << std::endl;
                if (mov1 == 4) {
                    lucario[0] = lucario[0] + 5;
                    lucario[1] = lucario[1] + 5;
                    lucario[2] = lucario[2] + 5;
                }
                else {
                    Vidas[J2] = Vidas[J2] - (lucario[mov1 - 1] + random1);
                }
                system("PAUSE");

            }
            if (J1 == 3) {
                for (int a = 0; a < 4; a++) {
                    std::cout << a+1 << ". " << Pikachu[a] << std::endl;
                }
                std::cin >> mov1;
                std::cout << "Pikachu utilizó " << Pikachu[mov1 - 1] << std::endl;
                if (mov1 != 1 && J2==1) {
                    std::cout << "El movimiento no es eficaz" << std::endl;
                }
                else {
                    Vidas[J2] = Vidas[J2] - (pikachu[mov1 - 1] + random1);
                }
                system("PAUSE");
                
            }
            break;

        case 2:
            if (Pos1 > 0) {
                std::cout << "Tienes " << Pos1 << " pociones.\nRestaurar 20 puntos de vida a tu pokémon..." << std::endl;
                system("PAUSE");
                Vidas[J1] = Vidas[J1] + 20;
                Pos1--;
                if (Vidas[J1] > 100) {
                    Vidas[J1] = 100;
                }
            }
            else {
                std::cout << "Lo siento, no te quedan pociones." << std::endl;
                system("PAUSE");
            }
            break;

        case 3:
            if (Vidas[P1] > 0) {
                std::cout << "Vamos a cambiar de Pokémon. Actualmente estás usando a: " << Pokemon[J1] <<
                    ". Será reemplazado por: " << Pokemon[P1] << "." << std::endl;
                system("PAUSE");
                Pokebola1=J1;
                J1 = P1;
                P1 = Pokebola1;
            }
            else {
                std::cout << "Lo siento, tu otro pokémon está debilitado, no se puede cambiar." << std::endl;
                system("PAUSE");
            }
            break;
        }
        system("CLS");
        Ac1 = 0;
        if (Vidas[J2] < 1) {
            Vidas[J2] = 0 ;
            if (Vidas[P2] > 0) {
                std::cout << std::endl << Pokemon[J2] << " se ha debilitado." << std::endl <<
                    "Se hará un cambio en automático para el siguiente turno.\nAhora tu Pokémon en combate es: "
                    << Pokemon[P2] << std::endl;
                Pokebola2 = J2;
                J2 = P2;
                P2 = Pokebola2;
            }
            else {
                std::cout << Pokemon[J2] << " se ha debilitado.\nEl Jugador 1 Gana." << std::endl;
            }
        }
        
        std::cout << "J1: " << Pokemon[J1] << "    LP: " << Vidas[J1] << "\n" << std::endl;
        std::cout << "J2: " << Pokemon[J2] << "    LP: " << Vidas[J2] << "\n" << std::endl;
        
        
        if (Vidas[J2] > 0) {
            std::cout << "Jugador 2, ¿Qué quieres hacer?\n1. Luchar\n2. Utilizar Objeto\n3. Cambiar de Pokémon" << std::endl;
            std::cin >> Ac2;
            switch (Ac2)
            {
            case 1:
                std::cout << "Qué movimiento quieres realizar?\n";
                if (J2 == 0) {
                    for (int a = 0; a < 4; a++) {
                        std::cout << a + 1 << ". " << Charizard[a] << std::endl;
                    }
                    std::cin >> mov1;
                    std::cout << "Charizard utilizó " << Charizard[mov1 - 1] << std::endl;
                    if (mov1 == 3) {
                        charizard[0] = charizard[0] + 5;
                        charizard[1] = charizard[1] + 5;
                        charizard[3] = charizard[3] + 5;
                    }
                    system("PAUSE");
                    Vidas[J1] = Vidas[J1] - (charizard[mov1 - 1]+random2);
                }
                if (J2 == 1) {
                    for (int a = 0; a < 4; a++) {
                        std::cout << a + 1 << ". " << Garchomp[a] << std::endl;
                    }
                    std::cin >> mov1;
                    std::cout << "Garchomp utilizó " << Garchomp[mov1 - 1] << std::endl;
                    if (mov1 == 2) {
                        garchomp[0] = garchomp[0] + 5;
                        garchomp[2] = garchomp[2] + 5;
                        garchomp[3] = garchomp[3] + 5;
                    }
                    else {
                        Vidas[J1] = Vidas[J1] - (garchomp[mov1 - 1] + random2);
                    }
                    system("PAUSE");
                }
                if (J2 == 2) {
                    for (int a = 0; a < 4; a++) {
                        std::cout << a + 1 << ". " << Lucario[a] << std::endl;
                    }
                    std::cin >> mov1;
                    std::cout << "Lucario utilizó " << Lucario[mov1 - 1] << std::endl;
                    if (mov1 == 4) {
                        lucario[0] = lucario[0] + 5;
                        lucario[1] = lucario[1] + 5;
                        lucario[2] = lucario[2] + 5;
                    }
                    else {
                        Vidas[J1] = Vidas[J1] - (lucario[mov1 - 1] + random2);
                    }
                    system("PAUSE");                    
                }
                if (J2 == 3) {
                    for (int a = 0; a < 4; a++) {
                        std::cout << a + 1 << ". " << Pikachu[a] << std::endl;
                    }
                    std::cin >> mov1;
                    std::cout << "Pikachu utilizó " << Pikachu[mov1 - 1] << std::endl;
                    if (mov1 != 1 && J1 == 1) {
                        std::cout << "El movimiento no es eficaz" << std::endl;
                    }
                    else {
                        Vidas[J1] = Vidas[J1] - (pikachu[mov1 - 1] + random2);
                    }
                    system("PAUSE");
                }
                break;

            case 2:
                if (Pos2 > 0) {
                    std::cout << "Tienes " << Pos2 << " pociones.\nRestaurar 20 puntos de vida a tu pokémon..." << std::endl;
                    system("PAUSE");
                    Pos2--;
                    Vidas[J2] = Vidas[J2] + 20;
                    if (Vidas[J2] > 100) {
                        Vidas[J2] = 100;
                    }
                }
                else {
                    std::cout << "Lo siento, no te quedan pociones." << std::endl;
                    system("PAUSE");
                }
                break;

            case 3:
                if (Vidas[P2] > 0) {
                    std::cout << "Vamos a cambiar de Pokémon. Actualmente estás usando a: " << Pokemon[J2] <<
                        ". Será reemplazado por: " << Pokemon[P2] << "." << std::endl;
                    system("PAUSE");
                    Pokebola1=J2;
                    J2 = P2;
                    P2 = Pokebola1;
                }
                else {
                    std::cout << "Lo siento, tu otro pokémon está debilitado, no se puede cambiar." << std::endl;
                    system("PAUSE");
                }
                break;
                
                }
            Ac1 = 0;
            system("PAUSE");
            system("CLS");
            if (Vidas[J1] < 1) {
                Vidas[J1] = 0;
                if (Vidas[P1] > 0) {
                    std::cout << std::endl << Pokemon[J1] << " se ha debilitado." << std::endl <<
                        "Se hará un cambio en automático para el siguiente turno.\nAhora tu Pokémon en combate es: "
                        << Pokemon[P1] << std::endl;
                    Pokebola1 = J1;
                    J1 = P1;
                    P1 = Pokebola1;
                }
                else {
                    std::cout << Pokemon[J1] << " se ha debilitado.\nEl Jugador 2 Gana." << std::endl;
                }
            }
        }
        }
        else {
        std::cout << "J1: " << Pokemon[J1] << "    LP: " << Vidas[J1] << "\n" << std::endl;
        std::cout << "J2: " << Pokemon[J2] << "    LP: " << Vidas[J2] << "\n" << std::endl;
        if (Vidas[J2] > 0) {
            std::cout << "Jugador 2, tu pokémon fue más rápido\n¿Qué quieres hacer?\n1. Luchar\n2. Utilizar Objeto\n3. Cambiar de Pokémon" << std::endl;
            std::cin >> Ac2;
            switch (Ac2)
            {
            case 1:
                std::cout << "Qué movimiento quieres realizar?\n";
                if (J2 == 0) {
                    for (int a = 0; a < 4; a++) {
                        std::cout << a + 1 << ". " << Charizard[a] << std::endl;
                    }
                    std::cin >> mov1;
                    std::cout << "Charizard utilizó " << Charizard[mov1 - 1] << std::endl;
                    if (mov1 == 3) {
                        charizard[0] = charizard[0] + 5;
                        charizard[1] = charizard[1] + 5;
                        charizard[3] = charizard[3] + 5;
                    }
                    system("PAUSE");
                    Vidas[J1] = Vidas[J1] - (charizard[mov1 - 1] + random2);
                }
                if (J2 == 1) {
                    for (int a = 0; a < 4; a++) {
                        std::cout << a + 1 << ". " << Garchomp[a] << std::endl;
                    }
                    std::cin >> mov1;
                    std::cout << "Garchomp utilizó " << Garchomp[mov1 - 1] << std::endl;
                    if (mov1 == 2) {
                        garchomp[0] = garchomp[0] + 5;
                        garchomp[2] = garchomp[2] + 5;
                        garchomp[3] = garchomp[3] + 5;
                    }
                    else {
                        Vidas[J1] = Vidas[J1] - (garchomp[mov1 - 1] + random2);
                    }
                    system("PAUSE");
                }
                if (J2 == 2) {
                    for (int a = 0; a < 4; a++) {
                        std::cout << a + 1 << ". " << Lucario[a] << std::endl;
                    }
                    std::cin >> mov1;
                    std::cout << "Lucario utilizó " << Lucario[mov1 - 1] << std::endl;
                    if (mov1 == 4) {
                        lucario[0] = lucario[0] + 5;
                        lucario[1] = lucario[1] + 5;
                        lucario[2] = lucario[2] + 5;
                    }
                    else {
                        Vidas[J1] = Vidas[J1] - (lucario[mov1 - 1] + random2);
                    }
                    system("PAUSE");
                }
                if (J2 == 3) {
                    for (int a = 0; a < 4; a++) {
                        std::cout << a + 1 << ". " << Pikachu[a] << std::endl;
                    }
                    std::cin >> mov1;
                    std::cout << "Pikachu utilizó " << Pikachu[mov1 - 1] << std::endl;
                    if (mov1 != 1 && J1 == 1) {
                        std::cout << "El movimiento no es eficaz" << std::endl;
                    }
                    else {
                        Vidas[J1] = Vidas[J1] - (pikachu[mov1 - 1] + random2);
                    }
                    system("PAUSE");
                }
                break;

            case 2:
                if (Pos2 > 0) {
                    std::cout << "Tienes " << Pos2 << " pociones.\nRestaurar 20 puntos de vida a tu pokémon..." << std::endl;
                    system("PAUSE");
                    Pos2--;
                    Vidas[J2] = Vidas[J2] + 20;
                    if (Vidas[J2] > 100) {
                        Vidas[J2] = 100;
                    }
                }
                else {
                    std::cout << "Lo siento, no te quedan pociones." << std::endl;
                    system("PAUSE");
                }
                break;

            case 3:
                if (Vidas[P2] > 0) {
                    std::cout << "Vamos a cambiar de Pokémon. Actualmente estás usando a: " << Pokemon[J2] <<
                        ". Será reemplazado por: " << Pokemon[P2] << "." << std::endl;
                    system("PAUSE");
                    Pokebola1 = J2;
                    J2 = P2;
                    P2 = Pokebola1;
                }
                else {
                    std::cout << "Lo siento, tu otro pokémon está debilitado, no se puede cambiar." << std::endl;
                    system("PAUSE");
                }
                break;

            }
            Ac1 = 0;
            system("PAUSE");
            system("CLS");
            if (Vidas[J1] < 1) {
                Vidas[J1] = 0;
                if (Vidas[P1] > 0) {
                    std::cout << std::endl << Pokemon[J1] << " se ha debilitado." << std::endl <<
                        "Se hará un cambio en automático para el siguiente turno.\nAhora tu Pokémon en combate es: "
                        << Pokemon[P1] << std::endl;
                    Pokebola1 = J1;
                    J1 = P1;
                    P1 = Pokebola1;
                }
                else {
                    std::cout << Pokemon[J1] << " se ha debilitado.\nEl Jugador 2 Gana." << std::endl;
                }
            }
        }

        std::cout << "\nJ1: " << Pokemon[J1] << "    LP: " << Vidas[J1] << "\n" << std::endl;
        std::cout << "J2: " << Pokemon[J2] << "    LP: " << Vidas[J2] << "\n" << std::endl;
        std::cout << "Jugador 1, ¿Qué quieres hacer?\n1. Luchar\n2. Utilizar Objeto\n3. Cambiar de Pokémon" << std::endl;
        std::cin >> Ac1;
        switch (Ac1)
        {
        case 1:
            std::cout << "Qué movimiento quieres realizar?\n";
            if (J1 == 0) {
                for (int a = 0; a < 4; a++) {
                    std::cout << a + 1 << ". " << Charizard[a] << std::endl;
                }
                std::cin >> mov1;
                std::cout << "Charizard utilizó " << Charizard[mov1 - 1] << std::endl;
                if (mov1 == 3) {
                    charizard[0] = charizard[0] + 5;
                    charizard[1] = charizard[1] + 5;
                    charizard[3] = charizard[3] + 5;
                }
                else {
                    Vidas[J2] = Vidas[J2] - (charizard[mov1 - 1] + random1);
                }
                system("PAUSE");
            }
            if (J1 == 1) {
                for (int a = 0; a < 4; a++) {
                    std::cout << a + 1 << ". " << Garchomp[a] << std::endl;
                }
                std::cin >> mov1;
                std::cout << "Garchomp utilizó " << Garchomp[mov1 - 1] << std::endl;
                if (mov1 == 2) {
                    garchomp[0] = garchomp[0] + 5;
                    garchomp[2] = garchomp[2] + 5;
                    garchomp[3] = garchomp[3] + 5;
                }
                else {
                    Vidas[J2] = Vidas[J2] - (garchomp[mov1 - 1] + random1);
                }
                system("PAUSE");

            }
            if (J1 == 2) {
                for (int a = 0; a < 4; a++) {
                    std::cout << a + 1 << ". " << Lucario[a] << std::endl;
                }
                std::cin >> mov1;
                std::cout << "Lucario utilizó " << Lucario[mov1 - 1] << std::endl;
                if (mov1 == 4) {
                    lucario[0] = lucario[0] + 5;
                    lucario[1] = lucario[1] + 5;
                    lucario[2] = lucario[2] + 5;
                }
                else {
                    Vidas[J2] = Vidas[J2] - (lucario[mov1 - 1] + random1);
                }
                system("PAUSE");

            }
            if (J1 == 3) {
                for (int a = 0; a < 4; a++) {
                    std::cout << a + 1 << ". " << Pikachu[a] << std::endl;
                }
                std::cin >> mov1;
                std::cout << "Pikachu utilizó " << Pikachu[mov1 - 1] << std::endl;
                if (mov1 != 1 && J2 == 1) {
                    std::cout << "El movimiento no es eficaz" << std::endl;
                }
                else {
                    Vidas[J2] = Vidas[J2] - (pikachu[mov1 - 1] + random1);
                }
                system("PAUSE");

            }
            break;

        case 2:
            if (Pos1 > 0) {
                std::cout << "Tienes " << Pos1 << " pociones.\nRestaurar 20 puntos de vida a tu pokémon..." << std::endl;
                system("PAUSE");
                Vidas[J1] = Vidas[J1] + 20;
                Pos1--;
                if (Vidas[J1] > 100) {
                    Vidas[J1] = 100;
                }
            }
            else {
                std::cout << "Lo siento, no te quedan pociones." << std::endl;
                system("PAUSE");
            }
            break;

        case 3:
            if (Vidas[P1] > 0) {
                std::cout << "Vamos a cambiar de Pokémon. Actualmente estás usando a: " << Pokemon[J1] <<
                    ". Será reemplazado por: " << Pokemon[P1] << "." << std::endl;
                system("PAUSE");
                Pokebola1 = J1;
                J1 = P1;
                P1 = Pokebola1;
            }
            else {
                std::cout << "Lo siento, tu otro pokémon está debilitado, no se puede cambiar." << std::endl;
                system("PAUSE");
            }
            break;
        }
        system("CLS");
        Ac1 = 0;
        if (Vidas[J2] < 1) {
            Vidas[J2] = 0;
            if (Vidas[P2] > 0) {
                std::cout << std::endl << Pokemon[J2] << " se ha debilitado." << std::endl <<
                    "Se hará un cambio en automático para el siguiente turno.\nAhora tu Pokémon en combate es: "
                    << Pokemon[P2] << std::endl;
                Pokebola2 = J2;
                J2 = P2;
                P2 = Pokebola2;
            }
            else {
                std::cout << Pokemon[J2] << " se ha debilitado.\nEl Jugador 1 Gana." << std::endl;
            }
        }

        std::cout << "J1: " << Pokemon[J1] << "    LP: " << Vidas[J1] << "\n" << std::endl;
        std::cout << "J2: " << Pokemon[J2] << "    LP: " << Vidas[J2] << "\n" << std::endl;


        if (Vidas[J2] > 0) {
            std::cout << "Jugador 2, ¿Qué quieres hacer?\n1. Luchar\n2. Utilizar Objeto\n3. Cambiar de Pokémon" << std::endl;
            std::cin >> Ac2;
            switch (Ac2)
            {
            case 1:
                std::cout << "Qué movimiento quieres realizar?\n";
                if (J2 == 0) {
                    for (int a = 0; a < 4; a++) {
                        std::cout << a + 1 << ". " << Charizard[a] << std::endl;
                    }
                    std::cin >> mov1;
                    std::cout << "Charizard utilizó " << Charizard[mov1 - 1] << std::endl;
                    if (mov1 == 3) {
                        charizard[0] = charizard[0] + 5;
                        charizard[1] = charizard[1] + 5;
                        charizard[3] = charizard[3] + 5;
                    }
                    system("PAUSE");
                    Vidas[J1] = Vidas[J1] - (charizard[mov1 - 1] + random2);
                }
                if (J2 == 1) {
                    for (int a = 0; a < 4; a++) {
                        std::cout << a + 1 << ". " << Garchomp[a] << std::endl;
                    }
                    std::cin >> mov1;
                    std::cout << "Garchomp utilizó " << Garchomp[mov1 - 1] << std::endl;
                    if (mov1 == 2) {
                        garchomp[0] = garchomp[0] + 5;
                        garchomp[2] = garchomp[2] + 5;
                        garchomp[3] = garchomp[3] + 5;
                    }
                    else {
                        Vidas[J1] = Vidas[J1] - (garchomp[mov1 - 1] + random2);
                    }
                    system("PAUSE");
                }
                if (J2 == 2) {
                    for (int a = 0; a < 4; a++) {
                        std::cout << a + 1 << ". " << Lucario[a] << std::endl;
                    }
                    std::cin >> mov1;
                    std::cout << "Lucario utilizó " << Lucario[mov1 - 1] << std::endl;
                    if (mov1 == 4) {
                        lucario[0] = lucario[0] + 5;
                        lucario[1] = lucario[1] + 5;
                        lucario[2] = lucario[2] + 5;
                    }
                    else {
                        Vidas[J1] = Vidas[J1] - (lucario[mov1 - 1] + random2);
                    }
                    system("PAUSE");
                }
                if (J2 == 3) {
                    for (int a = 0; a < 4; a++) {
                        std::cout << a + 1 << ". " << Pikachu[a] << std::endl;
                    }
                    std::cin >> mov1;
                    std::cout << "Pikachu utilizó " << Pikachu[mov1 - 1] << std::endl;
                    if (mov1 != 1 && J1 == 1) {
                        std::cout << "El movimiento no es eficaz" << std::endl;
                    }
                    else {
                        Vidas[J1] = Vidas[J1] - (pikachu[mov1 - 1] + random2);
                    }
                    system("PAUSE");
                }
                break;

            case 2:
                if (Pos2 > 0) {
                    std::cout << "Tienes " << Pos2 << " pociones.\nRestaurar 20 puntos de vida a tu pokémon..." << std::endl;
                    system("PAUSE");
                    Pos2--;
                    Vidas[J2] = Vidas[J2] + 20;
                    if (Vidas[J2] > 100) {
                        Vidas[J2] = 100;
                    }
                }
                else {
                    std::cout << "Lo siento, no te quedan pociones." << std::endl;
                    system("PAUSE");
                }
                break;

            case 3:
                if (Vidas[P2] > 0) {
                    std::cout << "Vamos a cambiar de Pokémon. Actualmente estás usando a: " << Pokemon[J2] <<
                        ". Será reemplazado por: " << Pokemon[P2] << "." << std::endl;
                    system("PAUSE");
                    Pokebola1 = J2;
                    J2 = P2;
                    P2 = Pokebola1;
                }
                else {
                    std::cout << "Lo siento, tu otro pokémon está debilitado, no se puede cambiar." << std::endl;
                    system("PAUSE");
                }
                break;

            }
            Ac1 = 0;
            system("PAUSE");
            system("CLS");
            if (Vidas[J1] < 1) {
                Vidas[J1] = 0;
                if (Vidas[P1] > 0) {
                    std::cout << std::endl << Pokemon[J1] << " se ha debilitado." << std::endl <<
                        "Se hará un cambio en automático para el siguiente turno.\nAhora tu Pokémon en combate es: "
                        << Pokemon[P1] << std::endl;
                    Pokebola1 = J1;
                    J1 = P1;
                    P1 = Pokebola1;
                }
                else {
                    std::cout << Pokemon[J1] << " se ha debilitado.\nEl Jugador 2 Gana." << std::endl;
                }
            }
        }
}
    }
}