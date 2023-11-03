#include <stdio.h>

int main() {
    int vetorA[5];
    int vetorB[5];
    int produto;
    int produtoSoma = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite um número para a posição %i do primeiro vetor:\n", i);
        scanf("%i", &vetorA[i]);
        printf("Digite um número para a posição %i do segundo vetor:\n", i);
        scanf("%i", &vetorB[i]);
    }

    for (int i = 0; i < 5; i++) {
        produto = vetorA[i] * vetorB[i];
        produtoSoma += produto;
    }

    printf("Valores nos vetores A e B:\n");
    for (int i = 0; i < 5; i++) {
        printf("Posição %i - Primeiro vetor: %i, Segundo vetor: %i\n", i, vetorA[i], vetorB[i]);
    }

    printf("Resultado do produto escalar: %i\n", produtoSoma);

    return 0;
}
