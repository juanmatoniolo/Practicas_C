#include <stdio.h>
#include <string.h>

int main()
{

    char cadena[30];
    char *p;
    p = &cadena[0];

    char cadena2[30];
    char *p2;
    p2 = &cadena2[0];

    printf("Ingrese una palabra y la comparare:\n");
    scanf("%s", p);

    printf("Ingrese la segunda palabra y la comparare con la primera:\n");
    scanf("%s", p2);

    for (int i = 0; i < 6; i++)
    {
         if (p[i] == p2[i])
        {
            printf("%c", p[i]);
        } else 
        {
            printf("-");
        }
    }
    





    return 0;
}