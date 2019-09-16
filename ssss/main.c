#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {//SIEMPRE DEFINIR LAS ESTRUCTURAS ANTES DE LOS PROTOTIPOS//TAMN SE PUEDE USAR SOLO STRUCT datosPersonales{}; QUE DSP HAY QUE LLAMARLA ASI EN EL MAIN
    char nombre[20];//TIPOS DE DATOS CON DISTINTAS VARIABLES
    char apellido[20];
    char calle[20];
    int numero;
}edatosPersonales;//COMO SE VA A LLAMAR, (ES UNA VARIABLE COMPUESTA) 1 CONJUNTO DE DATOS// LAS VARIABLES QUE TIENEN ADENTRO SE LLAMAN CAMPOS
int main()
{
    edatosPersonales agenda[3];// DECLARACION DE LA VARIABLE DE TIPO ESTRUCTURA
    //int vec[3]; //USAMOS ESTE VECTOR COMO LA POSICION DEL SET DEL VEC ANTERIOR DE LA ESTRUCTURA
    int i;
    for (i=0;i<3;i++)
    {
        printf("Ingrese el nombre: ");
        gets(agenda[i].nombre);
        printf("Ingrese el apellido: ");
        gets(agenda[i].apellido);
        printf("Ingrese calle: ");
        gets(agenda[i].calle);

        printf("El nombre es : %s",agenda[i].nombre);
        printf("\nEl apellido es: %s",agenda[i].apellido);
        printf("\nLa calle es: %s",agenda[i].calle);
    }


    //RESP=6   AGENDA.NUMERO=6; COPIA EL VALOR DE NUMERO 6 A AGENDA,    LO MISMO SE USAR PARA MOSTRAR LOS DATOS
        /*strcpy(agenda.nombre, "Ivana");
        strcpy(agenda.apellido, "Kruk");
        strcpy(agenda.calle, "San francisco");
        agenda.numero=1900;

        printf("El nombre es : %s",agenda.nombre);
        printf("\nEl apellido es: %s",agenda.apellido);
        printf("\nLa calle es: %s",agenda.calle);*/

       /* printf("Ingrese el nombre: ");    //TOMA DATOS DENTRO DE UNA SOLA VARIABLE
        gets(agenda.nombre);
        fflush(stdin);

        printf("Ingrese el apellido: ");
        gets(agenda.apellido);
        fflush(stdin);

        printf("Ingrese calle: ");
        gets(agenda.calle);
        fflush(stdin);

        printf("El nombre es : %s",agenda.nombre);
        printf("\nEl apellido es: %s",agenda.apellido);
        printf("\nLa calle es: %s",agenda.calle);*/

    return 0;
}

