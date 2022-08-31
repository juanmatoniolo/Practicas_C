#include <stdio.h>
#include <stdlib.h>

// Reciba 3 floats indicando la longitud de los lados de un triángulo e indique si es posible formar un triángulo con dichos lados.
// La suma de dos lados del triángulo siempre es mayor que la medida del tercer lado. Si esto resulta ser verdad para todas las tres combinaciones de las sumas, entonces tienes un triángulo.

int estriangulo(float, float, float);

int main()
{
    float a, b, c;

    printf("Ingrese las medidas y le dire si se puede formar un triangulo: \n");

    printf("Primer medida:\n"); 
    printf("> ");
    scanf("%f", &a);

    printf("Segunda medida:\n");
    printf("> ");
    scanf("%f", &b);

    printf("Tercer medida:\n");
    printf("> ");
    scanf("%f", &c);

    if (estriangulo(a, b, c) == 3)
    {
        printf("Se puede formar un triangulo!!");
    }
    else
        printf("No se puede formar un triangulo :( ");

    return 0;
}

int estriangulo(float a, float b, float c)
{
    int contador = 0;

    if (a + b >= c)
    {
        contador++;
    }

    if (a + c >= b)
    {
        contador++;
    }

    if (b + c >= a)
    {
        contador++;
    }

    return contador;
}
