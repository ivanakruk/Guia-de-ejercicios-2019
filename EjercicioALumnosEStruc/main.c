#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    int dia;
    int mes;
    int anio;

}eFechaIngreso;

typedef struct{

    int legajo;
    int nota1;
    int nota2;
    int edad;
    char sexo;
    float promedio;
}eDatosAlumnos;

int main()
{
    eFechaIngreso ingresoS[2];

    int i;
    for (i=0;i<2;i++)
    {
        printf("Ingrese el dia: ");
        scanf("%d",&ingresoS[i].dia);
        printf("Ingrese el mes: ");
        scanf("%d",&ingresoS[i].mes);
        printf("Ingrese el anio: ");
        scanf("%d",&ingresoS[i].anio);



    }
    for (i=0;i<2;i++){
        printf("\nLa fecha de ingreso es: %d.%d.%d ",ingresoS[i].dia,ingresoS[i].mes,ingresoS[i].anio);


        }




    return 0;
}
