#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Imputs-arrays.h"



/**
 * \brief Busca la primer ocurrencia de un valor en un array de Personas
 * \param array Es el array en el cual buscar
 * \param cantidadDeElementos Indica la logitud del array
 * \param valor Es el valor que se busca
 * \return Si no hay ocurrencia (-1) y si la hay, la posición de la misma
 *
 */


int buscarLugarLibre(eDatosAlumno AlumnoArray[],int limite, int valor)
{
    int i;
    for(i=0;i<limite;i++)
    {
        if(AlumnoArray[i].legajo==valor)// SI EL LEGAJO SE ENCUENTRA CARGADO CON EL -1
        {
           return i;// ME DEVUELVE EL LUGAR DONDE SE ENCUENTRA ESE -1

        }
    }
    return -1; //SI NO ENCUENTRA EL LUGAR ME DEVUELVE EL -1
}


void inicilizarDatosAlumno(eDatosAlumno AlumnoArray[], int limite, int valor)
{
    int i;
    for(i=0;i<limite;i++)
    {
        AlumnoArray[i].legajo=valor;
    }
}

/** \brief Pasa los datos tomados de los auxiliars a las variables que estan dentro de la estructura
 *
 * \param AlumnoArray vector donde estan todos los datos de los alumnos
 * \param indiceLugarLibre=buscarlugarlibre, me guarda los datos en el lugar libre
 *\param variables char auxiliares, donde estan copiados los datos que se van a pasar
 * \return 0
 *
 */

int NuevoEstudiante(eDatosAlumno AlumnoArray[],int indiceLugarLibre,char auxNombre[],char auxApellido[],int auxLegajo,int auxEdad,int auxNota1,int auxNota2)
{
    if(AlumnoArray!=NULL)
    {
    strcpy(AlumnoArray[indiceLugarLibre].nombre,auxNombre);
    strcpy(AlumnoArray[indiceLugarLibre].apellido,auxApellido);
    AlumnoArray[indiceLugarLibre].legajo = auxLegajo;
    AlumnoArray[indiceLugarLibre].edad = auxEdad;
    AlumnoArray[indiceLugarLibre].nota1 = auxNota1;
    AlumnoArray[indiceLugarLibre].nota2 = auxNota2;
    }

    return 0;
}
