#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void presentacion();
int cantidad_de_partidas(int *);

int main()
{
    // VARIABLES
    int partidas = 0;
    int *p;
    p = &partidas;
    int numero_palabra = 0;
    char palabras_guardadas[30][6];
    char *palabra;
    palabra = &palabras_guardadas[numero_palabra][0];

    // FUNCIONES
    presentacion();
    cantidad_de_partidas(p);
    

    return 0;
}

void presentacion()
{
    system("cls");
    printf("\t\t\tBIENVENIDO!!\n >Este es el juego de wordle.\n");
    printf("Si el bloque tiene una almohadilla (#), indica que esa letra forma parte de la palabra y se encuentra en el bloque correcto.\nSi el bloque tiene un arterisco (*), indica que la letra forma parte de la palabra, pero no se encuentra en el bloque correcto.\nPor ulimo, si el bloque tiene un guion (-), la letra no forma parte de la palabra misteriosa\n\n ");
    system("pause");
    system("cls");
}

int cantidad_de_partidas(int *partidas)
{
    do
    {
        printf("¿Cuantas partidas le gustia realizar?\nRecuerde que cada partida cuanta con 5 intentos y que se puede jugar un maximo de 8 partidas\n>");
        scanf("%d", partidas);
    } while (*partidas > 9 || *partidas < 0);

    printf("Eligio jugar %d partidas", *partidas);

    return 0;
}
