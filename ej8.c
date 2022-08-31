// F2-3) Dado un array de N enteros, crear una función para invertirlo y posteriormente mostrarlo por pantalla.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
int listaaleatoria(int[]);
int vuelta(int[]);

int main()
{
    int lista[N];

    printf("Primero generaremos una lista al azar:\n");
    listaaleatoria(lista);

    printf("\n \nAhora daremos vuelta la lista:\n");
    vuelta(lista);

    return 0;
}

int vuelta(int list[])
{
    int i, j, aux;
    for (i = 0, j = N - 1; i < j; i++, j--)
    {
        aux = list[i]; //Esta parte costo sacar
        list[i] = list[j];//lo que hacemos es cambiar los numeros de i de j con aux 
        list[j] = aux; // i lo cambiamos por N-1, (i[0] ahora pasa a ser i[N-1 || 9] ) 
    }
    for ( i = 0; i < N; i++)
    {
        printf("%d- %d\n", i+1, list[i]); //este for es para mostrar los numeros porque si lo hacemos arriba solo llegamos a mostrar 5 numeros al reves
    }
    
}

int listaaleatoria(int lista[])
{
    int i;
    srand(time(NULL));
    for (i = 0; i < N; i++)
    {
        lista[i] = rand() % 100 + 1;
        printf("%d- %d \n", i + 1, lista[i]);
    }
}