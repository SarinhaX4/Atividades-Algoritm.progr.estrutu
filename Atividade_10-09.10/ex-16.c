#include <stdio.h>

int main() {
    int vetor[5] = {0, 1, 2, 3, 4};
    int codigo;

    printf("Por favor, insira o código:\n");
    scanf("%i", &codigo);

    if (codigo == 1) {
        printf("Exibindo o vetor na ordem original:\n");
        for (int i = 0; i < 5; i++) {
            printf("%i\n", vetor[i]);
        }
    } else if (codigo == 2) {
        printf("Exibindo o vetor na ordem reversa:\n");
        for (int i = 4; i >= 0; i--) {
            printf("%i\n", vetor[i]);
        }
    } else {
        printf("Código inválido.\n");
    }

    return 0;
}
