#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "math.h"

/*
Declare un array de 10 enteros y permita que el usuario ingrese valores comprendidos entre el -10 y el 10
(asegurar esto) y luego lo muestre por pantalla.
*/

/*
int main()
{
    int A[10];
    int i;
    printf("ingrese valores enteros entre -10 y 10\n");

    for (i = 0; i < 10; i++)
    {
        printf("> ");
        scanf("%d", &A[i]);
        if (A[i] < -10 || A[i] > 10)
        {
            printf("REITERAMOS: ingrese valores enteros entre -10 y 10\n");
            i--;
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
*/

// A1-2) Declare dos arrays de 5 enteros cada uno, llamados A y B, luego en un tercer array de igual dimensión llamado S almacene la suma de los dos anteriores
/*
int main()
{
    int a[4], b[4], c[4];

    printf("Ingrese los primeros 5 valores:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("1er conjunto >");
        scanf("%d", &a[i]);
    }
    printf("\n\n");
    for (int i = 0; i < 5; i++)
    {

        printf("2do conjunto >");
        scanf("%d", &b[i]);

        c[i] = a[i] + b[i];
    }
    printf("\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("La suma es = %d \n", c[i]);
    }

    return 0;
}
*/

// A1-3) Declare un array de 10 enteros, permita la carga manual y luego determine lo siguiente:
//- cuantos elementos son positivos y pares
//- cuantos elementos son positivos e impares
//- cuantos elementos son negativos y pares
//  -cuantos elementos son negativos e impares
/*
int main()
{
    int i;
    int A[10];
    int positivo_par = 0, positivo_impar = 0, negativo_par = 0, negativo_impar = 0;
    
    printf("ingrese los 10 valores enteros de A:\n");
    for (i = 0; i < 10; i++)
    {
        printf("> ");
        scanf("%d", &A[i]);
    }
    
    for (i = 0; i < 10; i++)
    {
        if (A[i] % 2 == 0 && A[i] > 0)
        {
            positivo_par++;
        }
        else if (A[i] % 2 == 0 && A[i] < 0)
        {
            negativo_par++;
        }
        else if (A[i] % 2 != 0 && A[i] > 0)
        {
            positivo_impar++;
        }
        else if (A[i] % 2 != 0 && A[i] < 0)
        {
            negativo_impar++;
        }
    }
    printf("\n");
    printf("Positivos pares: %d\n", positivo_par);
    printf("Positivos impares: %d\n", positivo_impar);
    printf("Negativos pares: %d\n", negativo_par);
    printf("Negativos impares: %d\n", negativo_impar);
    
    return 0;
}
*/ 





