#include <stdio.h>

int main() {
    int valores[6] = {1, 0, 5, -2, -5, 7};
    int resultado;

    resultado = valores[0] + valores[1] + valores[5];

    printf("Resultado: %i\n", resultado);

    valores[4] = 100;

    printf("Valores atualizados:\n");
    for (int i = 0; i < 6; i++) {
        printf("Elemento %d: %i\n", i, valores[i]);
    }

    return 0;
}
