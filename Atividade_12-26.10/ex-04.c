#include <stdio.h>

void calcularSomaPorColuna(int matriz[61][10]) {
    for (int i = 0; i < 10; i++) {
        int soma = 0;
        for (int j = 0; j < 60; j++) {
            soma += matriz[j][i];
        }
        matriz[60][i] = soma;
    }
}

int main() {
    int matrizDados[61][10];
    calcularSomaPorColuna(matrizDados);

    return 0;
}
