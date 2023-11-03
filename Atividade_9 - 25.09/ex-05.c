#include <stdio.h>

int main() {
    int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int numero_de_pares = 0;

    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            numero_de_pares++;
        }
    }

    printf("Há %i números pares no vetor.\n", numero_de_pares);

    return 0;
}
