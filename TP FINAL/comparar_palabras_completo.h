#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int comparar_palabras()
{
    int word;
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
    
    //Palabras que yo tipeo
    char humano[6];
    char *ph;
    ph = &humano[0];

    // Genero la palabra al azar
    srand(time(NULL));
    word = rand() % 30 + 1;
    printf("la palabra que salio al azar fue: \n");
    for (int i = 0; i < 6; i++)
    {
        printf("%c", palabras_guardadas[word][i]);
    }

    // Pido una nueva palabra al usuario
    printf("\nIngrese una palabra:\n>");
    scanf("%s", ph); // guardo la palabra
    system("cls");
    for ( int i = 0; i < 6; i++) //IMPRIMO LA PALABRA QUE INGRESO EL USUARIO
    {
        printf("%c", humano[i]);
    }
  
    printf("\n");

    for (int i = 0; i < 5; i++) //INFORMO SI ESTA BIEN 
    {
        int cont = 0;

        for (int j = 0; j < 5; j++)
        {
            if (palabras_guardadas[word][i] == humano[i])
            {
                cont = cont + 10;
            }
            else if (palabras_guardadas[word][i] == humano[j])
            {
                cont++;
            }
        }
        if (cont > 4)
        {
            printf("#");
        }
        else if (cont > 0)
        {
            printf("*");
        }
        else
        {
            printf("-");
        }
    } //OBSERVANDO LAS PALABRAS ME DI CUENTA QUE NO SE REPETIN LETRAS EN LAS MISMAS ENTONCES SI COINCIDEN EN EL PRIMER IF DEL FOR SUMU 10 AL CONTADOR, SI COINCIDE EN ALGUN OTRO LADO QUE SUMAMOS 1 Y ESO SIG QUE LA LETRA EXISTE DENTRO DE LA PALABRA Y SI EL CONTADOR QUEDA EN 0 SIGNIFICA QUE ESA LETRA NO EXISTE.

    printf("\n\n RECUERDE QUE: \n'#' LETRA ES CORRECTA \n'*' LETRA CORRESPONDE PERO NO ES EL LUGAR  \n'-' LA LETRA NO PERTENE A LA PALABRA\n");

    return 0;
}