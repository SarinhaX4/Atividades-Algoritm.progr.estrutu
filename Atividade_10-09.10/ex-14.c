#include <stdio.h>

int main() {
    int vetor[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite um valor para a posição %i:\n", i);
        scanf("%i", &vetor[i]);
    }

    for (int i = 0; i < 9; i++) {
        for (int a = i + 1; a < 10; a++) {
            if (vetor[i] == vetor[a]) {
                printf("O número %i aparece nas posições %i e %i.\n", vetor[i], i, a);
            }
        }
    }

    return 0;
}
