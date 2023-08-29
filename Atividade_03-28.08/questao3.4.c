#include <stdio.h>

main(){
  float altura;
  float peso;

  printf("Digite sua altura em metros:\n");
  scanf("%f", &altura);
  printf("Digite seu peso em Kg:\n");
  scanf("%f", &peso);

  if (altura <= 1.7) {
    printf("Você é menor que 1.8m");
  } 
  else if (altura = 1.8){
    printf("Você mede 1.8m");
  }
  else {
    printf("Você é maior que 1.8m");
  }

  if (peso >= 60) {
    printf("\n Seu peso é maior que 60kg");
  } 
  else if (peso = 60){
    printf("Seu peso é igual a 60kg");
  } 
  else {
    printf("\n Seu peso é menor que 60kg");
  }
  
}


