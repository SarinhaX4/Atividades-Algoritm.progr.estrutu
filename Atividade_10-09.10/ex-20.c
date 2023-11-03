#include <stdio.h>

int main() {
    int vetor[10];
    int vetorImpar[10];

    for (int i = 0; i < 10; i++) {
        printf("Por favor, insira um valor para a posição %i:\n", i);
        scanf("%i", &vetor[i]);

        if (vetor[i] % 2 == 1) {
            vetorImpar[i] = vetor[i];
        } else {
            vetorImpar[i] = 0;
        }
    }

    printf("Valores nos vetores:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posição %i - Vetor 1: %i, Vetor 2: %i\n", i, vetor[i], vetorImpar[i]);
    }

    return 0;
}
