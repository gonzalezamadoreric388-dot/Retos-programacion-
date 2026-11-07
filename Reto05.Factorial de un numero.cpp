// UPT Universidad politécnica de Tulancingo.
 //Programación Estructurada.
 //Arturo Negrete Medellín. 
//Eric Gonzáles Amador. 
#include <stdio.h>

int main() {
    int num;
    long long factorial = 1;

    printf("Ingrese un numero entero positivo: ");
    scanf_s("%i", &num);

    if (num < 0) {
        printf("Error: El numero debe ser positivo\n");
    }
    else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("El factorial es: %lld\n", factorial);
    }

    return 0;
}
