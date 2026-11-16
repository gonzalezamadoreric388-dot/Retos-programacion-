// UPT Universidad politécnica de Tulancingo.
//Programación Estructurada.
//Arturo Negrete Medellín. 
//Eric Gonzáles Amador. 
#include <stdio.h>
#include <string.h>

// Definición de la estructura para el estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

int main() {
    struct Estudiante alumno;

    printf("--- REGISTRO DE ESTUDIANTE ---\n");

    // Captura de datos
    printf("Ingrese el nombre del estudiante: ");
    scanf_s(" %[^\n]s", alumno.nombre, (unsigned)sizeof(alumno.nombre));

    printf("Ingrese la edad: ");
    scanf_s("%i", &alumno.edad);

    printf("Ingrese el promedio: ");
    scanf_s("%f", &alumno.promedio);

    // Visualización de la información almacenada en la estructura
    printf("\n--- DATOS GUARDADOS EN LA ESTRUCTURA ---\n");
    printf("Nombre: %s\n", alumno.nombre);
    printf("Edad: %i\n", alumno.edad);
    printf("Promedio: %.2f\n", alumno.promedio);

    return 0;
}