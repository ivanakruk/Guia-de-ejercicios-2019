#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numa;
    int numb;
    float resultado;

    printf("ingrese num 1\n");
    scanf("d",&numa);
    fflush(stdin);

    printf("ingrese num2 \n");
    scanf("d",&numb);
    fflush(stdin);

    resultado=(float)numa/numb;


    printf("el resultado es: %.2f\n",resultado);



   /* int total;
    total=num1/(float)num2;*/



    return 0;
}
