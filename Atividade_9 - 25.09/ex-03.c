#include <stdio.h>
#include <math.h>

int main() {
    float vetor_a[5], vetor_resultado[5];

    printf("Por favor, insira cinco números para o vetor \"A\":\n");

    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%f", &vetor_a[i]);
        vetor_resultado[i] = vetor_a[i] * vetor_a[i];
        // vetor_resultado[i] = pow(vetor_a[i], 2);
    }

    printf("Resultados ao elevar ao quadrado:\n");
    for (int i = 0; i < 5; i++) {
        printf("%.0f\n", vetor_resultado[i]);
    }

    return 0;
}
