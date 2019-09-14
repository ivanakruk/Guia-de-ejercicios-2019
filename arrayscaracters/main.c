#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Arrays.h"
#define T 3

void CargarNumerosTest(int array[],int limite);
void MostrarNumerosTest(int array[],int limite);
void cargarPalabraTest(char array [][50],int limite);
void mostrarPalabrasTest(char array[][50],int limite);
void cargarApellidoTes(char array[][50],int limite);
void ordenarPorEdades(char nombres[][50], char apellidos[][50],int edades[],int limite);
void listar(char nombres[][50], char apellidos[][50],int edades[],int limite);


int main()
{
    int datosNumericos[T];
    char letra;
    char palabra[T];
    char ListadodePalabras[T][50];

   // CargarArray(datosNumericos,T,"ingrese un num","error ingrese num entre 0-200",0,200,2);
   // MostrarArray(datosNumericos,T);

    CargarNumerosTest(datosNumericos,T);
    MostrarNumerosTest(datosNumericos,T);

    cargarPalabraTest(ListadodePalabras,T);
    mostrarPalabrasTest(ListadodePalabras,T);
    cargarApellidoTes(ListadodePalabras,T);
    mostrarApellidosTest(ListadodePalabras,T);

    //ordenarPorEdades()

    return 0;
}
void CargarNumerosTest(int array[],int limite)
{
    int aux[]={50,18,35};
    int i;
    for(i=0;i<limite;i++)
    {
        array[i]=aux[i];
    }
}
void MostrarNumerosTest(int array[],int limite)
{
    int i;
    for(i=0;i<limite;i++)
    {
       printf("\n Edad: %d",array[i]);
    }
}
void cargarPalabraTest(char array [][50],int limite)
{
    char aux [][50]={"Carlos","Jorge","Maria"};
    int i;
    for(i=0; i<limite; i++)
    {
        strcpy(array[i],aux[i]);
    }
}
void mostrarPalabrasTest(char array[][50],int limite)
{
    int i;
    for(i=0; i<limite; i++)
    {
        printf("\n Nombre: %s",array[i]);
    }
}
void cargarApellidoTes(char array[][50],int limite)
{
    char aux [][50]={"Mercurio","Agua","McCartney"};
    int i;
    for(i=0; i<limite; i++)
    {
        strcpy(array[i],aux[i]);
    }
}
void mostrarApellidosTest(char array[][50],int limite)
{
    int i;
    for(i=0; i<limite; i++)
    {
        printf("\n Apellido: %s",array[i]);
    }
}
void listar(char nombres[][50], char apellidos[][50],int edades[],int limite)
{
    printf("\n %d     %s       %s      ",edades, nombres, apellidos);
}

void ordenarPorEdades(char nombres[][50], char apellidos[][50],int edades[],int limite)
{
    int i;
    int j;
    int aux;
    char auxA;
    char auxB;
    for (i=0; i<limite-1;i++)
    {
        for (j=i+1; j<limite;j++)
        {
            if(edades[i]>edades[j])
            {
                aux = edades[i];
                edades[i]=edades[j];
                edades[j]=aux;

               /* auxA = nombres[i];
                nombres[i]=nombres[j];
                nombres[j]=auxA;

                auxB = apellidos[i];
                apellidos[i]=apellidos[j];
                apellidos[j]=auxB;*/


            }
        }
    }
}
