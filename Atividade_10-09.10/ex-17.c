#include <stdio.h>

int main() {
    int vetor[10];

    for (int i = 0; i < 10; i++) {
        printf("Por favor, insira o valor para a posição %i:\n", i);
        scanf("%i", &vetor[i]);
    }

    printf("Valores do vetor após a filtragem:\n");
    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
        printf("%i\n", vetor[i]);
    }

    return 0;
}
