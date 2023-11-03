#include <stdio.h>

void realizarTrocas(int matriz[10][10]) {
    // Troca de elementos entre as linhas 2 e 8
    for (int i = 0; i < 10; i++) {
        int substituicao = matriz[1][i];
        matriz[1][i] = matriz[7][i];
        matriz[7][i] = substituicao;
    }

    // Troca de elementos entre as colunas 4 e 10
    for (int i = 0; i < 10; i++) {
        int substituicao = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = substituicao;
    }

    // Troca de elementos entre a diagonal principal e diagonal secundária
    for (int i = 0; i < 10; i++) {
        int substituicao = matriz[i][i];
        matriz[i][i] = matriz[i][9 - i];
        matriz[i][9 - i] = substituicao;
    }

    // Troca de elementos entre a linha 5 e a coluna 10
    for (int i = 0; i < 10; i++) {
        int substituicao = matriz[4][i];
        matriz[4][i] = matriz[i][9];
        matriz[i][9] = substituicao;
    }
}

int main() {
    int matrizA[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("Digite o valor para a coluna %i e linha %i: ", j, i);
            scanf("%i", &matrizA[i][j]);
        }
        printf("\n");
    }

    realizarTrocas(matrizA);

    printf("Matriz após as trocas:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%2i ", matrizA[i][j]);
        }
        printf("\n");
    }

    return 0;
}
