#include "stdio.h"
#include "stdlib.h"
#include "time.h"

// Nivel 1
// N1-1) Muestre los números de 1 a 100 de forma descendente
//
/*
int main()
{
    system("cls");

    for (int i = 1; i < 101; i++)
    {
        printf("%d- ", i);
    }

    return 0;
}
*/

// N1-2) Muestre los números impares que hay entre 1 y 100.

/*
int main()
{
    system("cls");

   for (int i = 0; i < 101; i++)
   {
    if (i % 2 != 0)
    {
        printf("%d- ",i);
    }
   }
    return 0;
}
*/

// N1-3) Muestre la suma de todos los números impares que van del 1 al 100.
/*

int main()
{
    system("cls");
    int suma = 0;

    for (int i = 0; i < 101; i++)
    {
        if (i % 2 != 0)
        {
            suma = suma + i;
        }
    }
    printf("La suma de los impares es: %d", suma);
}
*/

// N1-4) Pida dos números y sume todos los números comprendidos entre el primero y el segundo (inclusive).            Debe controlarse que el segundo número sea mayor que el primero.
/*
int main()
{
    int a, b;
    int cont = 0;

    system("cls");
    do
    {
        printf("Ingresar dos numeros. \n\nPrimer numero:\n- ");
        scanf("%d", &a);
        printf("\nSegundo numero:\n- ");
        scanf("%d", &b);
    } while (a > b);

    for (int i = a; i <= b; i++)
    {
        printf("%d- ", i);
        cont = cont + i;
    }
    printf("La suma de los numeros es: %d", cont);
    return 0;
}
*/

// N1-5) Pida dos números y multiplique todos los números comprendidos entre el primero y el segundo (inclusive).            Debe controlarse que el segundo número sea mayor que el primero.
/*
int main()
{
    int a, b;
    int cont = 1;

    system("cls");
    do
    {
        printf("Ingresar dos numeros. \n\nPrimer numero:\n- ");
        scanf("%d", &a);
        printf("\nSegundo numero:\n- ");
        scanf("%d", &b);
    } while (a > b);

    for (int i = a; i <= b; i++)
    {
        printf("%d- ", i);
        cont = cont * i;
    }
    printf("La multiplicacions entro de los numeros es: %d", cont);
    return 0;
}
*/

// N1-6) Calcule el promedio de 10 números ingresados por el usuario
/*
int main()
{
    int n = 4;
    int lista[n];
    int cont = 0;
    system("cls");

    for (int i = 0; i < n+1; i++)
    {
        printf("\nIngrese el %d  numero: \n- ", i + 1);
        scanf("%d", &lista[i]);
        cont = cont + lista[i];
    }

    printf("Los numeros ingresados son:\n");

    for (int i = 0; i < n+1; i++)
    {
        printf("%d- ", lista[i]);
    }

    printf("\n EL PROMEDIO ES: %d", (cont / (n + 1)));

    return 0;
}
/*


// Nivel 2 N2-1) Muestre los divisores de un número.
/*
int main ()
{
    int num;
    system("cls");
    printf("Ingrese un numero y le dire los divisores del mismo: \n");
    scanf("%d", &num);
    printf("\n\nLos divisores son: ");

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
        printf("%d- ", i);
        }
    }
    return 0;
}
*/

// N2-2) Pida un número por teclado y decir si es un número primo o no. Controlar que el usuario ingrese un número mayor a 0.

/*

int main()
{
    int num ;
    int cont = 0;

    do
    {
        printf("Ingrese un numero mayor a 0 y le dire si es un numero primo: \n");
        scanf("%d", &num);

    } while (num < 0);

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            cont++;
        }
    }

    if (cont == 1)
    {
        printf("Felicidades! Es un numero primo");
    }
    else
    {
        printf("No es un numero primo :(");
    }

    return 0;
}
*/

// N2-3) Calcule la suma de los cuadrados de los 100 primeros números enteros.
/*

#define CUADRADO(A) (A*A)
int main()
{
    unsigned long long contador = 0;
    int n = 100;

    for (int i = 1; i <= n; i++)
    {
        contador = contador + CUADRADO(i);
    }

    printf("%lu", contador);

    return 0;
}
*/

// N2-4) Calcule el promedio de N números, se dejarán de solicitar números hasta que se introduzca el cero.
/*
int main()
{
    int num;
    int suma = 0;
    int cont = 0;
    while (num > 0)
    {
        printf("Ingrese un numero \n") ;
        scanf("%d", &num);
        suma = suma + num;
        cont ++;
    }

    printf("el prcomedio de los numeros es de %d", (suma/(cont - 1)));
    return 0;
}
*/

// N2-5) Reciba tres enteros positivos n, p y m, asegurándose que n<m
//  - genere la salida n, n+p, n+2.p, n+3.p, …. k  (k<=m y es de la forma n+NRO.p)
// Ejemplo n=2, p=3, m=10, debe generarse: 2, 5, 8
//  Ejemplo n=1, p=4, m=21, debe generarse 1,5,9,13,17,21

/*
int main()
{
    int n, p, m;


    do
    {
        printf("Le pedire 3 numeros. Asegurese que el primero sea menor al ultimo.\n");
        system("pause");
        system("cls");
        printf("Ingrese el primer numero: \n>");
        scanf("%d", &n);

        printf("Ingrese el segundo numero: \n>");
        scanf("%d", &p);

        printf("Ingrese el tercer numero: \n>");
        scanf("%d", &m);

    } while (n > m);

        int contador = 0;
    do
    {

        contador++;
        printf("%d- ", (n + (p * contador) - p));
    } while ((n + (p * contador)) <= m);

    return 0;
}
*/

// Nivel 3 N3-1) Muestre el abecedario por pantalla.
/*
int main()
{
    char letra = 'a';

    for (int i = 0; i < 26; i++)
    {
        printf("%c- ", letra);
        letra ++;
    }


    return 0;
}
*/
// N3-2) Calcule el factorial de un número entero positvo.
/*
int main()
{
    int num;

    printf("Ingrese un numero para calcular su factorial \n");
    scanf("%d",&num);

    for (int i = num; i > 1; i--)
    {
        num = num * (i- 1);
    }

   printf("El factorial es %d", num);

    return 0;
}
*/

// N3-3) Muestre las tablas de multiplicar del 1 al 10.
/*
int main()
{

    for (int i = 1; i < 11; i++)
    {
        printf("\t Tabla de %d\n", i);
        for (int j = 0; j < 11; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
*/

// N3-4) Muestre los 25 primeros números de la sucesión de Fibonacci
/*
int main()
{
    int in = 0;
    int sig = 1;
    int fibo;
    printf("0- 1- ");
    for (int i = 0; i < 51; i++)
    {
        fibo = in + sig;
        printf("%d- ", fibo);
        in = sig;
        sig = fibo;
    }

    return 0;
}
*/
// N3-5) Permita ingresar una matriz cuadrada 4x4 y luego la muestre por pantalla.
/*
int main()
{
    int num[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Ingrese la %d fila de la matriz de 4x4:\n", i+1);
            printf(">") ;
            scanf("%d",&num[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",num[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

// N3-6) Empleando bucles for anidados intente generar las siguientes salidas por pantalla
/*
int main()
{
    char art = '*';
    char mas = '+';
    char peso = '$';
    char punto = '.';
    char arroba = '@';

    printf("A)\n");
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", art);
        }
        printf("\n");
    }

    printf("\n\nB)\n");

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%c", mas);
        }
        printf("\n");
    }

    printf("\n\nC)\n");

    for (int i = 0; i < 6; i++)
    {
        for (int j = 6; j > i; j--)
        {
            printf("%c", peso);
        }
        printf("\n");
    }

    printf("\n\nD)\n");

    for (int i = 0; i < 5; i++)
    {
        
        for (int j = 0; j < 8; j++)
        {
             
            if ((i + j) % 2 == 0)
            {
                printf("%c",arroba);
            }else
            {
                printf("%c",punto);
            }
            
        }
           
        printf("\n");
    }

    return 0;
}
*/ 