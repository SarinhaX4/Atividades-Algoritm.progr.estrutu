#include <stdio.h>

int main() {
    float notas[15];
    float somaNotas = 0;
    float media;

    for (int i = 0; i < 15; i++) {
        printf("Por favor, insira a nota do aluno %i: ", i + 1);
        scanf("%f", &notas[i]);
        somaNotas += notas[i];
    }

    media = somaNotas / 15;

    printf("A média geral das notas é: %.2f\n", media);

    return 0;
}
