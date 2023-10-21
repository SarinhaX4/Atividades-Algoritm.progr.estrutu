#include <stdio.h>
#include <string.h>

// 2. Faça uma função que receba um número inteiro entre 1 a 12 e imprima em tela o mês e a
// sua quantidade de dias de acordo com o número digitado pelo usuário. Exemplo:
// Entrada = 4. Saída = abril.

void mostraMes( int num){
  int dias;
  char nomeMes[15];

  printf("Escreva um número para representar o mês:");
  scanf("%d", &num);
  switch(num){
    case 1: case 3 : case 5 : case 7 : case 8 : case 10 : case 12:
      dias = 31;
      if(num == 1){
        strcpy( nomeMes, "Janeiro");
      } else if ( num == 3){
        strcpy( nomeMes, "marco");
      } else if (num == 5) {
        strcpy( nomeMes, "Maio");
      } else if (num == 7 ){
        strcpy(nomeMes, "Julho");
      } else if (num == 8 ){
        strcpy( nomeMes, "Agosto");
      } else if (num == 10){
        strcpy( nomeMes, "Outubro");
      } else{
        strcpy( nomeMes, "Dezembro");
      }
    break;
    case 4 : case 6 : case 9 : case 11:
      dias = 30;
      if ( num == 4 ){
        strcpy( nomeMes, "Abril");
      } else if ( num == 6 ){
        strcpy( nomeMes, "Junho");
      } else if ( num == 9 ){
      strcpy( nomeMes, "Setembro");
      } else{
      strcpy( nomeMes, "Novembro");
      }
      break;
    case 2:
      dias = 28;
      strcpy( nomeMes, "Feveireiro");
    break;
    default:
      printf("mes inválido");
  }
  printf("Mês: %s ", nomeMes);
  printf("\nEsse mês é de %d dias", dias);
} // fim função

int main(){
  int n = 2;
  mostraMes(n);
}
