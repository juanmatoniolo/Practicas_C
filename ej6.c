// F2-1) Realizar un programa que permita obtener los enteros primos comprendidos entre 1 y 500.          Implementar una función para determinar si un número es o no primo.

#include <stdio.h>
#include <stdlib.h>

int primos(int);

int main()
{
    int i, numero;

    printf("Ingrese un numero y le dire los  primo: \n");
    printf(">");
    scanf("%d", &numero);
    
    primos(numero); 

    return 0;
}

/* divido cada nuemero desde el 1 hasta el ingresado, dvido por 1 y luego sumo uno, asi hata el numero ingresado. Cuando el modulo es 0 sumo 1 al contador. Si el contador es 2 significa que ese numero solo es divisible por 1 y por si mismo (definicion de numero primo)*/

int primos(int numero)
{
    int i, j;

    for (i = 1; i <= numero; i++) //tomo desde el 1 hasta el numero ingresado
    {
        int contador1 = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                contador1++;
            }
        }
        if (contador1 == 2){
            printf("%d\t es un numero primo \n", i);
        }
    }
}
