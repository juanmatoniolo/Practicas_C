// F2-2) Crear un programa que implemente las siguientes funciones para manipular un array de 10 enteros.           Las siguientes declaraciones de funciones deben utilizarse y definirse adecuadamente.     void cargar(int []);          //carga un array con valores suministrados por el usuario     void mostrar(int []);         //muestra un array     int pertenece(int [], int);   //determina si un entero está en el array

#include <stdio.h>
#include <stdlib.h>
#define N 10

void cargar(int[]);
void mostar(int[]);
int pertenece(int[], int);

int main()
{
    int lista[N];
    int buscar, op;

    cargar(lista);
    mostar(lista);
    pertenece(lista, buscar);
    

    return 0;
}

void cargar(int list[])
{
    int i;

    printf("Ingrese 10 numeros enteros:\n");
    for (i = 0; i < N; i++)
    {
        printf("Ingrese el %d numeros enteros:\n", i + 1);
        printf(">");
        scanf("%d", &list[i]);
    }
}

void mostar(int list[])
{
    int i;

    for (i = 0; i < N; i++)
    {
        printf(" %d  de la lista es: %d \n", i + 1, list[i]);
    }
}

int pertenece(int list[], int aux)
{
    int i;
    int cont = 0;

    printf("Ingrese un numero y le dire si esta en la lista: \n");
    printf(">");
    scanf("%d", &aux);

    for (i = 0; i < N; i++)
    {
        if (aux == list[i])
        {
            cont++;
        }
    }

    if (cont > 0)
    {
        printf("El numero %d se encuentra en la lista!", aux);
    }
    else
    {
        printf("El numero %d NO pertenece a la lista", aux);
    }
}


