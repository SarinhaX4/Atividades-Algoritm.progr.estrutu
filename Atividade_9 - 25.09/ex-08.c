#include <stdio.h>

int main() {
    int vetor[6] = {3, 4, 5, 6, 7, 8};

    printf("Valores do vetor na ordem reversa:\n");

    for (int i = 5; i >= 0; i--) {
        printf("%i\n", vetor[i]);
    }

    return 0;
}
