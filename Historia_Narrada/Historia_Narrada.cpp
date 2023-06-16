// Historia_Narrada.cpp
//

#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    bool resp = 0;
    int deporte = 0;
    std::cout << "Un día cualquiera despiertas y debes ir a la escuela. Ha sido un mes muy difícil para tí." << std::endl
        << "No te has adaptado de la mejor forma a tu nueva escuela, en la que conoces a muchas personas, pero nadie se siente cercano." << std::endl
        << "\n\nRecibes una invitación a quedarte en algún taller deportivo. Quizás es una buena oportunidad de cambiar las cosas..."
        << "\nQuieres inscribirte a algún taller?\n";
    std::cin >> resp;
    if (resp == 1) {
        resp = 0;
        std::cout << "Qué disciplina ves más conveniente?\n\n1. Básquetbol"<<
            ": Has escuchado que es un grupo reducido en el que hay mucha exigencia física." <<
            "\n\n2. Fútbol: Tus amigos de otros grados están ahí, aunque nadie los toma en cuenta, parece ser el grupo menos competitivo."
            <<"\n\n3.Volleybol: Serías parte del equipo estelar de la institución. "
            << "Por alguna razón los alumnos más populares y carismáticos son parte de dicho equipo. Además, hay muchas mujeres en la categoría femenil.\n";
        std::cin >> deporte;
        switch (deporte)
        {
        case 1: 
            std::cout << "\nAcabas de entrar al equipo de básquetbol. Nunca habías practicado este deporte seriamente, y al principio te cuesta demasiado." <<
                " Tus habilidades en otras disciplinas te vuelven un atleta competitivo, pero ciertamente, no eres bueno para este deporte." << std::endl;
            system("PAUSE");
            std::cout << "Después de un año, ya estás jugando más seguido, tienes más puntería y te mueves mejor dentro de la cancha, aunque técnica y físicamente tienes mucho por mejorar..." <<
                "\nQuieres continuar entrenando?" << std::endl;
            std::cin >> resp;
            if (resp == 1) {
                resp = 0;
                std::cout << "\nDecides seguir entrenando, y entró un chico de secundaria al equipo. Él es de nuevo ingreso y prácticamente no conoce a nadie, por lo que decides acercarte" <<
                    " e intentar ser amable con él para que se sienta cómodo en el equipo y en su nueva escuela."
                    << "\nÉl empezó desde abajo en el equipo, pues el entrenador no confiaba mucho en él por su complexión física y su corta edad. "
                    << "Pero con el tiempo se empezó a ganar su lugar en el cuadro titular, y en el momento en el que su capitán se lesiona, ambos reciben más minutos."<<
                    " Ustedes se lleva tan bien que se refleja dentro de la cancha, se convirtieron en la dupla que más puntos convierte en el equipo, y una de las más temidas en la liga. "
                    << "Tal fue su reconocimiento que los demás equipos empezaban a reconocerlos y a hacer tácticas para detenerlos. Y un día, un chico que no cumplía con la categoría, "
                    << " se acerca con malas intenciones a tu amigo, a quien lo golpea sin razón alguna...\n\n";
                std::cout << "Quieres defenderlo?\n" << std::endl;
                std::cin >> resp;
                if (resp == 1) {
                    resp = 0;
                    std::cout << "Rápido llegas con el agresor y lo empujas lejos de tu amigo. Ambos equipos se enfrentan a empujones mientras tu amigo está tirado en el piso.\n"
                        << "En eso, el agresor vuelve por más, y te golpea a tí también. Alcanzaste a esquivar el golpe lo suficiente para que no te diera de lleno, y sin pensarlo dos veces, lo golpeas de vuelta" <<
                        ". \n\nEse fue un episodio confuso en tu vida del que no recuerdas mucho, solo recuerdas haber sido betado durante 5 partidos; que pudo haber sido toda la temporada, pero el castigo se redujo por "
                        << "haber sido un incidente en contra de un jugador que no saba la categoría.\n" << std::endl;
                    system("PAUSE");
                    std::cout << "Tras dos años de aquel incidente, por fin te vas a graduar. Y chica a la que no le caes nada bien se acerca de frente a tí con una actitud muy agresiva.\n"
                        << "Tú no alcanzas a reaccionar a tiempo, y ella se te lanza, te tumba al suelo y está a punto de golpearte directo en la cara";
                    system("PAUSE");
                    std::cout << "Pero tu amigo, a quien defendiste en aquel partido"
                        << " se aparece a tiempo para detener la situación y dejarlo como un momento incómodo más, pero sin ningún herido.";
                }
            }
            else {
                resp = 0;
                std::cout << "Das un paso a un lado después de que no te agradó del todo el practicar básquetbol.\n\nTras varios meses sin inspiración ni motivación, un amigo " <<
                    "te insiste que deberías intentar tocar un instrumento.\nQuieres tocar algún instrumento?";
                std::cin >> resp;
                if (resp == 1) {
                    resp = 0;
                    std::cout << "Encuentras una guitarra vieja en casa de tu abuela, preguntas a tu familia y todos están de acuerdo en que no habría problema en que te la quedes" <<
                        "\nAl principio eres muy malo tocando, pero esa actividad te sirve como distracción para desestresarte de la escuela" << std::endl;
                    system("PAUSE");
                    std::cout << "Tras dos años de practicar, te vuelves lo suficientemente bueno para animarte a tocar en público.\nEn tu clase de arte, les piden propuestas para" <<
                        " un evento del día del maestro, en el que siempre hacen un acto los alumnos que vayan a egresar...\n"
                        << "Tú y tus amigos proponen una idea para cumplir con la tarea, pero por sorpresa, los demás votaron por su propuesta.\n\nEl día del evento "<<
                        "hubo un contratiempo que te hizo llegar 2 horas tarde, pero el evento igual se retrasó por razones que desconoces, lo único que sabes es que al entrar, está" <<
                        " terminando el último acto antes que el tuyo, y en menos de un minuto debe estar todo preparado...\n\nTus amigos te ven llegar y ya tienen todo preparado, por lo que" <<
                        " inmediatamente después de llegar al lugar, saldrás al escenario.";
                    system("PAUSE");
                    std::cout << "Tu presentación fue exitosa, todo salió bien... Y ese fue tu último día en la preparatoria antes de la graduación";
                }
            }

            break;

        case 2:
            resp = 0;
            std::cout << "\nTe uniste al equipo de fútbol, en donde eres muy bien recibido, el entrenador a escuchado buenos comentarios sobre tí, y logras destacar en "
                << "tus primeros días siendo parte del equipo, por lo que te ganas un puesto en el cuadro titular." << std::endl;
            system("PAUSE");
            std::cout << "El entrenador tenía un plan para ustedes porque les vio mucho potencial."
                << "\nLos inscribió en una Liga de una categoría dos años mayor que la suya y pasaron varias temporadas en las que el equipo no llegaba a ningún lado, "
                << "pero todo el esfuerzo se vería reflejado en los interescolares nacionales." << std::endl;
            system("PAUSE");
            std::cout << "Toda la escuela tenía los ojos bajo el equipo de volleybol, quienes prometían mucho y se decía que quedarían campeones...\nCosa que nunca estuvo cerca de pasar\n"
                << "Todos los que apoyaban a ese equipo salieron decepcionados de su último partido de fase de grupos, donde fueron eliminados.\nPero el equipo de fútbol se enfrentaría"
                << " al actual campeón en semifinales. Duelo que todos daban por perdido.\nPero el equipo logró dar un gran papel frente a su gente y clasificaron a la gran final\n"
                << "La final sería contra un equipo más accesible, pero saben que no se pueden confiar...\n";
            system("PAUSE");
            std::cout << "El partido finalizó con un marcador de 3-2 a favor, y contra todo pronódtico tu equipo quedó campeón a final de la temporada"<<
                "\n\nQuieres seguir entrenando?";
            std::cin >> resp;
            if (resp == 1) {
                resp = 0;
                std::cout << "Tu equipo ya tiene más apoyo de la institución y han ganado otros 2 campeonatos locales. Y a unos cuantos meses de entrar a la universidad, decides" <<
                    " iniciar trámites a la universidad más prestigiada del país buscando una beca deportiva\n";
                system("PAUSE");
                std::cout << "Dos semanas antes de las pruebas universitarias, te desgarras el bícep femoral en un partido de liga.\nAhí se te escapó "
                    << "la oportunidad de conseguir esa beca deportiva, y la universidad no te aportó el apoyo que esperabas, por lo que no te quedó de otra más que olvidarlo.";
            }
            else {
                resp = 0;
                std::cout << "Al tener más tiempo libre, tu rendmiento académico empezó a mejorar muchísimo. A tal punto que la profesora de matemáticas te invitó a unirte"
                    << " al grupo que participará en las olimpiadas estatales de matemáticas.\nNo tienes nada mejor qué hacer, por lo que decides asistir.\n"
                    << "El grupo de recibe muy bien,y las sesiones de entrenamiento resultan ser más divertidas de lo que parecen.";
                system("PAUSE");
                std::cout << "El día del concurso no te sientes del todo seguro, pero haces tu mejor esfuerzo...\nPara tu sorpresa, el día que presentaron los resultados, apareciste donde menos lo esperabas" <<
                    " En el primer lugar junto a otros 6 estudiantes";
            }
            break;

        case 3:
            resp = 0;
            std::cout << "\nTe uniste al equipo de volleybol. En realidad no te interesa mucho el deporte como tal, pero te dará estatus y podrás conocer gente nueva,"
                << " o al menos quienes ya te conocen, te tratarán mejor...";
            system("PAUSE");
            std::cout << "Te costó adaptarte un poco a la forma de convivir de los demás, pero con el tiempo te acostumbraste."
                << "\nEl entrenador los inscribió en una liga en donde el equipo va invicto y apunta al campeonato.\nCon los ánimos elevados al máximo, el equipo se reunía después de"
                << " cada partido y hacían pequeñas fiestas muy divertidas, aunque poco a poco se pusieron turbias.\n\n"
                << "Llegó el día de participar en el torneo interescolar nacional, y toda la escuela apoya a tu equipo.";
            system("PAUSE");
            std::cout << "En tu primer partido, el equipo se siente presionado al tener demasiado público, por lo que comete muchos errores y pierden el último set por una diferencia de 7 puntos" << std::endl;
            system("PAUSE");
            std::cout << "En el segundo, tuvieron el cruce más sencillo, al que pudieron ganarle con una amplia ventaja y les quitó mucha presión de encima\n";
            system("PAUSE");
            std::cout << "En el tercer partido, les tocó contra un equipo nuevo. Pero al confiarse de más, el contrario dio la sorpresa y eliminó a tu equipo del torneo\n";
            system("PAUSE");
            std::cout << "\nDespués de ese torneo, todo vino cuesta abajo para el equipo, y aunque lograron llegar a la final de la liga local, la perdieron tras completar una mala racha\n"
                << "Quieres seguir entrenando?\n";
            std::cin >> resp;
            if (resp == 1) {
                resp = 0;
                std::cout << "Decidiste seguir entrenando. Hubo un cambio generacional en el equipo. Por lo que ahora tú eres de los jugadores con más experiencia."
                    << " Varios de los jugadores estrella del equipo se graduaron o renunciaron después de perder en ambos torneos.\n"
                    << "Ahora el entrenador confía más en tí y eres el nuevo capitán del equipo.";
            }
            else {
                resp = 0;
                std::cout << "Ya no tienes nada interesante por hacer en la escuela más que estudiar.\n"
                    << "En tu tiempo libre, investigas sobre cómo programar videojuegos en un lenguaje interpretado de alto nivel.\n"
                    << "Empiezas a aprender por tu cuenta y te das cuenta que te interesaría estudiar programación." << std::endl
                    << "Quieres hacer trámites a la universidad para estudiar programación?\n";
                std::cin >> resp;
                if (resp == 1) {
                    resp = 0;
                    std::cout << "Hiciste trámites a 3 Universidades diferentes, en las tres fuiste aceptado, pero tus dos opciones de paga no te ofrecen"
                        << " suficiente apoyo académico, por lo que decides ir a la universidad pública.\n";
                }
                else {
                    resp = 0;
                    std::cout << "Decidiste estudiar una carrera artística para cumplir tus sueños... Y te moriste de hambre :c\n";
                }
            }

        default:
            std::cout << "Lo siento, solo había esos 3 deportes." << std::endl;
            break;
        }
    }
    else {
    resp = 0;
    std::cout << "Preferiste no practicar deporte, por lo que no tienes muchas formas de desestrezarte y distraerte de la escuela\n"
        << "Empezaste a tener problemas con tus compañeros de la escuela, y cuando estabas al borde del colapso, un evento histórico ocurriría\n"
        << "Una pandemia detendría el mundo por completo durante dos años... Y si bien fue duro, fue una oportunidad para no asistir a la escuela presencialmente.\n"<<
        "Quieres hacer un cambio en tu vida?\n";
    std::cin >> resp;
    if (resp == 1) {
        resp = 0;
        std::cout << "Decidiste empezar a tomar cursos de distintas cosas que podrían ayudarte en el futuro, como dibujo digital y tradicional," <<
            " programas de Adobe y Microsoft y de edición de multimedia\n"<<
            "Después de dos años aprovechando el tiempo de buena forma, regresaste a la escuela solo para graduarte en un par de semanas.\n"
            << "Puedes ver cómo hubo personas que crecieron como personas y otras que se estancaron. Siéntete orgulloso por aprovechar tu tiempo y obtener más conocimientos.";
    }
    else {
        std::cout << "\nLa pandemia fue una etapa muy dura para tí. Varios parientes cercanos fallecieron y no tienes ganas de nada.\n" <<
            "Bajaste tu rendimiento académico al no tener el mejor ánimo.\nNo sabes qué hacer con tu vida y los trámites a la universidad se acercan\n";
        system("PAUSE");
        std::cout << "La pandemia por fin terminó después de dos largos años. Y después de empezar a salir un poco más, vuelves a encontrar un poco de motivación"
            << ". Los trámites a la universidad cierran en 2 días, pero como no tienes certeza de qué hacer, prefieres tomarte un semestre para replantear tu vida y pensar mejor las cosas.";
    }
    }
}