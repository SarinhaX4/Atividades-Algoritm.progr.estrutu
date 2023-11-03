#include <stdio.h>
#define TAM 5

int main() {
    int vetNum[TAM] = {1, 2, 3, 4, 5};
    int vetAltura[TAM] = {150, 160, 170, 180, 190};
    int menorAltura, maiorAltura, numMenor, numMaior;

    menorAltura = vetAltura[0];
    numMenor = vetNum[0];
    maiorAltura = vetAltura[0];
    numMaior = vetNum[0];

    for (int i = 1; i < TAM; i++) {
        if (vetAltura[i] > maiorAltura) {
            maiorAltura = vetAltura[i];
            numMaior = vetNum[i];
        } else if (vetAltura[i] < menorAltura) {
            menorAltura = vetAltura[i];
            numMenor = vetNum[i];
        }
    }

    printf("A maior altura é: %i e pertence ao número: %i\n", maiorAltura, numMaior);
    printf("A menor altura é: %i e pertence ao número: %i\n", menorAltura, numMenor);

    return 0;
}
