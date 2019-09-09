#include <stdio.h>
#include <stdlib.h>
#define QTY_EDADES 5
#define VALOR_INICIAL 0

int initArrayInt (int * pArray [], int limite, int valor);
int MostrarArray (int * pArray[], int limite);
int CargarArray(int * pArray [], int limite);



int main()
{
    int edades[QTY_EDADES];
    //int minimo, maximo, suma, promedio,cant;
    //int resulTado;

    //INICIALIZAR EL VECTOR//PONERLE VALOR A CADA INDICE DEL VECTOR
    initArrayInt(edades,QTY_EDADES,VALOR_INICIAL);
    MostrarArray(edades,QTY_EDADES);
    CargarArray(edades,QTY_EDADES);


    return 0;
}
int initArrayInt (int * pArray [], int limite, int valor)
{
     int retorno= -1;
     int i;
     if(pArray != NULL && limite>0)//VALIDACION
     {
         for (i=0; i<limite; i++)
         {
             pArray[i]=valor;
         }
         retorno=0;
     }return retorno;
}
int MostrarArray (int * pArray[], int limite)
{
    int retorno= -1;
     int i;
     printf("\nDEBUG\n");
     if(pArray != NULL && limite>0)//VALIDACION
     {
         for (i=0; i<limite; i++)
         {
             printf("\n %d",pArray[i]);
         }
         retorno=0;
     }return retorno;
}
/*int getArrayint(int *pArray, int limite, char *pMensaje, char*pMensajeError, int minimo, int maximo, int reintentos)
{
    int retorno=-1;
    int boffer;
    int i=0;
    char respuesta;
    if (pArray != NULL && limite >0)
    {
        do
        {

        }
    }
}*/
int CargarArray(int * pArray [], int limite)
{
     int retorno= -1;
     int i;
     int valor;
     if(pArray != NULL && limite>0)//VALIDACION
     {
         for (i=0; i<limite; i++)
         {
             printf("\nIngrese un numero :");//TOMO EL NUMERO
             scanf("%d",&valor);// GUARDO EL VALOR EN LOS INDICES DEL ARRAY
             pArray[i]=valor;
         }
         retorno=0;
     }return retorno;
}
/*int sumaArrayInt(int*pArray,int limite,int*resultado)
{
    int res=0;
    int i;

    for (i=0; i<limite; i++)
    {
        res=res+pArray[i];
    }
    *resultado;
    return 0;
}*/
int OrdenarArrayint(int*pArray, int limite)
{
    int i;
    int aux;
    int arrayAux=pArray;
    int flag=-1;

    while(flag==-1)
    {
        flag=0;//YA ESTA ORDENADO PORQUE NO ENTRA A LA CONDICION DEL SWAT, ENTONCES TERMINA

        for(i=0; i<limite-1; i++)
        {
            if(arrayAux[i]>arrayAux[i+1])
            { //SWAP
                aux=arrayAux[i];
                arrayAux[i]=arrayAux[i+1];
                arrayAux[i+1]=aux;
                flag=-1;//EL MENOS UNO SIGNIFICA QUE ESTA DESORDENADO
            }
        }
    }
}
