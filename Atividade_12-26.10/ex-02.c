#include <stdio.h>
#include <stdlib.h>
#define TAM 500

void calcularLocacoesGratuitas(int n1[], int n2[]) {
    for (int i = 0; i < TAM; i++) {
        n2[i] = n1[i] / 15;
        printf("Cliente %i tem direito a %i locações gratuitas.\n", i + 1, n2[i]);
    }
}

int main() {
    int vetorAlugueis[TAM];
    int vetorLocacoesGratuitas[TAM];
    for (size_t i = 0; i < TAM; i++) {
        vetorAlugueis[i] = rand() % 100 + 1; // números aleatórios entre 1 e 100
    }

    calcularLocacoesGratuitas(vetorAlugueis, vetorLocacoesGratuitas);

    return 0;
}
