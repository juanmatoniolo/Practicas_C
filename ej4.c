// Dado un entero, mediante una función determine cuantos dígitos tiene. Nota: usar tipo unsigned long long int 

#include <stdio.h>
#include <stdlib.h>

int digitos(unsigned long long x);

int main()
{
    unsigned long long numero;
    printf("Ingrese un numero y le dire cuantos digitos tiene: \n");
    scanf("%llu", &numero);

    printf("El numero que ingreso tiene %d digitos", digitos(numero));

    return 0;
}


int digitos(unsigned long long x){
int contador = 0;
do
{
    x = x / 10;
    contador ++;
} while (x > 0);

return contador;
}

