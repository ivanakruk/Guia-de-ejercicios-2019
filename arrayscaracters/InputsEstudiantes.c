#include <stdio.h>
#include <stdlib.h>
#include "Arrays.h"
#include "Inputs.h"


int mostrarEstudiante(int aLegajo, char aSexo, int aEdad, int aNota1P,int aNota2P, float aPromedio)//ESTA FUNCION VA A ESTAR DENTRO DE MOSTRAR ESTUDIANTES
{
    printf("\n%d        %c     %d       %d         %d           %.2f", aLegajo, aSexo, aEdad, aNota1P, aNota2P, aPromedio);

    return 0;
}



int mostrarEstudiantes(int* aLegajo, char* aSexo,int* aEdad,int* aNota1P,int* aNota2P, float* aPromedio,int limite)
{
    int i;
    printf("\nlegajo    sexo   edad   nota1P     nota2P    promedio");//SON CADA NOMBRE DEL DATO A MOSTRAR
    for (i=0; i<limite; i++)
    {
        mostrarEstudiante(aLegajo[i], aSexo[i], aEdad[i], aNota1P[i], aNota2P[i], aPromedio[i]);//ITERO LOS DATOS TOMADOS CON SUS RESULTADOS
        //Y USO LA FUNCION MOSTRAR ESTUDIANTE EN EL QUE SE ENCUENTRA EL PRINTF CON SUS MASCARAS
    }

    return 0;
}

int cargarSetDatos(int* aLegajo, char* aSexo,int* aEdad,int* aNota1P,int* aNota2P, float* aPromedio,int limite)
{
    int i;
    int buffer;//VARIABLE PARA USAR TOMAR EL LEGAJO Y DESPUES PASARSELO AL PUNTERO
    for (i=0; i<limite; i++)// VAMOS A ITERAR PERO AGREGANDO LA FUNCION GETINT QUE TIENE PARA VALIDAR, Y MOSTRAR MSG
    {
        //printf("Ingrese el legajo del alumno: ");// PARTE DE LA FUNCION PARA SOLO TOMAR DATOS SIN VALIDAR
        //scanf("%d", &aLegajo[i]);
        if(getInt(&buffer,"Ingrese el legajo del alumno: ", "Error. ",1,100,2)==0)// SI NO SE CUMPLE LA VALIDACION
        {
                aLegajo[i]=buffer;
        }else
            {
                aLegajo[i]=0;
            }
        printf("Ingrese el sexo del alumno: ");
        fflush(stdin);
        scanf("%c",&aSexo[i]);
        printf("Ingrese la edad del alumno: ");
        scanf("%d", &aEdad[i]);
        printf("Ingrese la nota 1er Parcial del alumno: ");
        scanf("%d", &aNota1P[i]);
        printf("Ingrese la nota 2do Parcial del alumno: ");
        scanf("%d", &aNota2P[i]);
        aPromedio[i] = (((float)aNota1P[i]+aNota2P[i])/2);
       }
    return 0;
}


int ordenarLegajoEstudiantes(int* aLegajo, char* aSexo,int* aEdad,int* aNota1P,int* aNota2P, float* aPromedio,int limite)
{
    int i;
    int aux;//VARIABLES AUXILIARES PARA PODER MOVER LOS DATOS Y ORDENARLOS
    char auxS;// VARIABLE PARA LOS DATOS CHAR
    float auxF;//VARIABLE PARA LOS DATOS FLOAT
    int flag=-1;// FLAG ESTA TODO DESORDENADO..

    while(flag==-1)//SI ESTA TODO DESORDENADO.. ENTONCES..
    {
        flag=0;//SI ESTA TODO ORDENADO SE PONE EN CERO Y NO ENTRA AL FOR
        for (i=0; i<limite-1; i++)
        {
            if(aLegajo[i]<aLegajo[i+1])//SI aLEGAJO[i] ES MENOR A aLEGAJO[i+1] SE VA A ORDENAR DE MAYOR A MENOR!!
            {
                aux= aLegajo[i];
                aLegajo[i]=aLegajo[i+1];
                aLegajo[i+1]=aux;

                auxS= aSexo[i];
                aSexo[i]=aSexo[i+1];
                aSexo[i+1]=auxS;

                aux= aEdad[i];
                aEdad[i]=aEdad[i+1];
                aEdad[i+1]=aux;

                aux= aNota1P[i];
                aNota1P[i]=aNota1P[i+1];
                aNota1P[i+1]=aux;

                aux= aNota2P[i];
                aNota2P[i]=aNota2P[i+1];
                aNota2P[i+1]=aux;

                auxF= aPromedio[i];
                aPromedio[i]=aPromedio[i+1];
                aPromedio[i+1]=auxF;

                flag=-1;//AL ENTRAR AL FOR LO VUELVE A PONER EN -1 Y LO VUELVE A REVISAR Y SI ESTA ORDENADO NO ENTRA AL FOR Y SE PONE EN CERO
            }
        }
    }
    return 0;
}
