// UPT Universidad politécnica de Tulancingo.
 //Programación Estructurada.
 //Arturo Negrete Medellín. 
//Eric Gonzáles Amador. 


#include <stdio.h>

int main() {
    double num1, num2;

    printf("Ingrese el primer numero: ");
    scanf_s("%lf", &num1);

    printf("Ingrese el segundo numero: ");
    scanf_s("%lf", &num2);

    printf("\n--- RESULTADOS ---\n");
    printf("Suma: %.2lf\n", num1 + num2);
    printf("Resta: %.2lf\n", num1 - num2);
    printf("Multiplicacion: %.2lf\n", num1 * num2);

    if (num2 != 0) {
        printf("Division: %.2lf\n", num1 / num2);
    }
    else {
        printf("Division: Error (No se puede dividir entre cero)\n");
    }

    return 0;
}