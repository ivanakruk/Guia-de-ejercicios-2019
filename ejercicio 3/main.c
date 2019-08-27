#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;

    float producto;
    float cuadrado;



    printf("Ingrese el valor del numero 1: ");
    fflush(stdin);
    scanf("%f",&a);

    while(a==0)
        {
            printf("Ingrese un valor distinto a 0: ");
            fflush(stdin);
            scanf("%f",&a);
        }
    printf("Ingrese el valor del numero 2: ");
    fflush(stdin);
    scanf("%f",&b);

    while(b==0)
        {
            printf("Ingrese un valor distinto a 0: ");
            fflush(stdin);
            scanf("%f",&b);
        }

    producto=a*b;
    cuadrado=a*a;

    printf("El producto de sus numeros es : %.2f\n",producto);
    printf("El cuadrado de su primer numero es: %.2f\n",cuadrado);


    return 0;
}
