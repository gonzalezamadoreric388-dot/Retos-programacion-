// UPT Universidad politécnica de Tulancingo.
 //Programación Estructurada.
 //Arturo Negrete Medellín. 
//Eric Gonzáles Amador. 
#include <stdio.h>
#include <string.h>

int main() {
    char palabra[100];
    int contador = 0;

    printf("Ingrese una palabra o frase: ");
    // Captura la cadena completa incluyendo espacios
    scanf_s(" %[^\n]s", palabra, (unsigned)sizeof(palabra));

    for (int i = 0; palabra[i] != '\0'; i++) {
        char c = palabra[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            contador++;
        }
    }

    printf("El texto tiene %i vocales\n", contador);

    return 0;
}