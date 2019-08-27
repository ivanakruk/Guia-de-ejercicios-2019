#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int numerMax;
    int numeroMin;
    int flag;

    int contador=0;
    int contadoPares=0;
    int contadorCeros=0;
    int contadorPosi=0;

    int acumuladorPosi=0;
    int acumuladorNegat=0;

    char letra;
    char letraMax;
    char letraMin;
    char seguir;

    float promedioPositivos;
    flag=0;

    do
    {
        printf("Ingrese una letra:  \n");
        fflush(stdin);
        scanf("%c",&letra);

        do
        {
           printf("Ingrese un numero entre -100 y 100: \n");
           fflush(stdin);
           scanf("%d",&numero);

        }while(numero<-100 || numero>100);

        if (numero==0)
        {
            contadorCeros++;
        }if(numero>0)
            {
                contadorPosi++;
                acumuladorPosi=acumuladorPosi+numero;
            }
          else
            {
                acumuladorNegat++;
            }

        if(flag==0)
            {
                numerMax=numero;
                numeroMin=numero;
                flag=1;
            }else
            {
                if(numero<numeroMin)
                {
                    numeroMin=numero;
                    letraMin=letra;
                }

                if(numero>numerMax)
                {
                    numerMax=numero;
                    letraMax=letra;
                }

            }


        printf("_____________________________________ \n");
        fflush(stdin);
        printf("Desea continuar? \n");
        fflush(stdin);
        scanf("%s",&seguir);

    }while(seguir=='s');

    printf("EL NUMERO MAXIMO Y  SU LETRA: %d, %c \n\n", numerMax, letraMax);
    fflush(stdin);
    printf("EL NUMERO MINIMO Y  SU LETRA: %d, %c \n\n", numeroMin, letraMin);

    return 0;
}
