#include <stdio.h>

main(){
  float salario;
  float minimoSalario = 1320.00;

  printf("Digite o seu salário atual:");
  scanf("%f", &salario);

  if(salario > minimoSalario){
    printf("Você ganha mais que um salário mínimo");
  } else if (salario = minimoSalario){
    printf("Você ganha um salário mínimo");
  } else {
    printf("Você ganha mais que um salário mínimo");
  }
  
}