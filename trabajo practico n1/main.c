#include <stdio.h>
#include <stdlib.h>

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

        switch(operaciones)
        {
        case '1':
            resultado=a*b;
            break;
        case '2':
            resultado=a+b;
            break;

        case '3':
            resultado=a-b;
            break;
        case '4':
            resultado=(float)a/b;
            break;


        }



        printf("Desea continuar?\n");
        fflush(stdin);
        scanf("%s", &seguir);

    }while(seguir=='s');

    return 0;
}
