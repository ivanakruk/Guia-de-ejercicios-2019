
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
    return (float)num1/num2;
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

