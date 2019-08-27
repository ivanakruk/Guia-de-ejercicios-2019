#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b , c ;
    float promedio;

    printf("Ingrese numero 1: ");
    fflush(stdin);
    scanf("%f",&a);

    printf("Ingrese numero 2: ");
    fflush(stdin);
    scanf("%f",&b);

    c=a+b;
    promedio=c/2;


    printf(" El resultado de la suma es: %.2f\n ",c);
    printf("El promedio de sus numeros es: %.2f\n",promedio);



    return 0;
}
