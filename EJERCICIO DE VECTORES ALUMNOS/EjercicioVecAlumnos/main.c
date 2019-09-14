#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Arrays.h"
#include "Inputs.h"
#include "InputsEstudiantes.h"
#define CANT 2


int main()
{
    int legajo[CANT];
    int edades[CANT];
    int nota1[CANT];
    int nota2[CANT];
    char sexo[CANT];
    float promedios[CANT];

    cargarSetDatos(legajo,sexo,edades,nota1,nota2,promedios,CANT);

    mostrarEstudiantes(legajo,sexo,edades,nota1,nota2,promedios,CANT);
    ordenarLegajoEstudiantes(legajo,sexo,edades,nota1,nota2,promedios,CANT);
    mostrarEstudiantes(legajo,sexo,edades,nota1,nota2,promedios,CANT);

    return 0;
}


