#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define VUELTA 500
#define ENTER printf("\n")
void marco_arriba_2();
void marco_abajo();

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
    marco_arriba_2();
    printf("Cuantos partidas quiere realizar?\n>");
    scanf("%d", &intentos);
    ENTER;
    marco_abajo();
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
        printf("\n");
        printf("la palabra secreta es: \n");
        printf("\n");
        for (int i = 0; i < 6; i++)
        {
            printf("%c", palabras_guardadas[word][i]);
        }

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

                // EN ESTE FOR  COMPARO LETRA POR LETRA EN EL IF SI ES IGUAL LA PRIMER LETRA SUMO 10 SI LA LETRA NO ESTA EN EL LUGAR INDICADO SUMO 1
                for (int j = 0; j < 5; j++)
                {
                    if (palabras_guardadas[word][i] == humano[i])
                    {
                        cont = cont + 10;
                        contador = contador + 10;
                        // EL CONT SUBE DIRECTO A 10 Y DA UNA PALABRA ACERTADA
                    }
                    else if (palabras_guardadas[word][i] == humano[j])
                    {
                        cont++;
                        contador++;
                        // CON ESTO EL CONT COMO MAXIMO LLEGA A 5 SUPONIENDO QUE PUSO TODAS LAS LETRAS DESORDENADAS
                    }
                }
                // TERMINA EL FOR DE COMPARA Y PUNTUAR PALABRAS
                if (cont > 5)
                { // SI DA MAS DE 7 PUNTOS ES PORQUE LA LETRA ESTA CORRECTA
                    printf("#");
                    lista_puntaje[rondas][i] = 100;
                    cont = 0;
                }
                else if (cont > 0)
                {
                    // SI SUMO ALGUN PUNTO SIGNIFICA QUE LA LETRA ESTA
                    printf("*");
                    lista_puntaje[rondas][i] = 50;
                    cont = 0;
                }
                else
                {
                    // NO SUMA PUNTOS ASI QUE NO ESTA LA LETRA
                    printf("-");
                    lista_puntaje[rondas][i] = 0;
                }
                
            } // LAS LETRAS NO SE REPITEN. EN LA LISTA DE PINTAJES USANDO LAS RONDAS VOY GUARDANDO LOS PINTOS QUE VAN HACIENDO. ASI CUANDO EL PUNTAJE SEA ARRIBA DE 249 SIGNIFICA QUE ESTAN BIEN TODAS LAS LETRAS EN EL PRIMER INTENTO. EL FOR COMPARA 5 VECES LAS LETRAS Y SI TODAS SON CORRECTAS ME DA 5 *5 = 25 *10 == 250
            // POR ESO ES QUEUSE UN CONT Y UN CONTADOR. LOS DOS HACEN DOS COSAS DISTINTAS, LOS USO DE PIVOTE

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

        ENTER;
        score[i] = puntaje;
        ENTER;
        // para que no pregunte si quieres seguir jugando cuando solo pediste un intento
        
         if ( intentos > (i+1))
          {
              printf("QUIERE SEGUIR JUGANDO?\n'1' para si\n '2' para no\n>");
              scanf("%d", &terminar_partida);
              if (terminar_partida == 2)
              {
                  printf("SU PUNTAJE HASTA AQUI FUE DE: %d\n GRACIAS POR JUGAR. ADIOS\n\n", puntaje);
                  system("pause");
                  exit(-1);
              }
          }
        

        system("pause");
        system("cls");
    }
    // MUESTRO LOS RESULTADOS  Y GUARDO EL MEJOR EN UNA VARIABLE
    // EN EL MISMO FOR SUMO LOS RESULTADOS Y LOS GUARDO EN OTRA VARIABLE
    for (int i = 0; i < intentos; i++)
    {
        printf(" Tu puntaje en la partida numero %d fue de %d\n ", (i + 1), score[i]);
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

void marco_arriba_2()
{
    printf("\n\t__________________________________\t\t_______________________________________\n\t\t\t\t\t\t\t\t \n ");
}
