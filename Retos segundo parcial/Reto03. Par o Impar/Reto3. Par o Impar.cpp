// UPT Universidad politécnica de Tulancingo.
 //Programación Estructurada.
 //Arturo Negrete Medellín. 
//Eric Gonzáles Amador. 

#include <stdio.h>

int main() {
    int num;

    printf("Ingrese un numero entero: ");
    scanf_s("%i", &num);

    if (num % 2 == 0) {
        printf("El numero %i es PAR\n", num);
    }
    else {
        printf("El numero %i es IMPAR\n", num);
    }

    return 0;
}
