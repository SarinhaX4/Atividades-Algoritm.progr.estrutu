#include <stdio.h>

int main() {
    int vetor[10] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int maiorValor = 0;
    int posicaoMaior = 0;

    for (int i = 0; i < 10; i++) {
        if (vetor[i] > maiorValor) {
            maiorValor = vetor[i];
            posicaoMaior = i;
        }
    }

    printf("O maior número, %i, está na posição %i do vetor.\n", maiorValor, posicaoMaior);

    return 0;
}
