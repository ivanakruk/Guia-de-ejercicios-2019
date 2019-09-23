#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Imputs-arrays.h"
#define T 2


int main()
{


    char auxNombre[50];
    char auxApellido[50];
    char auxLegajo[50];
    char auxEdad[50];
    char auxNota1[50];
    char auxNota2[50];

    int auxiliarLegaj;
    int auxiliarNota1;
    int auxiliarNota2;
    int auxiliarEdad;

    int indiceLugarLibre;
    int indiceResultadoBusqueda;
    int opcion = 0;

//HAY QUE INICIALIZAR EL VECTOR STRUC CON UN VALOR PARA PODER USARLO DESPUES CUANDO TENES QUE BUSCAR UNA POSICION O BORRAR UN LUGAR
    inicilizarDatosAlumno(AlumnoArray,T,-1);
    //SE INDICA CON -1 PARA DEJAR TODAS LAS POSICIONES VACIAS

    while(opcion!=6)
    {
        opcion=getInt("\n\n\n1 - ALTA \n2 - BAJA \n3 - MODIFICACION\n4 - LISTAR\n5 - ORDENAR\n6 - SALIR\n\n\n");

        switch(opcion)
        {
            case 1://DAR ALTA / CARGAR DATOS

            indiceLugarLibre=buscarLugarLibre(AlumnoArray,T,-1);// SI NO ENCUENTRA EL -1, NO DEVUELVE LA POSICION ENTONCES ME VA A DEVOLVER -1
             if(indiceLugarLibre == -1)//SI ME DEVUELVE -1 DE RETORNO SIGNIFICA QUE NO HAY LUGAR
                {
                    printf("\n\nNO QUEDAN LUGARES LIBRES!!!\n");
                    break;
                }
            //SI QUEDAN LUGARES LIBRES, PUEDO GUARDAR LOS DATOS EN LOS QUE VAYA ENCONTRANDO
            printf("\n ALTA\n");
            if(!getStringLetras("Ingrese el nombre: ",auxNombre))
                {
                 printf("\n\nIngrese solo letras..\n");
                 break;
                }

              if(!getStringLetras("Ingrese el apellido: ",auxApellido))
                {
                 printf("\n\nIngrese  solo letras..\n");
                 break;
                }
            if(!getStringNumeros("Ingrese el numero de legajo: ",auxLegajo))
                {
                 printf("\n\nIngrese  solo numeros..\n");
                 break;
                }
            auxiliarLegaj=atoi(auxLegajo);//LO IGUALO A LA VARIABLE NOMBRADA COMO INT(ATOI CONVIERTE A ENTEROS)
            //DEL AUX COMO INT A AUX QUE ESTA COMO STRINGS
            if(!getStringNumeros("Ingrese la edad: ",auxEdad))
                {
                 printf("\n\nIngrese  solo numeros..\n");
                 break;
                }
            auxiliarEdad=atoi(auxEdad);
             if(!getStringNumeros("Ingrese la nota del primer parcial: ",auxNota1))
                {
                 printf("\n\nIngrese  solo numeros..\n");
                 break;
                }
            auxiliarNota1=atoi(auxNota1);
            if(!getStringNumeros("Ingrese la nota del segundo parcial: ",auxNota2))
                {
                 printf("\n\nIngrese  solo numeros..\n");
                 break;
                }
            auxiliarNota2=atoi(auxNota2);

            NuevoEstudiante(AlumnoArray,indiceLugarLibre,auxNombre,auxApellido,auxiliarLegaj,auxiliarEdad,auxiliarNota1,auxiliarNota2);

            break;

            case 2://DAR BAJA / BORRAR

                   if (!getStringNumeros("Ingrese el legajo a dar de baja: ",auxLegajo))// CONDICION PARA NO INGRESAR LETRAS
                {
                    printf ("El legajo debe ser numerico\n");
                    break;
                }
                indiceResultadoBusqueda= buscarLugarLibre(AlumnoArray,T,atoi(auxLegajo));// BUSCO EL LEGAJO GUARDADO ANTES

                if(indiceResultadoBusqueda == -1)//SI EL RESULTADO ES IGUAL A -1
                {
                    printf("\n\nNO SE ENCUENTRA ESE LEGAJO\n");
                    break;
                }
                AlumnoArray[indiceResultadoBusqueda].legajo=-1;
                printf("\n\nSe ha dado de baja el legajo\n");
                break;// SI LO ENCUENTRA, SIENDO EL NUM INGRESADO LA POSICION, LUEGO SE LO IGUALA DE NUEVO A -1 PARA INDICAR QUE ESTA VACIO

            case 3://MODIFICAR

                 if(!getStringNumeros("Ingrese el legajo que quiere modificar: ",auxLegajo))
                   {
                       printf("Error, ingrese solo numeros");
                       break;
                   }
                auxiliarLegaj=atoi(auxLegajo);
                indiceResultadoBusqueda= buscarLugarLibre(AlumnoArray,T,atoi(auxLegajo));// BUSCO EL LEGAJO GUARDADO ANTES

                 if(indiceResultadoBusqueda == -1)//SI EL RESULTADO ES IGUAL A -1
                {
                    printf("\n\nNO SE ENCUENTRA ESE LEGAJO\n");
                    break;
                }

                if(!getStringLetras("Ingrese el nombre: ",auxNombre))
                {
                 printf("\n\nIngrese solo letras..\n");
                 break;
                }

                if(!getStringLetras("Ingrese el apellido: ",auxApellido))
                {
                 printf("\n\nIngrese  solo letras..\n");
                 break;
                }

                if(!getStringNumeros("Ingrese la edad: ",auxEdad))
                {
                 printf("\n\nIngrese  solo numeros..\n");
                 break;
                }
            auxiliarEdad=atoi(auxEdad);
             if(!getStringNumeros("Ingrese la nota del primer parcial: ",auxNota1))
                {
                 printf("\n\nIngrese  solo numeros..\n");
                 break;
                }
            auxiliarNota1=atoi(auxNota1);
            if(!getStringNumeros("Ingrese la nota del segundo parcial: ",auxNota2))
                {
                 printf("\n\nIngrese  solo numeros..\n");
                 break;
                }
            auxiliarNota2=atoi(auxNota2);

                NuevoEstudiante(AlumnoArray,indiceLugarLibre,auxNombre,auxApellido,auxiliarLegaj,auxiliarEdad,auxiliarNota1,auxiliarNota2);
                break;

            case 4:
                printf("\nLISTAR\n");// MOSTRAR LOS DATOS DE LOS ALUMNOS
                int i;

                printf("\nLEGAJO   NOMBRE   APELLIDO  EDAD  NOTA1  NOTA2");
                for (i=0; i<T; i++){

                    if(AlumnoArray[i].legajo!=-1)
                    {

                         printf("\n%d      %s      %s     %d     %d     %d",AlumnoArray[i].legajo,AlumnoArray[i].nombre,AlumnoArray[i].apellido,AlumnoArray[i].edad,AlumnoArray[i].nota1,AlumnoArray[i].nota2);
                    }
                }
                break;

            case 5:

                printf("\nORDENADO\n");

                 int j;
                 eDatosAlumno auxiliarCliente;

                for(i=0; i <T-1; i++)
                {
                    if(AlumnoArray[i].legajo == -1)
                    {
                        continue;
                    }
                    for(j=i+1; j <T; j++)
                    {
                        if(AlumnoArray[j].legajo == -1)
                        {
                            continue;
                        }
                        if(strcmp(AlumnoArray[i].apellido,AlumnoArray[j].apellido) > 0)
                        {
                            auxiliarCliente = AlumnoArray[j];
                            AlumnoArray[j] = AlumnoArray[i];
                            AlumnoArray[i] = auxiliarCliente;
                        }
                    }
                }
                break;



        }

    }


    return 0;
}


