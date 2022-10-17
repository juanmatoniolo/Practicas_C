#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int intercambio(int, int);
int intercambiop(int *, int *);

int main()
{
    int a, b;
    a = 4;
    b = 7;
    printf("A=%d y B=%d \n", a, b); //Esto devuelve A= 4 y B=7
    intercambio(a, b); //Aca los cambia pero solo en la funcion
    printf("A=%d y B=%d \n", a, b); // Aca volvio a valer A=4 y B=7

    printf("Ahora con punteros: \n");
    intercambiop(&a, &b); //Se guardo el cambio en la cariable a y b y se alternaron los resultados
    printf("A=%d y B=%d \n", a, b); // imprime A=7 y B=4
    return 0;
}

int intercambio(int a, int b)
{
    int z;
    z = a;
    a = b;
    b = z;
}

int intercambiop(int *a, int *b)
{
    int z;
    z = *a;
    *a = *b;
    *b = z;
}