#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()
{
    int valorA;
    int valorB;
    int resultado;

    float resultDivision;
    float resulfactnum1;
    float resultadofact2;

    int flagA=0;
    int flagB=0;

    int opciones=0;
    char seguir;

    do
    {

        mostrarMenu();
        scanf("%d",&opciones);

        switch(opciones)
        {

        case 1:

            flagA=1;
            valorA=pedirNumeroUno();
            printf("_________________________\n");
            printf("EL PRIMER NUMERO ES: %d\n",valorA);
            printf("_________________________\n");
            fflush(stdin);

            break;

        case 2:

            flagB=1;
            valorB=pedirNumeroDos();
            printf("_________________________\n");
            printf("EL SEGUNDO NUMERO ES: %d\n",valorB);
            printf("_________________________\n");
            fflush(stdin);



            break;

        case 3:
            if(flagA==1 && flagB==1)
            {
            resultado=sumar(valorA,valorB);
            resultado=restar(valorA,valorB);
            resultado=multiplicar(valorA,valorB);
            resultDivision=Dividir(valorA,valorB);
            resulfactnum1=factorial(valorA);
            resultadofact2=factorial(valorB);


            }
            else
            {
                printf("Error, Ingrese los numeros antes de hacer los calculos \n");

            }



        break;

        case 4:

            printf("_________________________\n");
            printf("EL PRIMER NUMERO ES: %d\n",valorA);
            printf("EL SEGUNDO NUMERO ES: %d\n",valorB);
            printf("_________________________\n");


            printf("El resultado de la suma es: %d\n",sumar(valorA,valorB));
            printf("El resultado de la resta es: %d\n",restar(valorA,valorB));
            printf("El resultado de la multiplicacion es: %d\n",multiplicar(valorA,valorB));
            printf("El resultado de la division es: %2.f\n",resultDivision);
            printf("El resultado del factorial del 1er num es: %2.f\n",resulfactnum1);
            printf("El resultado del factorial del 2do num es: %2.f\n",resultadofact2);

            fflush(stdin);


        case 5:

        seguir='5';
        break;
        }



    }while(seguir!='5');


    return 0;
}

int pedirNumeroUno()
{
    int numero;
    printf("ingrese el primer numero: \n");
    scanf("%d",&numero);
    return numero;
}

int pedirNumeroDos ()
{
    int numero;
    printf("ingrese el segundo numero: \n");
    scanf("%d",&numero);
    return numero;
}
