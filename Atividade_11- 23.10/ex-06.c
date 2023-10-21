#include <stdio.h>
#include <math.h>

// Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa. Calcule e retorne o IMC (Índice de Massa Corporal) dessa pessoa:

float calculoImc() {
  float peso, altura, imc;
  printf("Digite o peso (em kg) e a altura (em metros): ");
  scanf("%f %f", &peso, &altura);
  imc = peso / (altura * altura);
  return imc;
}

void verSituacao(float imc) {
  if (imc < 16) {
    printf("Magro\n");
  } else if (imc >= 16 && imc < 25) {
    printf("Peso Normal\n");
  } else if (imc >= 25) {
    printf("Obeso\n");
  }
}

int main() {
  float imc = calculoImc();
  printf("O seu IMC é: %.2f\n", imc);

  verSituacao(imc);

  return 0;
}

