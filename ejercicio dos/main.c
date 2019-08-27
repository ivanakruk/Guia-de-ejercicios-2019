#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int numeroMax;
    int numeroMin;
    int acumulador=0;
    int contador=0;

    float promediototal;

    int i;

    for (i=0; i<5; i++)
        {
            printf("Ingrese un numero:  ");
            fflush(stdin);
            scanf("%d",&numero);

            if(contador==0)
                {
                    numeroMax=numero;
                    numeroMin=numero;
                    contador++;
                }else
                {
                    if(numero>numeroMax)
                        {
                            numeroMax=numero;
                        }
                    if(numero<numeroMin)
                    {
                        numeroMin=numero;
                    }

                }

            acumulador=acumulador+numero;
        }

    promediototal=(float)acumulador/5;

    printf("___________________________________\n\n");
    fflush(stdin);
    printf("EL PROMEDIO DE SUS NUMEROS ES: %.2f\n", promediototal);
    fflush(stdin);
    printf("___________________________________\n\n");
    fflush(stdin);
    printf("EL NUMERO MAXIMO ES : %d\n",numeroMax);
    fflush(stdin);
    printf("___________________________________\n\n");
    fflush(stdin);
    printf("EL NUMERO MINIMO ES : %d\n",numeroMin);
    fflush(stdin);

    return 0;
}
