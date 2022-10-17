// F3-1) Crear funciones que mediante arrays se emulen operaciones de conjuntos. -
//- En primer lugar existirán dos arrays A y B de 10 elementos enteros comprendidos en el rango [0. 100].
//- Debe crearse una función que cargue los arrays de forma aleatoria pero que no ingrese valores repetidos en cada array, es decir debemos controlar en esa función que cuando se propone un número aleatorio para almacenar en la posición i del array no esté dicho número en ninguna de las posiciones 0, 1, …, i-1.
//- Luego de la carga de los arrays mostrarlos por pantalla.
//- Crear una función que muestre por pantalla la intersección de estos “conjuntos”, es decir los elementos de A que estén presentes en B.
// - Crear una función que muestre por pantalla la unión de estos “conjuntos”, es decir los elementos pertenecientes a A y B, sin repetir.
// - Crear una función que muestre por pantalla la diferencia entre estos “conjuntos”, es decir los elementos pertenecientes a A no pertenecientes a B.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define NUM 100

int carga(int[]);
int muestra(int[]);
int pertenece(int[], int, int);
int unyon(int[], int[], int[]);

int main()
{
    int A[N], B[N];
    int U[N * 2], I[N];

    printf("Primero generamos una lista y luego la imprimimos por pantalla:\n\n");
    carga(A);
    carga(B);

    printf("Mostraremos la lista A:\n");
    muestra(A);
    printf("%d",A[0]);

    printf("\n\nMostramos la lista B:\n");
    muestra(B);

    printf("\nLa union entre la lista A y la lista B es:\n");
    unyon(A, B, U);

    return 0;
}

int pertenece(int V[], int valor, int pos)
{
    int i;
    for (i = 0; i < pos; i++)
    {
        if (V[i] == valor)
            return 1;
    }
    return 0;
}

int carga(int list[])
{
    int i;

    for (i = 0; i < N; i++)
    {
        do
        {
            list[i] = rand() % NUM + 1;
        } while (pertenece(list, list[i], i));
    } // Pertenece toma la lista entera, el valor de lista en i y dice si i esta o no
      //  pertenece devuelve 1 si esta 0 si no esta, i!=0
}

int muestra(int lista[])
{
    int i;
    printf("{ ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", lista[i]);
    }
    printf("}\n ");
}

int unyon(int a[], int b[], int u[])
{
    int i, j, k;

    for (i = 0; i < N; i++)
    {
        a[i] = u[i];
    }
    for (j = N; j < N * 2; j++)
    {   
        int cont = 0;
        b[cont] = u[j];
        cont++;
    }

    printf("{ ");
    for ( k = 0; k < N*2; k++)
    {
        printf("%d ", u[k]);
    }
    printf(" } ");
}
