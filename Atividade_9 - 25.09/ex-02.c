#include <stdio.h>

int main() {
    int array_de_numeros[6];

    printf("Por favor, insira seis números:\n");

    for (int i = 0; i < 6; i++) {
        printf("Número %d: ", i + 1);
        scanf("%i", &array_de_numeros[i]);
    }

    printf("Números inseridos:\n");
    for (int i = 0; i < 6; i++) {
        printf("%i\n", array_de_numeros[i]);
    }

    return 0;
}
