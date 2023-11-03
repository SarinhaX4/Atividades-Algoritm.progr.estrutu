#include <stdio.h>

int main() {
    int vetor[6] = {3, 4, 5, 6, 7, 8};

    printf("Números pares no vetor:\n");

    for (int i = 5; i >= 0; i--) {
        if (vetor[i] % 2 == 0) {
            printf("%i\n", vetor[i]);
        }
    }

    return 0;
}
