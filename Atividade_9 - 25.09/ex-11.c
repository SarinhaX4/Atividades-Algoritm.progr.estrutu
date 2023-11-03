#include <stdio.h>

int main() {
    float vetor[10] = {-3, -2, -1, 0, 1, 2, 3, 4, 5, 6};
    int quantidadeNegativos = 0;
    float somaPositivos = 0;

    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            quantidadeNegativos++;
        }
        if (vetor[i] > 0) {
            somaPositivos += vetor[i];
        }
    }

    printf("Quantidade de números negativos: %i\n", quantidadeNegativos);
    printf("Soma dos valores positivos no vetor: %.2f\n", somaPositivos);

    return 0;
}
