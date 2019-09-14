#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MSG_INGRESONOM "Ingrese un nombre: "
#define MSG_INGRESOAP "Ingrese un apellido: "
#define CANT 2

char cargarNomyApe(char* pNombre[50],char* pApellido[50], int limite);
void getString(char mensaje[],char input[]);
int printArrayStr(char pArray[][50], int limite);

int main()
{
    char nombre[CANT][50];
    char apellido[CANT][50];

    cargarNomyApe(nombre,apellido,CANT);


    return 0;
}

char cargarNomyApe(char* pNombre[50],char* pApellido[50], int limite)
{
    int i;
    char Nombre[50];
    char Apell[50];
    char auxNombre[50];
    char auxApell[50];

    for (i=0; i<limite; i++)
    {
        getString(MSG_INGRESONOM,auxNombre);
        strcpy(Nombre[i],auxNombre);



    }
    printArrayStr(pNombre,limite);
}
void getString(char mensaje[],char input[])//
{
    printf("%s",mensaje);
    gets(input);
}
int printArrayStr(char pArray[][50], int limite)//IMPRIME EL TEXTO
{
	int retorno = -1;
	int i;

	if(pArray != NULL && limite > 0)
	{
		for(i=0;i<limite;i++)
		{
			printf("%s", pArray[i]);
			printf("\n");
		}
		retorno = 0;
	}
	return retorno;
}
