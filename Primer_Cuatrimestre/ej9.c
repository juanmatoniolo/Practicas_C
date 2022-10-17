// F2-7)  Crear funciones para pasar un número de binario a decimal y de decimal a binario.

// Convertir un número decimal a binario es muy sencillo: basta con realizar divisiones sucesivas entre 2 y escribir los residuos obtenidos en cada división en orden inverso al que han sido obtenidos.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int convbinario(int);
int convdecimal(int);

int main()
{
    int numero, op;

    printf("que operacion quiere realizar?\n1-Pasar de binario a decimal\n\n2-Pasar de decimal a binario\n\n");
    printf(">");
    scanf("%d", &op);

    if (op == 1)
    {
        printf("\n\nIngrese el numero a convertir:\n");
        printf("> ");
        scanf("%d", &numero);
        convbinario(numero);
    }
    else if (op == 2)
    {
        printf("\n\nIngrese el numero a convertir:\n");
        printf("> ");
        scanf("%d", &numero);
        convdecimal(numero);
    }
    else
    {
        printf("Ingrese una opcion valida");
    }

    return 0;
}

int convbinario(int numero)
{int aux, copia, decimal = 0, T = 0;
    copia = numero;
    do
    {
        aux = numero % 10;
        numero = numero / 10;
        decimal = decimal + aux * pow(2,T);
        T++;
    } while (numero != 0);
    printf("%d en decimal es %d\n", copia, decimal);
}


int convdecimal(int numero)
{
     int copia, aux, binario = 0, N = 1;
    copia = numero;
    do
    {
        aux = numero % 2;
        numero = numero / 2;
        binario = binario + aux * N;
        N = N * 10;
    } while (numero != 0);
    printf("%d en binario es %d\n", copia, binario);
}


