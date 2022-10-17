#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define LARGO 6
#define PAL 30

void presentacion();

int main()
{
    char palabras_guardadas[PAL][LARGO] = {
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

    int i;
    int cantidad_de_intentos = 0;
    int contador = 0;
    int x, j, z;
    int word;
    char palabras_que_salieron[cantidad_de_intentos][LARGO]; // guardaremos todas las palabras que salieron
    int numeros_que_salieron[cantidad_de_intentos];

    presentacion();
    printf("Cantidad de intentos: \n");
    scanf("%d", &cantidad_de_intentos);

    // El primer numero lo cargamos afuera del DO_WHILE
    for (i = 0; i < 1; i++)
    {
        srand(time(NULL));
        word = rand() % PAL + 1;
        numeros_que_salieron[i] = word;
    }
    printf("%d\t", word);

    for (z = 0; z < LARGO; z++)
    {
        printf("%c ", palabras_guardadas[word][z]);
    }

    do
    {
        printf("\nIngrese una palabra de 5 letras por favor\n");
        printf(">");
        // Guardar esa palabra en un variable

        for (i = 0; i < LARGO; i++) // largo es 6/ largo de la palabra
        {
            int ayuda = 0; 

            for (j = 0; j < LARGO; j++)
            {
                
                if (palabras_guardadas[word][i] == palabras_guardadas[contador][j])
                {
                    ayuda++;
                }
            }

            if (ayuda > 2)
            {
                printf("%c", palabras_guardadas[word][i]);
                printf("\n");
                printf("+"); // esta la letra en la palabra
            }
            else if (ayuda == 1)
            {
                printf("%c", palabras_guardadas[word][i]);
                printf("\n");
                printf("#"); // esta en la posicion justa y unica
            }
        }

        contador++; // cantidad de intentos es la que establecemos al empezar la partida
    } while (contador < cantidad_de_intentos);

    return 0;
}

void presentacion()
{

    printf("Bienvenidos al wordles");
}
