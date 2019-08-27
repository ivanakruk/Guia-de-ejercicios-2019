#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dinero;
   int dineroMaxDolar;
   float promedioPositivos;
   int esElprimerDolar;

   char tipo;


   esElprimerDolar=1;
   int contador=0;
   int contadorPositivo=0;
   int acumuladorPositivo=0;

   while(contador<4)
    {
        contador++;

        printf("Ingrese cantidad de dinero: ");
        fflush(stdin);
        scanf("%d", &dinero);

        printf("Ingrese el tipo de moneda: ");
        fflush(stdin);
        scanf("%c", &tipo);

        while(tipo!= 'd'&& tipo!= 'b' && tipo!='l' && tipo!='p')
            {
                printf("ERROR, ingrese el tipo de moneda: ");
                fflush(stdin);
                scanf("%c", &tipo);
            }

        if(tipo=='d')
            {
                if(esElprimerDolar==1)
                    {
                        dineroMaxDolar=dinero;
                        esElprimerDolar=0;
                    }
                    else
                        {
                            if(dinero>dineroMaxDolar)
                                {
                                    dineroMaxDolar=dinero;
                                }
                        }

            }


        if(dinero>0)
            {
                contadorPositivo++;
                acumuladorPositivo=acumuladorPositivo+dinero;
            }
    }


    if(esElprimerDolar==1)
        {
            printf("No es el primer dolar \n");
            fflush(stdin);
        }
        else
            {
                printf("El importe maximo en dolares es: %d\n", dineroMaxDolar);
            }

promedioPositivos=(float)acumuladorPositivo/contadorPositivo;
printf("El promedio de los positivos es: %.2f\n", promedioPositivos);

    return 0;
}
