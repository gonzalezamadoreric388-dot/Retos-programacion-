// UPT Universidad politécnica de Tulancingo.
//Programación Estructurada.
//Arturo Negrete Medellín. 
//Eric Gonzáles Amador.
#include <stdio.h>
int buscar(char frase[], char caracter) {
    int i = 0;
    while (frase[i] != '\0') {
        if (frase[i] == caracter) {
            return i;
        }
        i++;
    }
    return -1;
}

int main() {
    char frase[100];
    char caracter;


    printf("Ingresa una frase: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Ingresa el caracter que deseas buscar: ");
    scanf_s("%c", &caracter);


    int posicion = buscar(frase, caracter);
    if (posicion != -1) {
        printf("¡Caracter hallado! Se encuentra en la posicion: %d\n", posicion);
    }
    else {
        printf("El caracter no fue encontrado en la frase.\n");
    }

    return 0;
}