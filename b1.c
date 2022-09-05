#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Un poco de artimetica de punteros

int main()
{
    int arreglo[6] = {1, 2, 3, 4, 5, 6};
    int *a = arreglo;
    printf("%d\n", *a);
    a++; // como apuntamos a una direccion de memoria sumariamos 4 byt (lo que vale un int) ergo nos desplazamos 1 a la derecha en la lsita arreglo
    printf("%d\n", *a);

    printf("%d\n", *a); 


    return 0;
}