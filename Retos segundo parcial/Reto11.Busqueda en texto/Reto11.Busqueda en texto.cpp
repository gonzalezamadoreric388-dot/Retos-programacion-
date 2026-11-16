#include <stdio.h>

int main() {
    char frase[100];
    char caracter;
    int encontrado = 0;
    int veces = 0;

    printf("Ingrese una frase: ");
    scanf_s(" %[^\n]s", frase, (unsigned)sizeof(frase));

    printf("Ingrese el caracter a buscar: ");
    scanf_s(" %c", &caracter, 1);

    printf("\nResultados de la busqueda:\n");
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == caracter) {
            printf("El caracter se encuentra en la posicion: %i\n", i);
            encontrado = 1;
            veces++;
        }
    }

    if (encontrado) {
        printf("\nSe repite un total de: %i veces\n", veces);
    }
    else {
        printf("\nEl caracter no fue hallado en la frase\n");
    }

    return 0;
}