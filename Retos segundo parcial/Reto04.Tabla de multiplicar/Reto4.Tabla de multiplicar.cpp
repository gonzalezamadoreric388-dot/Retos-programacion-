// UPT Universidad politécnica de Tulancingo.
 //Programación Estructurada.
 //Arturo Negrete Medellín. 
//Eric Gonzáles Amador. 

#include <stdio.h>

int main() {
    int num;

    printf("Ingrese un numero: ");
    scanf_s("%i", &num);

    for (int i = 1; i <= 10; i++) {
        printf("%i x %i = %i\n", num, i, num * i);
    }

    return 0;
}