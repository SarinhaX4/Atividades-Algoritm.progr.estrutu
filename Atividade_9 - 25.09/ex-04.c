#include <stdio.h>

int main() {
    int vetor[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    int x, y, soma;

    printf("Por favor, insira um valor para X (entre 0 e 8):\n");
    scanf("%i", &x);
    fflush(stdin);

    printf("Agora, insira um valor para Y (entre 0 e 8):\n");
    scanf("%i", &y);

    if ((x >= 0 && x <= 8) && (y >= 0 && y <= 8)) {
        soma = vetor[x] + vetor[y];
        printf("A soma das posições X e Y no vetor é igual a: %i\n", soma);
    } else {
        printf("Valores fora da faixa permitida.\n");
    }

    return 0;
}
