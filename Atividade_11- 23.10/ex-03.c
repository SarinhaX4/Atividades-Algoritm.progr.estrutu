// #include <stdio.h>
// #include <string.h>

// // 3. Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a
// // retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) * (5.0/9.0),
// // sendo F a temperatura em Fahrenheit e C a temperatura em Celsius

int main(void){
  float tempF;

  printf("Digite uma temperatura em Fahrenheit para converter: ");
  scanf("%f", &tempF); 
  
  float conversao ( float c);
  float c = conversao(tempF);

  printf("Essa temperarura em fahrenheit equivale a %.1f °C", c);
  
  return 0;
};

float conversao( float f){
  float c = (f - 32) * (5.0/9.0);

  return c;
};