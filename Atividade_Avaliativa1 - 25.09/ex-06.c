#include <stdio.h>

//6. Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0). Se o ponto estiver na origem, escreva a mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação. 

int main() {
    int x, y;

    printf("Digite o valor de x: ");
    scanf("%i", &x);
    printf("Digite o valor de y: ");
    scanf("%i", &y);

    if (x > 0 && y > 0) {
        printf("O ponto (%d, %d) está no primeiro quadrante.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("O ponto (%d, %d) está no segundo quadrante.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("O ponto (%d, %d) está no terceiro quadrante.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("O ponto (%d, %d) está no quarto quadrante.\n", x, y);
    } else if (x == 0 && y > 0) {
        printf("O ponto (%d, %d) está sobre o eixo y.\n", x, y);
    } else if (y == 0 && x > 0) {
        printf("O ponto (%d, %d) está sobre o eixo x.\n", x, y);
    } else if (x == 0 && y == 0) {
        printf("O ponto (%d, %d) está na origem.\n", x, y);
    } else {
        printf("O ponto (%d, %d) está em um local não definido.\n", x, y);
    }

    return 0;
}
