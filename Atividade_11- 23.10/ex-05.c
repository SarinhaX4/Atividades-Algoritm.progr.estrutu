#include <stdio.h>
#include <math.h>

//Escreva uma função para o cálculo do volume de uma esfera

float esfera(float r); 

int main(){
  float v;
  float raio;

  printf("Digite o valor do raio:");
  scanf("%f", &raio );
  
  v = esfera(raio);

  printf("O volume dessa esfera será: %.2f", v);
}
float esfera( float r){
  float v = 4.0/3.0 * 3.1414592 * pow(r,3);

  return v;
}

