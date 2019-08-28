#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int sumar (int num1, int num2);
int restar (int num1, int num2);
int multiplicar (int num1,int num2);
float dividir (float num1, float num2);
int factorial (int num1, int num2);

int main()
{
    int a;
    int b;

    char operaciones;
    int resultado;

    char seguir;

    do
    {
        printf("Ingrese el primer numero: ");
        fflush(stdin);
        scanf("%d", & a);

        printf("Ingrese el segundo numero: ");
        fflush(stdin);
        scanf("%d", & b);

        printf("Seleccione la operacion que quiera realizar: ");
        fflush(stdin);
        printf("\n_________________________________________\n");

        printf("1) Sumar \n");
        fflush(stdin);
        printf("2) Restar \n");
        fflush(stdin);
        printf("3) Multiplicar \n ");
        fflush(stdin);
        printf("4) Dividir \n");
        fflush(stdin);
        printf("5) Factorial \n");

        scanf("%c",&operaciones);



printf("El resultado es: %d",resultado);

        printf("Desea salir?\n");
        fflush(stdin);
        scanf("%s", &seguir);

    }while(seguir=='n');

    switch(operaciones)
        {
        case '1':
            resultado=sumar(a,b);
            break;
        case '2':
            resultado=a-b;
            break;

        case '3':
            resultado=a*b;
            break;
        case '4':
            resultado=(float)a/b;
            break;


        }
    return 0;
}

int sumar(int num1, int num2)
{
    int total;
    total=num1+num2;
    return total;
}
int restar(int num1, int num2)
{
    int total;
    total=num1-num2;
    return total;
}
int multiplicar(int num1, int num2)
{
    int total;
    total=num1*num2;
    return total;
}

