#include <stdlib.h>
#include <stdio.h>
#define MAX 2 //varia segun cantidad de personas que se quieren ingresar

int respuesta;
/* Estructura para ingresar los datos de los alumnos */
struct persona {
    int edad;
    char nombre[20];
    char apellido[20];
    int matricula;    
};
/* Se define persona de tipe Persona segun la estructura previa */
typedef struct persona Persona;

void ingreso(int max, Persona *punt);
void desplegar(int max, Persona *punt);

int main(){
    Persona alumnos[MAX]; //Definicion del arreglo de alumnos de tipo Persona
/* Llamado de funciones con parametros */    
    ingreso(MAX,alumnos);
    desplegar(MAX,alumnos);

    printf("\n");
    system("pause");
    return 0;
}
/* Funcion para agregar personas al arreglo */
void ingreso(int max, Persona *punt){
/* Ciclo para ingresar los datos para los alumnos */    
    for(int i=0;i<max;i++){
        printf("Ingrese los datos para la %da persona.\n ", i+1);
        printf("Ingrese la Edad: \t");
        scanf("%d", &(*(punt + i)).edad);
        printf("\n Ingrese Nombre: \t");
        fflush(stdin);
        scanf("%s", &punt[i].nombre);
        printf("\n Ingrese Apellido: \t");
        fflush(stdin);
        scanf("%s", &punt[i].apellido);
        printf("\n Ingrese la Matricula: \t");
        scanf("%d", &punt[i].matricula);
    }
}
/* Funcion para mostrar los datos */
void desplegar(int max, Persona *punt){
/* Ciclo para mostrar los valores */
    for(int i=0;i<max;i++){
        printf("\n Datos de la %da persona: ", i+1);
        printf("Edad %3d ", (*(punt + i)).edad);
        printf(" Nombre %10s ", (*(punt + i)).nombre);
        printf(" Apellido %10s ", (*(punt + i)).apellido);
        printf(" Matricula %5d\n", (*(punt + i)).matricula);
    }
}