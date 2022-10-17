#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int azar();
int imprimir(char *);

int main()
{
    int intentos;
    printf("Cuantos intentos quiere realizar?\n>");
    scanf("%d", &intentos);
    int numero;
    numero = azar();
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
    char *p;
    p = &palabras_guardadas[numero][0];

    printf("%d", numero);
    printf("\t");
    imprimir(p);

    return 0;
}

int azar()
{
    int word;
    srand(time(NULL));
    word = rand() % 30 + 1;
    return word;
}

int imprimir(char *algo)
{

    for (int i = 0; i < 6; i++)
    {
        printf("%c", algo[i]);
    }
    return 0;
}
