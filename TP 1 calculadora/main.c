#include <stdio.h>
#include <stdlib.h>


int sumar(int num1, int num2);
int restar(int num1, int num2);
int multiplicar(int num1, int num2);
float Dividir (float num1, float num2);


int main()
{
    int valorA;
    int valorB;
    int resultSuma;
    int resulResta;
    int resulMultipl;
    float resultDivision;
    int resulFactorial;

    int flagA=0;
    int flagB=0;

    int opciones=0;
    char seguir;

    do
    {

        printf("BIENVENIDOS \n");

        printf("Seleccione la opcion que desee \n");

        printf("_______________________________\n\n");

        printf("1)Ingresar el 1er operando \n", valorA);
        printf("2)Ingresar el 2do operando \n", valorB );
        printf("3)Calcular todas las operaciones\n");
        printf("4)Informar resultados \n");
        printf("5)Salir\n");
        fflush(stdin);
        scanf("%d",&opciones);





        switch(opciones)
        {

        case 1:

            flagA=1;
            printf("Ingrese el primer operando\n");

            fflush(stdin);
            scanf("%d",&valorA);
            printf("_________________________\n");
            printf("EL PRIMER NUMERO ES: %d\n",valorA);
            printf("_________________________\n");
            fflush(stdin);

            break;

        case 2:

            flagB=1;
            printf("2) Ingresar el segundo operando\n");
            fflush(stdin);
            scanf("%d",&valorB);
            printf("_________________________\n");
            printf("EL SEGUNDO NUMERO ES: %d\n",valorB);
            printf("_________________________\n");
            fflush(stdin);



            break;

        case 3:
            if(flagA==1 && flagB==1)
            {
            resultSuma=sumar(valorA,valorB);
            resulResta=restar(valorA,valorB);
            resulMultipl=multiplicar(valorA,valorB);
            resultDivision=Dividir(valorA,valorB);
            }
            else
            {
                printf("Error, Ingrese un numero");

            }



        break;

        case 4:

            printf("_________________________\n");
            printf("EL PRIMER NUMERO ES: %d\n",valorA);
            printf("EL SEGUNDO NUMERO ES: %d\n",valorB);
            printf("_________________________\n");


            printf("El resultado de la suma es: %d\n",resultSuma);
            printf("El resultado de la resta es: %d\n",resulResta);
            printf("El resultado de la multiplicacion es: %d\n",resulMultipl);
            printf("El resultado de la division es: %2.f\n",resultDivision);

            fflush(stdin);


        case 5:

        seguir='5';
        break;
        }



    }while(seguir!='5');


    return 0;
}

int sumar(int num1, int num2)
{
    int total;
    total=num1+num2;
    return total;
}
int restar(int num1, int num2)
{
    int total;
    total=num1-num2;
    return total;
}
int multiplicar(int num1, int num2)
{
    int total;
    total=num1*num2;
    return total;
}
float Dividir (float num1, float num2)
{
    int total;
    total=num1/num2;
    return total;
}
int factorial (int num1, int num2)
{

}
