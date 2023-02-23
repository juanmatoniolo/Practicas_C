#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define VUELTA 500

int comparar()
{
    // PARA PODER GENERAR UNA PALABRA
    int word;
    int intentos = 0;
    int score[intentos];
    int mayor_resultado = 0;
    int semisuma = 0;
    int terminar_partida = 0;

    char palabras_guardadas[30][6] = {
        "ALTOS",
        "BARCO",
        "CANES",
        "CANTE",
        "CANTO",
        "CEJAS",
        "COBRA",
        "COTAS",
        "COPAS",
        "CORTE",
        "DOBLA",
        "ESTAN",
        "HILOS",
        "GATOS",
        "GOTAS",
        "LAPIZ",
        "LICOR",
        "LOMAS",
        "NARIZ",
        "NUBES",
        "NYLON",
        "PELOS",
        "POLEN",
        "PULSO",
        "REGLA",
        "RUEDA",
        "SUELO",
        "SURCO",
        "TIMON",
        "VALES",
    };

    // Palabras que yo tipeo
    char humano[6];
    char *ph;
    ph = &humano[0];
    printf("Cuantos intentos quiere realizar?\n>");
    scanf("%d", &intentos);
    // CANTIDAD DE PARTIDAS A JUGAR
    while (intentos <= 0 || intentos > 8)
    {
        printf("\nLA CANTIDAD DE INTENTOS VAN DESDE 1 A 8, ESCOJA UN NUEMRO ENTRE ESOS");
        scanf("%d", &intentos);
    }
    // CREAO PALABRA MISTERIOSA Y COMPARO CON EL USUARIO
    for (int i = 0; i < intentos; i++)
    {
        // Genero la palabra al azar
        srand(time(NULL));
        word = rand() % 30 + 1;
        int puntaje = 5000;

        printf("\n\t\t\t---------------------------------------------------------------------------------\n\t\t\t/\t\t\t\t\t\t\t\t\t\t /\n\t\t\t\t\n\t\t\t/\t\t\t\tINTENTO %d de %d\t\t\t\t\t /\n\t\t\t\n\t\t\t/\t\t\t\t\t\t\t\t\t\t /\n\t\t\t---------------------------------------------------------------------------------", i + 1, intentos);
        // Para saber que salio nomas
        // DESCOMENTAND ACA PODEMOS CHEQUEAR LAS PALABRAS QUE SALEN
        /*
               for (int i = 0; i < 6; i++)
               {
                   printf("%c", palabras_guardadas[word][i]);
               }
               printf("\n");
              printf("la palabra secreta era: \n");

        */

        int rondas = 0;
        // COMPARAR PALABRAS
        do
        {

            int lista_puntaje[5][5];

            int contador = 0; // Este es para saber si la palabra fue correcta a la primera
            printf("\n\n*************************************\t\tIntento Numero  %d\t\t*************************************\n\n\n>", rondas + 1);
            scanf("%s", ph); // guardo la palabra

            for (int i = 0; i < 6; i++) // IMPRIMO LA PALABRA QUE INGRESO EL USUARIO
            {
                printf("%c", humano[i]);
            }

            printf("\n");

            for (int i = 0; i < 5; i++) // INFORMO SI ESTA BIEN
            {
                int cont = 0; // Este contador es para asignar un valor que luego se transformara en '#', '*' o '-'

                for (int j = 0; j < 5; j++)
                {
                    if (palabras_guardadas[word][i] == humano[i])
                    {
                        cont = cont + 10;
                        contador = contador + 10;
                    }
                    else if (palabras_guardadas[word][i] == humano[j])
                    {
                        cont++;
                        contador++;
                    }
                }
                if (cont > 4)
                {
                    printf("#");
                    lista_puntaje[rondas][i] = 100;
                }
                else if (cont > 0)
                {
                    printf("*");
                    lista_puntaje[rondas][i] = 50;
                }
                else
                {
                    printf("-");
                    lista_puntaje[rondas][i] = 0;
                }
            } // OBSERVANDO LAS PALABRAS ME DI CUENTA QUE NO SE REPETIN LETRAS EN LAS MISMAS ENTONCES SI COINCIDEN EN EL PRIMER IF DEL FOR SUMU 10 AL CONTADOR, SI COINCIDE EN ALGUN OTRO LADO QUE SUMAMOS 1 Y ESO SIG QUE LA LETRA EXISTE DENTRO DE LA PALABRA Y SI EL CONTADOR QUEDA EN 0 SIGNIFICA QUE ESA LETRA NO EXISTE.

            printf("\n\n\t\t\t\t\t________________________________________________________\n\n \t\t\t\t\t | \tRECUERDE QUE: \n\t\t\t\t\t | '#' LETRA ES CORRECTA \n\t\t\t\t\t | '*' LETRA CORRESPONDE PERO NO ES EL LUGAR      \n\t\t\t\t\t | '-' LA LETRA NO PERTENECE A LA PALABRA \n\t\t\t\t\t________________________________________________________\n");

            if (contador > 249)
            {

                // printf("\n %d! ", contador );
                if (rondas == 0)
                {
                    puntaje = puntaje + 5000;
                    printf("\n TU PUNTAJE ES DE  %d\n\n", puntaje);
                    printf("\n\t\t------------------------------------------------------------------\n\n\t\t\t FELICITACIONES! ACERTASTE EN EL %d INTENTO\n\t\t------------------------------------------------------------------\n\n ", rondas + 1);

                    break;
                }
                else
                {
                    puntaje = puntaje + 2000;
                    printf("\n TU PUNTAJE ES DE  %d\n\n", puntaje);
                    printf("\n\t\t------------------------------------------------------------------\n\n\t\t\t FELICITACIONES! ACERTASTE EN EL %d INTENTO\n\t\t------------------------------------------------------------------\n\n ", rondas + 1);

                    break;
                }
            }
            else
            {
                contador = 0;
                if (rondas >= 1)
                {
                    for (int i = 0; i < 5; i++)
                    { // Cuando el puntaje sea 100 y sea igual al valor de arriba en el array bidimensional no se suma nada
                        if (lista_puntaje[rondas][i] != 100 && lista_puntaje[rondas][i] != lista_puntaje[(rondas - 1)][i])
                        {
                            puntaje = puntaje + lista_puntaje[rondas][i];
                        }
                        else
                        {
                            puntaje = puntaje + 0; // Sumo todos los totales del primer bloque
                        }
                    }
                    puntaje = puntaje - VUELTA;
                    printf("\n TU PUNTAJE ES DE  %d!\n\n ", puntaje);
                }
                else
                {

                    for (int i = 0; i < 5; i++)
                    {
                        puntaje = puntaje + lista_puntaje[rondas][i]; // Sumo todo lo que hay
                    }
                    puntaje = puntaje - VUELTA;
                    if (puntaje >= 0)
                    {
                        printf("\n TU PUNTAJE ES DE  %d!\n\n ", puntaje);
                    }
                    else
                    {
                        printf("PERDISTE TODOS TUS PUNTOS");
                    }
                }
            }

            rondas++;

        } while (rondas < 5);

        printf("la palabra secreta era: \n");
        for (int i = 0; i < 6; i++)
        {
            printf("%c", palabras_guardadas[word][i]);
        }

        printf("\n");
        score[i] = puntaje;
        printf("\n");

        printf("QUIERE SEGUIR JUGANDO?\n>'1' para si\n '2' para no");
        scanf("%d", &terminar_partida);
        if (terminar_partida == 2)
        {
            printf("SU PUNTAJE HASTA AQUI FUE DE: %d\n GRACIAS POR JUGAR. ADIOS\n\n", puntaje);
            system("pause");
            exit(-1);
        }

        system("cls");
    }
    // MUESTRO LOS RESULTADOS  Y GUARDO EL MEJOR EN UNA VARIABLE
    // EN EL MISMO FOR SUMO LOS RESULTADOS Y LOS GUARDO EN OTRA VARIABLE
    for (int i = 0; i < intentos; i++)
    {
        printf("\n-En intento %d hiciste %d puntos\n", i + 1, score[i]);
        semisuma = semisuma + score[i];
        if (score[i] > mayor_resultado)
        {
            mayor_resultado = score[i];
        }
    }
    semisuma = semisuma / intentos;

    printf("\nTU MEJOR RESULTADO FUE %d Y PROMEDIASTE %d PUNTOS ", mayor_resultado, semisuma);

    return 0;
}

void marco_arriba()
{
    printf("\n\t__________________________________\tINTRUCCIONES\t_______________________________________\n\t\t\t\t\t\t\t\t \n ");
}

void marco_abajo()
{

    printf("\n\t\t\t\t\t\t\t\t \n\t____________________________________________________________________________________________________\n ");
}

void intrucciones()
{
    printf("\n\t\tEL JUGADOR PUEDE ELEGIR ENTRE JUGAR 1 A 8 PARTIDAS: \n\n CADA PARTIDA CUENTA COON 5 INTENTOS PARA ADIVINAR LA PALABRA SECRETA. LA MISMA ESTA CONFORMADA POR 5 LETRAS\n\n LAS PALABAS INGRESADAS TIENEN QUE SER SIEMPRE CON EL 'BLOCK MAYUS' ACTIVADO.\n\n EL JUGADOR COMIENZA CON 5.000 PUNTOS\n\n ACERTAR A LA PALABRA EN EL PRIMER INTENTO TE OTORGA 10.000 PUNTOS\n\n ACERTAR LA PALABRA EN CUALQUIER OTRO INTENTO OTOGA 2.000 PUNTOS\n\n DEBAJO DE LA PALABRA QUE USTED INGRESE APARECERAN 3 POSIBLES SIMBOLOS:\n\t '#' LETRA EN EL CASILLERO CORRECTO. SUMA 100 PUNTOS POR UNICA VEZ\n\t '*' LETRA CORRECTA EN CASILLERO INCORRECTO. SUMA 50 PUNTOS\n\t '-' LETRA INCORRECTA, NO PERTENECE A LA PALABRA SECRETA\n\nIMPORTANTE!!!! POR CADA RONDA QUE AVANCE PERDERA 500 PUNTOS Y SE SUMARON LOS OBTENIDOS ACORDE A LO EXPLICADO ANTERIORMENTE\n\n");
}
