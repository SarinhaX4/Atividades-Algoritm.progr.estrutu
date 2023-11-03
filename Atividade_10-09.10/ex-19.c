#include <stdio.h>

#define TAM 50

int main() {
    int vetor[TAM];
    int resultado;

    for (int i = 0; i < TAM; i++) {
        printf("Por favor, insira um valor para a posição %i:\n", i);
        scanf("%i", &vetor[i]);
    }

    printf("Resultados dos cálculos:\n");
    for (int i = 0; i < TAM; i++) {
        resultado = (vetor[i] + 5 * vetor[i]) % (vetor[i] + 1);
        printf("%i\n", resultado);
    }

    return 0;
}
