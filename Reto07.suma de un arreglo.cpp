
// UPT Universidad politécnica de Tulancingo.
 //Programación Estructurada.
 //Arturo Negrete Medellín. 
//Eric Gonzáles Amador. 
#include <stdio.h>

int main() {
    int numeros[5];
    int suma = 0;

    printf("--- SUMA DE UN ARREGLO ---\n");

    // Bucle para solicitar y guardar cada número individualmente
    for (int i = 0; i < 5; i++) {
        printf("Ingrese el numero %i: ", i + 1);
        scanf_s("%i", &numeros[i]);
    }

    // Bucle para sumar los elementos almacenados en el arreglo
    for (int i = 0; i < 5; i++) {
        suma += numeros[i];
    }

    printf("\nLa suma total de los 5 numeros es: %i\n", suma);

    return 0;
}
