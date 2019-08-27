#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    float promedioTotal;
    int acumulador=0;
    int contador=0;

    while(contador<5)
        {
            contador++;
            printf("Ingrese un numero: \n");
            fflush(stdin);
            scanf("%d",&numero);



        acumulador=acumulador+numero;
        }

    promedioTotal=(float)acumulador/5;

    printf("El promedio total es %.2f\n", promedioTotal);

    return 0;
}
