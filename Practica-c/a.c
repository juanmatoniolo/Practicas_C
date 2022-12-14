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

// A1-5) Dado un array de 10 floats, mostrar por pantalla cuales elementos superan al promedio.
/*
int main()
{
    int N = 9;
    float list[N];
    float suma = 0;
    printf("Ingrese 10 float:\n");
    // Cargamos los numeros
    for (int i = 0; i < N; i++)
    {
        printf(">");
        scanf("%f", &list[i]);
    }
    // Sumamos y promediamos
    for (int i = 0; i < N; i++)
    {
        suma = suma + list[i];
    }
    // Imprimimos los que superan el promedio
    printf("Los numeros que supereran el promedio de %.2f son:\n", (suma / N));

    for (int i = 0; i < N; i++)
    {
        if (list[i] > (suma / N))
        {
            printf("%.2f- ", list[i]);
        }
    }
    return 0;
}
*/

// A1-7) Declare dos arrays de 10 enteros con valores entre [0, 50] llamados M y N, luego determine si son:   - iguales: cuando cada componente ubicada en misma posición coincide.   - similares frente a suma: cuando no tienen las mismas componentes pero la suma de los elementos coincide   - diferentes: cuando no coinciden ni en las componentes ni en la suma
/*
int main()
{
    int N[10];
    int M[10];
    int sumaN = 0, sumaM = 0;

    printf("Ingrese 10 enteros entre [0 y 50]\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ->", i + 1);
        scanf("%d", &N[i]);
        if (N[i] < 0 || N[i] > 50)
        {
            i--;
        }
    }

    printf("\n\nIngrese 10 enteros entre [0 y 50]\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ->", i + 1);
        scanf("%d", &M[i]);
        if (M[i] < 0 || M[i] > 50)
        {
            i--;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        sumaM = sumaM + M[i];
        sumaN = sumaN + N[i];

        if (N[i] == M[i])
        {
            printf("el numero %d coincide en ambos conjuntos\n", N[i]);
        }
    }

    if (sumaM == sumaN)
    {
        printf("\nLa suma de ambos conjuntos coinciden en su totalidad, %d\n", sumaM);
    }
    else
    {
        printf("LA suma de ambos conjuntos NO COCIDEN.\n\nLa suma del primer conjunto es:%d \nLa suma del segundo conjunto es: %d\n", sumaN, sumaM);
    }
    return 0;
}
*/
/*Arrays Nivel 2 A2-1) Permita la caga de una array de 30 enteros aleatorios.
Luego mostrarlos por pantalla.*/
/*
int main()
{
    int list[30];
    srand(time(NULL));

    for (int i = 0; i < 30; i++)
    {
       list[i] = rand() % 100;
       printf("%d- ",list[i]);
    }

    return 0;
}
*/
// A2-2) Permita la carga aleatoria de dos arrays de 10 enteros cada uno, llamados A y B, e indique cual de los dos tiene más números pares tratando de utilizando como máximo dos bucles for en todo el programa.
/*
int main()
{

    int A[10], B[10];
    int contA = 0;
    int contB = 0;
    srand(time(NULL));

    for (int i = 0; i < 11; i++)
    {
        A[i] = rand() % 50;
        B[i] = rand() % 50;
        if (A[i] % 2 == 0)
        {
            contA++;
        }
        else if (B[i] % 2 == 0)
        {
            contB++;
        }
    }

    //Con el for de arriba se soluciona el ejercicio los que vienen a continuacion es para poder visualizar que este bien los resultados que arroja

    if (contA > contB)
    {
        printf("El conjunto A tiene %d numeros pares:\n", contA);
        for (int i = 0; i < 11; i++)
        {
            printf("%d ", A[i]);
        }
        printf("\nMientras que el conjunto B %d numeros pares:\n", contB);
        for (int i = 0; i < 11; i++)
        {
            printf("%d ", B[i]);
        }
    }
    else if (contB > contA)
    {
        printf("El conjunto B tiene %d numeros pares:\n", contB);
        for (int i = 0; i < 11; i++)
        {
            printf("%d ", B[i]);
        }
        printf("\nMientras que el conjunto A %d numero pares:\n", contA);
        for (int i = 0; i < 11; i++)
        {
            printf("%d ", A[i]);
        }
    }
    else
    {
        printf("Tienen la misma cantidad de numeros pares!! ");
    }
    return 0;
}
*/
// A2-3) Dado un array A de 10 ints cagado aleatoriamente y con valores comprendidos entre 0 y 100, determinar si se tienen más elementos pares que impares o bien misma cantidad. Rehaga el ejercicio utilizando un único bucle for si empleo más de uno.
/*
int main()
{
    int A[10];
    srand(time(NULL));
    int contP = 0;
    int contI = 0;
    for (int i = 0; i < 10; i++)
    {
        A[i] = rand() % 101;
        printf("%d ",A[i]);
        if (A[i] % 2 == 0)
        {
            contP++;
        }
        else
        {
            contI++;
        }
    }

    if (contP > contI)
    {
        printf("\nLos numeros PARES son mas que los impares\nHay %d numeros pares\n\n", contP);
    }
    else
    {
        printf("\nLos numeros IMPARES son mas que los impares.\nHay %d numeros impares\n\n", contI);

    }
    return 0;
}
*/

// A2-4) Dado un array A de 10 enteros cargados automáticamente (con números aleatorios), invertir el array, es decir si se tiene el array A= [ 45, 11, -5, 80, 6, 99, 105, -200, 22, 1 ], A deberá quedar del siguiente modo al finalizar el programa A= [ 1, 22, -200, 105, 99, 6, 80, -5, 11, 45 ]. Considere el uso de una variable a modo de pivote.
#define AS printf("\n");
/*
int main()
{
    int count = 10;
    int A[10];
    int piv= 9;
    srand(time(NULL));

    for (int i = 0; i < count; i++)
    {
        A[i] = rand() % 25;
        printf("%d, ",A[i]);

    }
    AS;
    for (int i = 0 ; i < count; i++)
    {
        printf("%d- ",A[piv]);
        piv --;
    }

    return 0;
}
*/

/*A2-5) Dado un array A de N enteros cargados manualmente o bien de forma automática y un número entero r en el rango [-(N-1), N-1].
El valor r impondrá rotaciones a derecha (en caso de r positivo) o rotaciones a izquierda (en caso de r negativo) sobre los elementos del array A. Una rotación es el cambio de posición en los elementos del array.

Ejemplo, un array A con N valiendo 10, r estará comprendido en [-9, 9]. Es decir, dado el array A= [ 45, 11, -5, 80, 6, 99, 105, -200, 22, 1],
 Si r=  1  ⇒  A= [ 1, 45, 11, -5, 80, 6, 99, 105, -200, 22 ]
 Todos los elementos rotaron 1 posición a la derecha
 Si r=-3  ⇒   A= [ -5, 80, 6, 99, 105, -200, 22, 1, 45, 11 ]   Todos los elementos rotaron 3 posiciones a la izquierda*/

int main()
{
    int count = 10;
    int A[count - 1];
    srand(time(NULL));
    int r, copiar_r[count - 1];

    for (int i = 0; i < count; i++)
    {
        A[i] = rand() % 30;
        printf("%d)  %d\n", i + 1, A[i]);
    }

    do
    {
        printf("Cuantas posiciones mover:\n>?");
        scanf("%d", &r);
    } while (r < -10 || r > 10);


    return 0;
}
