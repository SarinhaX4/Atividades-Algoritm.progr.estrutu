#include <stdio.h>

int main() {
    int vetor[5];
    int maiorNumero = 0;
    int menorNumero;
    float somatoria = 0;
    float media;

    printf("Por favor, insira o valor para a posição 0:\n");
    scanf("%i", &vetor[0]);
    menorNumero = vetor[0];
    if (vetor[0] > maiorNumero) {
        maiorNumero = vetor[0];
    }

    for (int i = 1; i < 5; i++) {
        printf("Por favor, insira o valor para a posição %i:\n", i);
        scanf("%i", &vetor[i]);

        if (vetor[i] > maiorNumero) {
            maiorNumero = vetor[i];
        }

        if (vetor[i] < menorNumero) {
            menorNumero = vetor[i];
        }
    }

    printf("=== Valores Inseridos ===\n");
    for (int i = 0; i < 5; i++) {
        printf("%i, ", vetor[i]);
        somatoria += vetor[i];
    }

    media = somatoria / 5;

    printf("\nO maior número inserido: %i\n", maiorNumero);
    printf("O menor número inserido: %i\n", menorNumero);
    printf("A média dos valores é de: %.2f\n", media);

    return 0;
}
