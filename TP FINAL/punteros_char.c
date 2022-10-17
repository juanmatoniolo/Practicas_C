#include <stdio.h>
#include <string.h>

int main()
{

    char palabra[] = {"hola, soy una  prueba"};
    char * cad;         // creoun puntero
    cad = &palabra[0]; /// guardo el nuevo string en palabra empezando desde el 0

    /*  Con estas 3 lineas creo un puntero
    char cadena[] = {"juanma"};
    char *pcad;
    pcad = &cadena[0];
    */

    char palabra2[] = {"hola, soy un string"};
    char *cad2;
    cad2 = &palabra2[0];

    for (int i = 0; i < 16; i++)
    {
        if (cad[i] == cad2[i])
        {
            printf("%c", cad[i]);
        }
    }

    return 0;
}