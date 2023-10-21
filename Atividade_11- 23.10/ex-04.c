#include <stdio.h>
#include <math.h>

// 4. Escreva uma função que receba por parâmetro a altura e o raio de um cilindro circular e
// retorne o volume desse cilindro. O volume de um cilindro circular.

float cilindro(float r, float h); 

int main(void){
  float altura;
  float raio;
  float v;

  printf("Digite a Altura:");
  scanf("%f", &altura);

  printf("Digite a raio:");
  scanf("%f", &raio);

  v = cilindro(raio, altura);

  printf("O volume desse cilindro será de: %.2f", v);
  
  return 0;
}

float cilindro(float r, float h){
  float v = 3.1414592 * pow(r,2) * h;
  return v;
}

