#include "stdio.h"
#include "stdlib.h"

// PRACTICAS DE MACROS
//  Nivel 1:
//  1) El mínimo entre dos enteros. #define MIN(X,Y) .....siguen uds.....

#define MIN(A, B) ((A) > (B) ? (B) : (A))

/*
int main()
{
    int a, b;

    printf("Ingrese un numero:\n- ");
    scanf("%d", &a);

    printf("\nIngrese otro numero:\n- ");
    scanf("%d", &b);

    printf("El numero mas pequenio es:\n- %d", MIN(a,b));

    return 0;
}
*/

// 2) El máximo entre dos enteros #define MAX(X,Y) .....siguen uds.....

#define MAX(A, B) ((A) > (B) ? (A) : (B))
/*
int main()
{
    int a = 0;
    int b = 0;

    printf("Ingrese un numero:\n- ");
    scanf("%d", &a);

    printf("\nIngrese otro numero:\n- ");
    scanf("%d", &b);

    printf("El numero mas grande es:\n- %d", MAX(a, b));

    return 0;
}
*/

// 3) Si un número es par (aquí es útil el operador %, que da el resto de la división entera) #define PAR(X) .....siguen uds.....

#define PAR(A) A % 2
/*
int main ()
{
    int num;

    printf("Ingrese un numero y le dire si es par: \n- ");
    scanf("%d",&num);

    if (PAR(num) == 0)
    {
        printf("EL NUMERO ES PAR");
    } else printf("El numero es impar :( ");



    return 0;
}*/

// 4) Si un número X es divisible (de manera entera) por otro Y  (considerar Y nunca es 0 ) #define DIVISIBLE(X,Y) .....siguen uds...

#define DIV(A, B) ((A) % (B) == 0 ? (printf("ES DIVISIBLE")) : (printf("NO ES DIVISIBLE")))
/*
int main()
{
    int a,b;


    printf("Le pedire dos numeros y le dire si el primero es divisible por el segundo.\n");
    system("cls");


    printf("Ingrese un numero:\n- ");
    scanf("%d",&a);

    printf("Ingrese el segundo numero: \n- ");
    scanf("%d",&b);

   DIV(a,b);



    return 0;
}

*/

// Nivel 2: 5) Determinar si un número está entre el 0 y el 100   (se puede usar cond1 && cond2) #define ENTRE_0_100(X) .....siguen uds.....

/*
#define ENTRE_0_100(A) ((A >= 0 && A <=100) ? (printf("el numero esta en el rango")) : (printf("el numero no esta en el rango"))  )
int main()
{

    int num;
    printf("Ingrese un numero y le dire si esta en el rango entre 0 y 100\n- ");
    scanf("%d",&num );

    ENTRE_0_100(num);

    return 0;
}
*/

// 6) Determinar si dos números son consecutivos, (5 y 4 o 33 y 34 lo son, pero 40 y 42 o bien 8 y 91 no lo son) #define CONSECUTIVOS(X,Y) .....siguen uds.....

#define CONSECUTIVOS(X, Y) (((X) + 1 == (Y) || (X)-1 == (Y)) ? (printf("son consecutivo")) : (printf("no son consecutivo ")))
/*
int main()
{
    int a, b;
    system("cls");
    printf("INGRESE DOS NUMEROS Y LE DIRE SI SON CONECUTIVOS:\n\nIngrese el primer numero:\n- ");
    scanf("%d", &a);

    printf("\nIngrese el segundo numero:\n- ");
    scanf("%d",&b );

    CONSECUTIVOS(a,b);

    return 0;
}
*/

// 7) Determinar el máximo entre tres enteros #define MAX(X,Y,Z) .....siguen uds.....

#define MAXI(A, B, C) (((A) > (B) && (A) > (C)) ? (A) : ((B) > (C) ? (B) : (C)))

int main()
{
    int a, b, c;

    system("cls");
    printf("LE PEDIRE TRES NUMEROS Y LE DIRE CUAL ES EL MAYOR\n");
    printf("Ingre el primer numero:\n- ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero:\n- ");
    scanf("%d", &b);
    printf("Ingrese el tercer numero:\n- ");
    scanf("%d", &c);
    system("cls");
    printf("Los numeros ingresados son: %d - %d - %d\n El mayor es: %d", a,b,c, MAXI(a,b,c) );


    return 0;
}
