#include <stdio.h>

// Criar um algoritmo que informe a quantidade total de calorias de uma refeição
// a partir do usuário que deverá informar o prato, a sobremesa e a bebida

main() {
  int prato, sobremesa, bebida;
  float totalK, caloriasPrato = 0, caloriasBebida = 0, caloriasSobremesa = 0;

  printf(" Escolha a numeração de seu prato: \n\n 1.VEGETARIANO \n 2.PEIXE \n "
         "3.FRANGO \n 4.CARNE \n");
  scanf("%d", &prato);

  printf("Escolha a numeração de sua bebida: \n\n 1.CHÁ \n 2.SUCO DE LARANJA "
         "\n 3.SUCO DE MELAO \n 4.REFRIGERANTE DIET \n");
  scanf("%d", &bebida);

  printf("Escolha a numeração de sua sobremesa: \n\n 1.ABACAXI \n 2.SORVETE "
         "DIET \n 3.MOUSE DIET \n 4.MOUSE CHOCOLATE \n");
  scanf("%d", &sobremesa);

  printf("Suas escolhas foram:\n");

  switch (prato) {
  case 1:
    caloriasPrato = 180;
    printf("1 - Vegetariano\n");
    break;
  case 2:
    caloriasPrato = 230;
    printf("2 - Peixe\n");
    break;
  case 3:
    caloriasPrato = 250;
    printf("3 - Frango\n");
    break;
  case 4:
    caloriasPrato = 350;
    printf("4 - Carne\n");
    break;
  default:
    printf("Um dos código não pertence ao nosso cardápio!\n");
    return 1;
  }

  switch (bebida) {
  case 1:
    caloriasBebida = 20;
    printf("1 - Chá\n");
    break;
  case 2:
    caloriasBebida = 70;
    printf("2 - Suco Laranja\n");
    break;
  case 3:
    caloriasBebida = 100;
    printf("3 - Suco Melão\n");
    break;
  case 4:
    caloriasPrato = 65;
    printf("4 - Refrigerante Diet\n");
    break;
  default:
    printf("Um dos código não pertence ao nosso cardápio!\n");
    return 2;
  }

  switch (sobremesa) {
  case 1:
    caloriasSobremesa = 75;
    printf("1 - Abacaxi\n");
    break;
  case 2:
    caloriasSobremesa = 110;
    printf("2 - Sorvete Diet\n");
    break;
  case 3:
    caloriasSobremesa = 170;
    printf("3 - Mouse Diet\n");
    break;
  case 4:
    caloriasSobremesa = 200;
    printf("4 - Mouse Chocolate\n");
    break;
  default:
    printf("Um dos código não pertence ao nosso cardápio!\n");
    return 3;
  }

  totalK = caloriasPrato + caloriasBebida + caloriasSobremesa;

  printf("\nO total de calorias de sua refeição será de: %.2f", totalK);

  return 0;
  
  
  
}