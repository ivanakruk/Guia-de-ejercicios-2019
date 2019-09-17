#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Arrays.h"
#define T 3

void CargarNumerosTest(int array[],int limite);
void MostrarNumerosTest(int array[],int limite);
void cargarNombre(char array [][50],int limite);
void mostrarNombre(char array[][50],int limite);
void cargarApellido(char array[][50],int limite);
void mostrarApellidos(char array[][50],int limite);
void ordenarPorEdades(char nombres[][50], char apellidos[][50],int edades[],int limite);
void listar(char nombres[][50], char apellidos[][50],int edades[],int limite);
void espacioparaSeparar();


int main()
{
    int datosNumericos[T];
    char Nombre[T][50];
    char ListadodePalabras[T][50];

   // CargarArray(datosNumericos,T,"ingrese un num","error ingrese num entre 0-200",0,200,2);
   // MostrarArray(datosNumericos,T);

    CargarNumerosTest(datosNumericos,T);
    MostrarNumerosTest(datosNumericos,T);

    cargarNombre(Nombre,T);
    mostrarNombre(Nombre,T);
    cargarApellido(ListadodePalabras,T);
    mostrarApellidos(ListadodePalabras,T);
    espacioparaSeparar();
    ordenarPorEdades(ListadodePalabras,ListadodePalabras,datosNumericos,T);
    listar(Nombre,ListadodePalabras,datosNumericos,T);

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
void cargarNombre(char array [][50],int limite)
{
    char aux [][50]={"Carlos","Jorge","Maria"};
    int i;
    for(i=0; i<limite; i++)
    {
        strcpy(array[i],aux[i]);
    }
}
void mostrarNombre(char array[][50],int limite)
{
    int i;
    for(i=0; i<limite; i++)
    {
        printf("\n Nombre: %s",array[i]);
    }
}
void cargarApellido(char array[][50],int limite)
{
    char aux [][50]={"Mercurio","Agua","McCartney"};
    int i;
    for(i=0; i<limite; i++)
    {
        strcpy(array[i],aux[i]);
    }
}
void mostrarApellidos(char array[][50],int limite)
{
    int i;
    for(i=0; i<limite; i++)
    {
        printf("\n Apellido: %s",array[i]);
    }
}
void listar(char nombres[][50], char apellidos[][50],int edades[],int limite)
{
    int i;
    for(i=0;i<limite;i++)
    {
        printf("\n %s, %s, edad %d", apellidos[i],nombres[i],edades[i]);
    }

}

void ordenarPorEdades(char nombres[][50], char apellidos[][50],int edades[],int limite)
{
    int i;
    int j;
    int aux;
    char auxNombres[50];
    char auxApellidos[50];
    for (i=0; i<limite-1;i++)
    {
        for (j=i+1; j<limite;j++)
        {
            if(edades[i]>edades[j])
            {
                aux = edades[i];
                edades[i]=edades[j];
                edades[j]=aux;

                strcpy(auxNombres,nombres[i]);
                strcpy(nombres[i],nombres[j]);
                strcpy(nombres[j],auxNombres);

                strcpy(auxApellidos,apellidos[i]);
                strcpy(apellidos[i],apellidos[j]);
                strcpy(apellidos[j],auxApellidos);

            }
        }
    }
}
void espacioparaSeparar()
{
    printf("\n\n________________________");
    printf("\n\n Apellidos y nombres ordenados por edad\n");
}
