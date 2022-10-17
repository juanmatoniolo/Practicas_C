// PRACTICAS DE FUNCIONES
// Funciones Nivel 1 F1-1) Crear un programa que permita pasar una cantidad de días y horas (especificados con enteros positivos, validar esto) a minutos.
#include <stdio.h>
#include <stdlib.h>

int diasaminutos(int dias);
int horasaminutos(int minutos);

int main()
{
    int op1 = 0;
    int op3 = 0;

    printf("Que operacion quiere realizar?\n1- Pasar de dias a minutos\n2- Pasar de horas a minutos\n3- Ambos\n");
    printf("> ");
    scanf("%d", &op1);
    system("cls");
    

    if (op1 == 1)
    {
        printf("Ingrese la cantidad de dias que quiere pasar a minutos:\n");
        printf("> ");
        scanf("%d", &op1);
        printf("Hay %d minutos en %d dias\n", diasaminutos(op1), op1);
    }
    else if (op1 == 2)
    {
        printf("Ingrese la cantidad de dias que quiere pasar a minutos:\n");
        printf("> ");
        scanf("%d", &op1);
        printf("Hay %d  minutos en %d horas\n", horasaminutos(op1), op1);
    }
    else
    {
        printf("Ingrese la cantidad de dias que quiere pasar a minutos:\n");
        printf("> ");
        scanf("%d", &op1);

        printf("Ingrese la cantidad de horas que quiere pasar a minutos:\n");
        printf("> ");
        scanf("%d", &op3);

        printf("Hay %d minutos en %d dias\nHay %d minutos en %d horas.\n", diasaminutos(op1), op1, horasaminutos(op3), op3);
    }
    system("pause");
    return 0;
}

int diasaminutos(int dias)
{

    int resultado = 0;
    resultado = dias * 1440;
    return resultado;
}

int horasaminutos(int horas)
{
    int resultado = 0;
    resultado = horas * 60;
    return resultado;
}