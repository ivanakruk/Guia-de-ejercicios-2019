#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()
{
    int valorA;  int valorB;  int resultadoS;  int resultadoR;   int resultadoM;   int opciones=0;
    char seguir; int flagA=0; int flagB=0;     int flagCuentas=0;


    float resultDivision;  int resulfactnum1;  int resultadofact2;


    do
    {

        mostrarMenu();


        scanf("%d",&opciones);

        switch(opciones)
        {

            case 1:

                flagA=1;
                valorA=pedirNumeroUno();
                printf("EL PRIMER NUMERO ES: %d\n",valorA);
                break;

            case 2:

                flagB=1;
                valorB=pedirNumeroDos();
                printf("EL SEGUNDO NUMERO ES: %d\n",valorB);
                break;

            case 3:
                if(flagA==1 && flagB==1)
                {
                    resultadoS=sumar(valorA,valorB);
                    resultadoR=restar(valorA,valorB);
                    resultadoM=multiplicar(valorA,valorB);
                    resultDivision=Dividir(valorA,valorB);
                    resulfactnum1=factorial(valorA);
                    resultadofact2=factorial(valorB);
                }
                else
                {
                    printf("Error, Ingrese los numeros antes de hacer los calculos \n");

                }
            printf("Calculos realizados..\n");
            flagCuentas=1;

            break;

            case 4:

                if (flagCuentas==1)
                    {
                        printf("_________________________\n");
                        printf("EL PRIMER NUMERO ES: %d\n",valorA);
                        printf("EL SEGUNDO NUMERO ES: %d\n",valorB);
                        printf("_________________________\n");
                        printf("El resultado de la suma es: %d\n",resultadoS);
                        printf("El resultado de la resta es: %d\n",resultadoR);
                        printf("El resultado de la multiplicacion es: %d\n",resultadoM);

                        if(valorB==0)
                            {
                                printf("No se puede divir por cero\n");
                            }
                            else
                                {
                                    printf("El resultado de la division es: %.2f\n",resultDivision);
                                }


                        if (valorA>0)
                            {
                                printf("El resultado del factorial del 1er num es: %d\n",resulfactnum1);
                            }
                        else
                            {

                                printf("No existe factorial negativo\n");


                            }


                        if (valorB>0)
                            {
                                printf("El resultado del factorial del 2do num es: %d\n",resultadofact2);
                            }
                        else
                            {


                             printf("No existe factorial negativo\n");


                            }

                    }
            break;


            case 5:

                seguir='5';
                printf("El programa termino, hasta la proxima!!\n");
                break;

            default:
                printf("No ha elegido una opcion valida");
                break;

            }
        system("pause");//El programa va esperar a que el usuario presione una tecla para continuar
        system("cls");//Limpia la pantalla al elegir opciones y que no sue vaya acumulando todo el texto mientras se va ejecutando el programa


    }while(seguir!='5');


    return 0;
}
