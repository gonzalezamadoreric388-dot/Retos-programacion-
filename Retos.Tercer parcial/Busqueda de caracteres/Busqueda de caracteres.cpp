// UPT Universidad Politécnica de Tulancingo.
 //Programación Estructurada.
 //Arturo Negrete Medellín. 
//Eric González Amador. 

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    char texto[101];
    char espejo[101];
    int j, total_letras = 0, intentos = 0;
    bool encontrado = false;
    char letra;

    printf("Ingrese un texto: ");
    if (fgets(texto, sizeof(texto), stdin) == NULL) {
        return 1;
    }
    texto[strcspn(texto, "\n")] = '\0';

    if (texto[0] == '\0') {
        printf("No ingresaste ningún texto.\n");
        return 0;
    }

    for (j = 0; texto[j] != '\0'; j++) {
        if (texto[j] == ' ') {
            espejo[j] = ' ';
        }
        else {
            espejo[j] = '_';
            total_letras++;
        }
    }
    espejo[j] = '\0';

    do {
        printf("\nPalabra oculta: %s\n", espejo);
        printf("Ingrese una letra: ");
        scanf_s(" %c", &letra, (unsigned int)sizeof(letra));
        intentos++;

        encontrado = false;
        for (j = 0; texto[j] != '\0'; j++) {
            if (tolower((unsigned char)texto[j]) == tolower((unsigned char)letra) && espejo[j] == '_') {
                espejo[j] = texto[j];
                encontrado = true;
            }
        }

        if (encontrado) {
            printf("Bien hecho. La letra '%c' está en el texto.\n", letra);
        }
        else {
            printf("La letra '%c' no está o ya fue adivinada.\n", letra);
        }

    } while (strcmp(texto, espejo) != 0);

    printf("\n¡FELICIDADES! Has completado la palabra '%s' en %d intentos.\n", texto, intentos);
    printf("El juego ha terminado.\n");

    return 0;
}