#include <stdio.h>

int main() {
    int vetorA[10];
    int vetorB[10];
    int vetorC[20];

    for (int i = 0; i < 10; i++) {
        printf("Por favor, insira o valor para a posição %i do vetor A:\n", i);
        scanf("%i", &vetorA[i]);
        printf("Por favor, insira o valor para a posição %i do vetor B:\n", i);
        scanf("%i", &vetorB[i]);
    }

    int indiceC = 0;

    for (int i = 0; i < 10; i++) {
        vetorC[indiceC] = vetorA[i];
        indiceC++;
        vetorC[indiceC] = vetorB[i];
        indiceC++;
    }

    printf("Valores no vetor C:\n");
    for (int i = 0; i < 20; i++) {
        printf("%i\n", vetorC[i]);
    }

    return 0;
}
