
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
    float total;
    total=(float)num1/num2;
    return total;
}
int factorial (int num)
{
    int resultado;

    if(num<0)
    {
        resultado=0;
    }
    else{

        if(num==0)
          {
            resultado = 1;
          }
         else
          {
            resultado=num*(factorial(num-1));
          }

        }
       return resultado;



}

