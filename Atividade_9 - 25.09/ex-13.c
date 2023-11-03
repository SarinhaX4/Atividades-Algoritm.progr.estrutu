#include <stdio.h>

int main() {
    int vetor[5];
    int menorNumero;
    int maiorNumero;
    int posicaoMenor, posicaoMaior;

    printf("Digite o valor na posição 0:\n");
    scanf("%i", &vetor[0]);
    menorNumero = vetor[0];
    maiorNumero = vetor[0];

    for (int i = 1; i < 5; i++) {
        printf("Digite o valor na posição %i:\n", i);
        scanf("%i", &vetor[i]);

        if (vetor[i] > maiorNumero) {
            maiorNumero = vetor[i];
            posicaoMaior = i;
        }

        if (vetor[i] < menorNumero) {
            menorNumero = vetor[i];
            posicaoMenor = i;
        }
    }

    printf("O maior número, %i, está na posição %i.\n", maiorNumero, posicaoMaior);
    printf("O menor número, %i, está na posição %i.\n", menorNumero, posicaoMenor);

    return 0;
}
