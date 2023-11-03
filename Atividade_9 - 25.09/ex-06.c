#include <stdio.h>

int main() {
    int vetor[10];
    int maiorNumero = 0;
    int menorNumero;

    for (int i = 0; i < 10; i++) {
        printf("Por favor, insira um valor para a posição %i:\n", i);
        scanf("%i", &vetor[i]);
    }

    menorNumero = vetor[0];

    for (int i = 0; i < 10; i++) {
        if (vetor[i] > maiorNumero) {
            maiorNumero = vetor[i];
        }

        if (vetor[i] < menorNumero) {
            menorNumero = vetor[i];
        }
    }

    printf("O maior número no vetor é: %i\n", maiorNumero);
    printf("O menor número no vetor é: %i\n", menorNumero);

    return 0;
}
