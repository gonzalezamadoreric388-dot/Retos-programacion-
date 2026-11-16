// Función que recibe dos variables por referencia usando apuntadores
void intercambiar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    printf("========================================\n");
    printf("  DEMOSTRACION DE APUNTADORES EN C\n");
    printf("========================================\n\n");

    // ----------------------------------------------------
    // 1. APUNTADORES CON VARIABLES SIMPLES
    // ----------------------------------------------------
    int numero = 15;
    int* ptr_numero = &numero; // El apuntador almacena la dirección de 'numero'

    printf("--- 1. VARIABLES SIMPLES ---\n");
    printf("Valor original de la variable: %i\n", numero);
    printf("Direccion de memoria de la variable (&numero): %p\n", (void*)&numero);
    printf("Direccion almacenada en el apuntador (ptr_numero): %p\n", (void*)ptr_numero);
    printf("Valor accedido a traves del apuntador (*ptr_numero): %i\n\n", *ptr_numero);

    // Modificando el valor indirectamente a través del apuntador
    *ptr_numero = 50;
    printf("Nuevo valor de la variable despues de modificar '*ptr_numero = 50': %i\n\n", numero);

    // ----------------------------------------------------
    // 2. INTERCAMBIO DE VALORES USANDO APUNTADORES (POR REFERENCIA)
    // ----------------------------------------------------
    int x = 5, y = 10;
    printf("--- 2. PASO POR REFERENCIA (FUNCION) ---\n");
    printf("Valores antes del intercambio: x = %i, y = %i\n", x, y);

    intercambiar(&x, &y); // Se envían las direcciones de memoria

    printf("Valores despues del intercambio: x = %i, y = %i\n\n", x, y);

    // ----------------------------------------------------
    // 3. APUNTADORES CON ARREGLOS Y ARITMETICA DE PUNTEROS
    // ----------------------------------------------------
    int edades[3] = { 20, 25, 30 };
    int* ptr_arreglo = edades; // El nombre del arreglo decae a un apuntador al primer elemento (&edades[0])

    printf("--- 3. ARREGLOS Y ARITMETICA DE APUNTADORES ---\n");
    printf("El nombre del arreglo apunta a la direccion: %p\n\n", (void*)ptr_arreglo);

    for (int i = 0; i < 3; i++) {
        printf("Elemento [%i]:\n", i);
        printf("  - Usando notacion de arreglo (edades[%i]): %i\n", i, edades[i]);
        printf("  - Usando aritmetica de punteros (*(ptr + %i)): %i\n", i, *(ptr_arreglo + i));
        printf("  - Direccion de memoria de este elemento: %p\n", (void*)(ptr_arreglo + i));
    }

    return 0;
}