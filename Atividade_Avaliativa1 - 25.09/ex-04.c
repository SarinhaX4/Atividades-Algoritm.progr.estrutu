#include <stdio.h>

//4. Dados três valores A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for classificá-los (imprimi-los) segundo os ângulos. (Triângulo Retângulo = 90º, Triângulo Obtusângulo > 90º, Triângulo Acutângulo < 90º)

int main() {
    float a, b, c;

    printf("Digite o valor do lado A: ");
    scanf("%f", &a);
    printf("Digite o valor do lado B: ");
    scanf("%f", &b);
    printf("Digite o valor do lado C: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) {
        if (a == 90 || b == 90 || c == 90) {
            printf("Os lados formam um Triângulo Retângulo.\n");
        } else if (a < 90 && b < 90 && c < 90) {
            printf("Os lados formam um Triângulo Acutângulo.\n");
        } else {
            printf("Os lados formam um Triângulo Obtusângulo.\n");
        }
    } else {
        printf("Os lados não formam um triângulo.\n");
    }

    return 0;
}