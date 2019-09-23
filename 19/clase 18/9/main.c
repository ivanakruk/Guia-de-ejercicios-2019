#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct direccion {//DE QUE MANERA USAMOS LAS ESTRUCTURAS ANIDADAS (ESTRUCTURAS ADENTRO DE LAS ESTRUCTURAS);
    char calle [20];//LA ESTRUCTURA QUE VA A IR ADENTRO TIENE QUE ESTAR DEFINIDA ANTES;
    int numero;
};
struct datosPersonales{
    char nombre[20];
    char apellido[20];
    struct direccion domicilio;
};


int main()
{
    struct datosPersonales vecAgenda[3];
    int i;

    for (i=0; i<3; i++){
        printf("\Ingrese nombre");
        gets(vecAgenda[i].nombre);// USAR LA FUNCION GETSTRING HECHA POR UNO
        printf("\Ingrese apellido");
        gets(vecAgenda[i].apellido);
        printf("\Ingrese calle");
        gets(vecAgenda[i].domicilio.calle);
        printf("\Ingrese numero");
        gets(vecAgenda[i].domicilio.numero);//USAR FUNCION GETNUM
        fflush(stdin);
    }//PARA ASIGNARLE UN VALOR A UNA CADENA DE CARACTERES HAY QUE USAR STRCPY

    //ABM = ALTA, BAJA, MODIFICACION;
    //SIEMPRE INICIALIAR LA ESTRUCTURA EN TODOS LOS ESPACIOS EN -1
    //CARGAR DATOS EN EL LUGAR LIBRE CON UNA FUNCION, DAR EL ESPACIO LIBRE PARA DAR EL ALTA

    return 0;
}
int cargarArray(Persona arrayPersona[],int limite,int valor)
{
    int i;
    retorno=-1;// SI EL LEGAJO ESTA VACIO


    for(i=0;i<limite;i++)
    {
       if(arrayPersona[i].legajo<0)
       {
           printf("Ingrese el numero de legajo: \n");
           gets(arrayPersona[i].legajo);


       }
       retorno=0;//SI ESTA OCUPADO

    }

}
//FUNCIO QUE PASE TOODOS LOS PARAMETROS Y SE LOS ASIGNE A LA POSICION DEL VECTOR Y CARGUE ESA ESTRUCTURA,
// ESA FUNCION VA ESTAR DANDO DE ALTA A TODA LA INFORMACION DE UN ALUMNO

int datosUnAlumno(Persona arrayPersonas, )// LOS DATOS QUE INGRESO EN UN ALUMNO Y EL LUGAR DONDE LO INGRESO(AVISANDO SI SE PUEDE O NO)
{

}
