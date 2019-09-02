
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
float Dividir (int num1, int num2)
{
    int total;
    total=(float)num1/(float)
    num2;
    return (float)total;
}
int factorial (int num)
{
    int resultado;

    if(num==1)
        {
        return 1;
        }
   resultado=num*(factorial(num-1));
   return resultado;
}

void mostrarMenu()
{
        printf("BIENVENIDOS \n");
        printf("Seleccione la opcion que desee \n");
        printf("_______________________________\n\n");
        printf("1)Ingresar el 1er operando \n");
        printf("2)Ingresar el 2do operando \n");
        printf("3)Calcular todas las operaciones\n");
        printf("4)Informar resultados \n");
        printf("5)Salir\n");

}
