#include <stdio.h>
#include <math.h>

//5. Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:

int main() {
    float x1, x2, y1, y2, dist;

    printf("Digite o valor de x1: ");
    scanf("%f", &x1);
    printf("Digite o valor de y1: ");
    scanf("%f", &y1);
    printf("Digite o valor de x2: ");
    scanf("%f", &x2);
    printf("Digite o valor de y2: ");
    scanf("%f", &y2);

    dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("A distância entre os pontos (%.2f, %.2f) e (%.2f, %.2f) é: %.4f\n", x1, y1, x2, y2, dist);

    return 0;
}
