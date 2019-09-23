#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 2
typedef struct{
    char nombre[50];
    char apellido[50];
    int legajo;
    int edad;
    int nota1;
    int nota2;


}eDatosAlumno;

 eDatosAlumno AlumnoArray[T]; // ARRAYS DE LOS DATOS DE LOS ALUMNOS

int getInt(char* mensaje);

void inicilizarDatosAlumno(eDatosAlumno AlumnoArray[], int limite, int valor);
int buscarLugarLibre(eDatosAlumno AlumnoArray[],int limite, int valor);
int NuevoEstudiante(eDatosAlumno AlumnoArray[],int indiceLugarLibre,char auxNombre[],char auxApellido[],int auxLegajo,int auxEdad,int auxNota1,int auxNota2);
