// UPT Universidad politécnica de Tulancingo.
 //Programación Estructurada.
 //Arturo Negrete Medellín. 
//Eric Gonzáles Amador. 
#include <stdio.h>

// Función que recibe las direcciones de memoria de dos variables enteras
void intercambiar(int* a, int* b) {
    int temp = *a; // Guarda el valor al que apunta 'a'
    *a = *b;       // Asigna el valor de 'b' a la dirección de 'a'
    *b = temp;     // Asigna el valor guardado en 'temp' a la dirección de 'b'
}

int main() {
    int num1, num2;

    printf("--- INTERCAMBIO CON PUNTEROS ---\n");

    printf("Ingrese el primer numero: ");
    scanf_s("%i", &num1);

    printf("Ingrese el segundo numero: ");
    scanf_s("%i", &num2);

    printf("\nAntes del intercambio:\n");
    printf("Primer numero: %i\n", num1);
    printf("Segundo numero: %i\n", num2);

    // Pasamos las direcciones de memoria usando el operador &
    intercambiar(&num1, &num2);

    printf("\nDespues del intercambio:\n");
    printf("Primer numero: %i\n", num1);
    printf("Segundo numero: %i\n", num2);

    return 0;
}