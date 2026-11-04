// UPT Universidad politécnica de Tulancingo 
// Programación Estructurada
//Arturo Negrete Medellín.
//Eric Gonzáles Amador.

#include <stdio.h>

int main() {
    float num1, num2;

    printf("Ingrese el primer numero: ");
    scanf_s("%f", &num1);

    printf("Ingrese el segundo numero: ");
    scanf_s("%f", &num2);

    printf("\nResultados:\n");
    printf("Suma: %.2f\n", num1 + num2);
    printf("Resta: %.2f\n", num1 - num2);
    printf("Multiplicacion: %.2f\n", num1 * num2);

    if (num2 != 0) {
        printf("Division: %.2f\n", num1 / num2);
    }
    else {
        printf("Division: Error\n");
    }

    return 0;
}