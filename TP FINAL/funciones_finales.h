#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define VUELTA 500

int comparar()
{
    // PARA PODER GENERAR UNA PALABRA
    int word;
    int puntaje = 5000;
    int intentos = 0;
    int score[intentos];

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

    // Genero la palabra al azar
    srand(time(NULL));
    word = rand() % 30 + 1;

    // Palabras que yo tipeo
    char humano[6];
    char *ph;
    ph = &humano[0];

    printf("Cuantos intentos quiere realizar?\n>");
    scanf("%d", &intentos);




        int rondas = 0;
        // COMPARAR PALABRAS
        do
        {

            int lista_puntaje[5][5];

            int contador = 0; // Este es para saber si la palabra fue correcta a la primera
            printf("\n-----------------------------\tIntento Numero  %d\t-----------------------------\n>", rondas + 1);
            scanf("%s", ph); // guardo la palabra
                             // Comentamos el cls para pruebas
            //   system("cls");

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

            printf("\t\t\t\t\t________________________________________________________\n\n \t\t\t\t\t | \tRECUERDE QUE: \n\t\t\t\t\t | '#' LETRA ES CORRECTA \n\t\t\t\t\t | '*' LETRA CORRESPONDE PERO NO ES EL LUGAR      \n\t\t\t\t\t | '-' LA LETRA NO PERTENECE A LA PALABRA \n\t\t\t\t\t________________________________________________________\n");

            if (contador > 249)
            {

                // printf("\n %d! ", contador );

                printf("\n TU PUNTAJE ES DE  %d\n\n", puntaje);
                printf("\n\t\t------------------------------------------------------------------\n\n\t\t\t FELICITACIONES! ACERTASTE EN EL %d INTENTO\n\t\t------------------------------------------------------------------\n\n ", rondas + 1);
                break;
            }
            else
            {
                contador = 0;
                if (rondas >= 1)
                {
                    for (int i = 0; i < 5; i++)
                    { // Cuando el puntaje sea 100 y sea igual al valor de arriba en el array bidimensional no se suma nada
                        if (lista_puntaje[rondas][i] != 100 || lista_puntaje[rondas][i] != lista_puntaje[(rondas - 1)][i])
                        {
                            puntaje = puntaje + lista_puntaje[rondas][i];
                        }
                        else
                        {
                            puntaje = puntaje + 0; // Sumo todos los totales del primer bloque
                        }
                    }
                    puntaje = puntaje - VUELTA;
                }
                else
                {

                    for (int i = 0; i < 5; i++)
                    {
                        puntaje = puntaje + lista_puntaje[rondas][i]; // Sumo todo lo que hay
                    }
                }

                printf("\n TU PUNTAJE ES DE  %d!\n\n ", (puntaje - VUELTA));
            }


            rondas++;

        } while (rondas < 5);

        // Para saber que salio nomas
        printf("la palabra que salio al azar fue: \n");
        for (int i = 0; i < 6; i++)
        {
            printf("%c", palabras_guardadas[word][i]);
        }
        printf("\n");
    

    
    return printf("PUNTAJE FINAL %d\n\n", puntaje);
}
