#include <stdio.h>
#include <stdlib.h>
#define CANT 5


int iniciarArray(int *pArray[], int limite, int valor);
int MostrarArray (int * pArray[], int limite);
int CargarEdad(int * pArray [], int limite);
int CargarNota1(int * pArray [], int limite);
int CargarNota2(int * pArray [], int limite);
int sumaArrays(int* pArray[],int limite,int* resultado);

int main()
{
    int legajos[CANT];
    int valorInicial=0;
    int resulSumas=0;
    int edad[CANT];
    int nota1[CANT];
    int nota2[CANT];



    iniciarArray(legajos,CANT,valorInicial);
    CargarEdad(edad,CANT);
    MostrarArray(edad,CANT);
    CargarNota1(nota1,CANT);
    MostrarArray(nota1,CANT);
    CargarNota2(nota2,CANT);
    MostrarArray(nota2,CANT);
    sumaArrays(nota1,CANT,resulSumas);



    return 0;
}
int iniciarArray(int *pArray[], int limite, int valor)
{
	int retorno = -1;
	int i;
	if(pArray != NULL && limite > 0)
	{
		for(i=0;i<limite;i++)
		{
			pArray[i]=valor;
		}
		retorno = 0;
	}
	return retorno;
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
int CargarEdad(int * pArray [], int limite)
{
     int retorno= -1;
     int i;
     int edad;

     if(pArray != NULL && limite>0)//VALIDACION
     {
         for (i=0; i<limite; i++)
         {
             printf("\nIngrese la edad del alumno :");//TOMO EL NUMERO
             scanf("%d",&edad);// LE DIGO QUE EDAD VA ESTAR GUARDADO COMO NUMERO
             pArray[i]=edad;//GUARDO EL VALOR EN LOS INDICES DEL ARRAY
         }
         retorno=0;
     }return retorno;
}
int CargarNota1(int * pArray [], int limite)
{
     int retorno= -1;
     int i;
     int notaA;

     if(pArray != NULL && limite>0)//VALIDACION
     {
         for (i=0; i<limite; i++)
         {
             printf("\nIngrese la 1er nota del alumno :");//TOMO EL NUMERO
             scanf("%d",&notaA);// LE DIGO QUE  VA ESTAR GUARDADO COMO NUMERO
             pArray[i]=notaA;//GUARDO EL VALOR EN LOS INDICES DEL ARRAY
         }
         retorno=0;
     }return retorno;
}
int CargarNota2(int * pArray [], int limite)
{
     int retorno= -1;
     int i;
     int notaB;

     if(pArray != NULL && limite>0)//VALIDACION
     {
         for (i=0; i<limite; i++)
         {
             printf("\nIngrese la 2da nota del alumno :");//TOMO EL NUMERO
             scanf("%d",&notaB);// LE DIGO QUE  VA ESTAR GUARDADO COMO NUMERO
             pArray[i]= notaB;//GUARDO EL VALOR EN LOS INDICES DEL ARRAY
         }
         retorno=0;
     }return retorno;
}
int sumaArrays(int* pArray[],int limite,int* resultado)
{
    int res=0;
    int i;

    for (i=0; i<limite; i++)
    {
        res=res+pArray[i] ;
    }

    *resultado = res;

   return 0;
}
