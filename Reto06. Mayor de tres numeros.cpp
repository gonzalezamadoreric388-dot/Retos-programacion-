// UPT Universidad politécnica de Tulancingo.
 //Programación Estructurada.
 //Arturo Negrete Medellín. 
//Eric Gonzáles Amador. 
#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Ingrese el primer numero: ");
    scanf_s("%i", &num1);

    printf("Ingrese el segundo numero: ");
    scanf_s("%i", &num2);

    printf("Ingrese el tercer numero: ");
    scanf_s("%i", &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("El mayor es: %i\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3) {
        printf("El mayor es: %i\n", num2);
    }
    else {
        printf("El mayor es: %i\n", num3);
    }

    return 0;
}
