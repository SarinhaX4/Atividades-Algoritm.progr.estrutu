#include <stdio.h>

int main() {
  int codigo, quantidade;
  float valor, total,
  cachorro = 10.10, 
  bauru = 8.30, 
  bauruOvo = 8.50
  hamburguer = 12.50,
  cheeseburger = 13.25;

  printf("Digite o código do pedido:\n");
  scanf("%d", &codigo);
  printf("Digite a quantidade:\n");
  scanf("%d", &quantidade);

  switch (codigo) {
    case 100:
      valor = cachorro;
      break;
    case 101:
      valor = bauru;
      break;
    case 102:
      valor = bauruOvo;
      break;
    case 103:
      valor = hamburguer;
      break;
    case 104:
      valor = cheeseburger;
      break;
    default:
      printf("Esse código não pertence ao nosso cardápio!\n");
      return 1;
  }

  total = quantidade * valor;
  printf("O valor total pago pelo lanche será de: %.2f\n", total);

  return 0;
}
