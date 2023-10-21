#include <stdio.h>
#include <string.h>

//1. Escreva uma função que receba por parâmetro dois números e retorne o maior deles.

float calculo(float n1, float n2); // Declaração da função antes de main

int main(void) {
    float n1, n2;
    float maior;

    printf("Digite dois números: ");
    scanf("%f %f", &n1, &n2); // Remova a vírgula e adicione um espaço

    maior = calculo(n1, n2); // Chame a função calculo e atribua o resultado a 'maior'

    printf("O maior entre %.2f e %.2f é %.2f\n", n1, n2, maior); // Correção: Remova os '&' e adicione '\n' no final

    return 0;
}

float calculo(float n1, float n2) {
  float maior;

  if (n1 > n2) {
    maior = n1;
  } else {
    maior = n2; // Correção: Use 'n2' para 'maior' se n2 for maior ou igual a n1
  }

  return maior;
}

