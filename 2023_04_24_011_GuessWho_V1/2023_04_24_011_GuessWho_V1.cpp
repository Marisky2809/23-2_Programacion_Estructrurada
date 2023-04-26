// 2023_04_24_011_GuessWho_V1.cpp
// Daniel Mariscal
// Adivina quién de jugadores del Chelsea
//

#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    int posicion = 0;
    bool afirmar = 0;
    std::cout << "Hola! Jugamos Adivina Quién?\nPiensa en cualquier jugador de la plantilla profesional del Chelsea de esta temportada"
        << "Te explico, haré algunas preguntas abiertas y otras cerradas. Cuando sean sobre responder Sí o No, digita 1 para decir que Sí, y 0 para decir que No." << std::endl;
    std::cout << "En qué parte del campo se suele desempeñar tu jugador?\n" <<
        "1) Es portero\n2) Defensor\n3) Mediocampista (Los extremos o volantes ofensivos se consideran delanteros)\n4) Delantero" << std::endl;
    std::cin >> posicion;
    switch (posicion) {
    case 1:
        std::cout << "Ok, entonces es un portero? Esto será fácil\nTu jugador suele ser titular en el equipo?" << std::endl;
        std::cin >> afirmar;
        if (afirmar == 1) {
            std::cout << "Tu jugador es español?" << std::endl;
            std::cin >> afirmar;
            if (afirmar == 1) {
                std::cout << "Tu jugador es Kepa Arrizabalaga" << std::endl;
            }
            else {
                std::cout << "Tu jugador es Eduard Mendy" << std::endl;
            }
        }       
        else {
            std::cout << "Tu jugador es de nacionalidad senegalés y francesa?" << std::endl;
            std::cin >> afirmar;
            if (afirmar == 1) {
                std::cout << "Tu jugador es Eduard Mendy" << std::endl;
            }
            else {
                std::cout << "Tu jugador es Marcus Bentinelli" << std::endl;
            }
        }
        break;
    
    case 2:
        std::cout << "Ok, entonces es un defensor. Tu jugador se desempeña como lateral?" << std::endl;
        std::cin >> afirmar;
        if(afirmar==1){
            afirmar = 0;
            std::cout << "Entendido. Juega por la banda derecha?" << std::endl;
            std::cin >> afirmar;
            if (afirmar == 1) {
                afirmar = 0;
                std::cout << "Ok, tu jugador es de nacionalidad iglesa?" << std::endl;
                std::cin >> afirmar;
                if (afirmar == 1) {
                    std::cout << "Tu jugador es el poderosísimo Reece James. Sí le sabes al fútbol :D" << std::endl;
                }
                else {
                    std::cout << "Tu jugador es César Azpilicueta" << std::endl;
                }
            }
            else {
                afirmar = 0;
                std::cout << "OK, entonces juega por banda izquierda.\nTu jugador es rubio?" << std::endl;
                std::cin >> afirmar;
                if (afirmar == 1) {
                    std::cout << "Tu jugador es Lewis Hall" << std::endl;
                }
                else {
                    afirmar = 0;
                    std::cout << "Tu jugador tiene el pelo chino?" << std::endl;
                    std::cin >> afirmar;
                    if (afirmar == 1) {
                        std::cout << "Tu jugador es Marc Cucurella" << std::endl;
                    }
                    else {
                        std::cout << "Tu jugador es Benjamin Chilwell" << std::endl;
                    }
                }
            }
        }
        else {
            std::cout << "Ok, entonces es un defensor central. Fue un refuerzo para la temporada actual?" << std::endl;
            std::cin >> afirmar;
            if (afirmar == 1) {
                afirmar = 0;
                std::cout << "Fue un refuerzo del mercado de verano?" << std::endl;
                std::cin >> afirmar;
                if (afirmar == 1) {
                    afirmar = 0;
                    std::cout << "Juega con la selección de Senegal?" << std::endl;
                    std::cin >> afirmar;
                    if (afirmar == 1) {
                        std::cout << "Tu jugador es Kalidou Koulibaly" << std::endl;
                    }
                    else {
                        std::cout << "Tu jugador es Wesley Fofana" << std::endl;
                    }
                }
                else {
                    std::cout << "Tu jugador es Benoit Badiashile" << std::endl;
                }
            }
            else {
                afirmar = 0;
                std::cout << "Tu jugador es canterano del club?" << std::endl;
                std::cin >> afirmar;
                if (afirmar == 1) {
                    std::cout << "Tu jugador es Trevoh Chalobah" << std::endl;
                }
                else {
                    std::cout << "Tu jugador es Thiago Silva. Tienes buen gusto :)" << std::endl;
                }
            }
        }
        break;
    case 3:
        std::cout << "Uy, Mediocampista? Este es el más difícil de adivinar.\nTu jugador fue un refuerzo de esta temporada?" << std::endl;
        std::cin >> afirmar;
        if (afirmar == 1) {
            afirmar = 0;
            std::cout << "Ok, tu jugador fue formado en la academia del club?" << std::endl;
            std::cin >> afirmar;
            if (afirmar == 1) {
                std::cout << "Tu jugador es Conor Gallagher" << std::endl;
            }
            else {
                afirmar = 0;
                std::cout << "Tu jugador fue campeón del mundo con Argentina en 2022?" << std::endl;
                if (afirmar == 1) {
                    std::cout << "Tu jugador es Enzo Fernández" << std::endl;
                }
                else {
                    std::cout << "Tu jugador es Denis Zakaria" << std::endl;
                }
            }
        }
        else {
            afirmar = 0;
            std::cout << "Tu jugador fue formado en la academia del club?" << std::endl;
            std::cin >> afirmar;
            if (afirmar == 1) {
                afirmar = 0;
                std::cout << "Tu jugador fue seleccionado inglés en la copa del mundo del 2022?" << std::endl;
                std::cin >> afirmar;
                if (afirmar == 1) {
                    std::cout << "Tu jugador es el poderosísimo Mason Mount. Qué buen gusto, es mi jugador favorito :3" << std::endl;
                }
                else {
                    std::cout << "Tu jugador es Ruben Loftus-Cheek" << std::endl;
                }
            }
            else {
                afirmar = 0;
                std::cout << "Tu jugador fue campeón del mundo con Francia en 2018?" << std::endl;
                std::cin >> afirmar;
                if (afirmar) {
                    std::cout << "Tu jugador es N'golo Kanté!! :D Lo quiero mucho a N'golito <3" << std::endl;
                }
                else {
                    std::cout << "Tu jugador es Mateo Kovacic" << std::endl;
                }
            }
        }
        break;
    case 4:
        std::cout << "Ok, es un delantero...\nTu jugador suele jugar como delantero central o falso 9?" << std::endl;
        std::cin >> afirmar;
        if (afirmar == 1) {
            afirmar = 0;
            std::cout << "Tu jugador fue un refuerzo de esta temporada?" << std::endl;
            std::cin >> afirmar;
            if (afirmar == 1) {
                afirmar = 0;
                std::cout << "Tu jugador fue formado en la academia del club?" << std::endl;
                std::cin >> afirmar;
                if (afirmar == 1) {
                    std::cout << "Tu jugador es Armando Broja" << std::endl;
                }
                else {
                    afirmar = 0;
                    std::cout << "Tu jugador vino procedente del FC Barcelona?" << std::endl;
                    std::cin >> afirmar;
                    if (afirmar == 1) {
                        std::cout << "Tu jugador es Pierre-Emerick Aubameyang" << std::endl;
                    }
                    else {
                        std::cout << "Tu jugador es David Datro Fofana" << std::endl;
                    }
                }
            }
            else {
                std::cout << "Tu jugador es el poderosísimo Kai Havertz :D" << std::endl;
            }
        }
        else {
            afirmar = 0;
            std::cout << "Tu jugador fue un refuerzo para esta temporada?" << std::endl;
            std::cin >> afirmar;
            if (afirmar == 1) {
                afirmar = 0;
                std::cout << "Tu jugador fue cedido por el Atlético de Madrid?" << std::endl;
                std::cin >> afirmar;
                if (afirmar == 1) {
                    std::cout << "Tu jugador es Joao Félix" << std::endl;
                }
                else {
                    afirmar = 0;
                    std::cout << "Tu jugador es inglés?" << std::endl;
                    std::cin >> afirmar;
                    if (afirmar == 1) {
                        afirmar = 0;
                        std::cout << "Tu jugador es un seleccionado internacional?" << std::endl;
                        std::cin >> afirmar;
                        if (afirmar == 1) {
                            std::cout << "Tu jugador es Raheem Sterling" << std::endl;
                        }
                        else {
                            afirmar = 0;
                            std::cout << "Tu jugador llegó procedente del Aston Villa?" << std::endl;
                            std::cin >> afirmar;
                            if (afirmar == 1) {
                                std::cout << "Tu jugador es Carney Chukwuemeka" << std::endl;
                            }
                            else {
                                std::cout << "Tu jugador es Noni Madueke" << std::endl;
                            }
                        }
                    }
                    else {
                        std::cout << "Tu jugador es Mykhailo Mudryk" << std::endl;
                    }
                }
            }
            else {
                afirmar = 0;
                std::cout << "Tu jugador es inglés?" << std::endl;
                std::cin >> afirmar;
                if (afirmar == 1) {
                    afirmar = 0;
                    std::cout << "Tu jugador rubio?" << std::endl;
                    std::cin >> afirmar;
                    if (afirmar == 1) {
                        std::cout << "Tu jugador es Conor Gallagher" << std::endl;
                    }
                    else {
                        afirmar = 0;
                        std::cout << "Tu jugador es el cobrador diestro de tiros libres?" << std::endl;
                        std::cin >> afirmar;
                        if (afirmar == 1) {
                            std::cout << "Tu jugador es el poderosísimo Mason Mount. Qué buen gusto, es mi jugador favorito :3" << std::endl;
                        }
                        else {
                            std::cout << "Tu jugador es Harvey Vale" << std::endl;
                        }
                    }
                }
                else {
                    afirmar = 0;
                    std::cout << "Tu jugador es Norteamericano?" << std::endl;
                    std::cin >> afirmar;
                    if (afirmar == 1) {
                        std::cout << "Tu jugador es Christian Pulisic" << std::endl;
                    }
                    else {
                        std::cout << "Tu jugador es Hakim Ziyech :)" << std::endl;
                    }
                }
            }
        }
        break;
    default:
        std::cout << "Wtf, qué posición es esa?? .___." << std::endl;
    }
}