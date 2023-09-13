#include <stdio.h>

//Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence, considerando só os seguintes valores:

main() {
  int cidades;

  printf("Digite o DDD pertencente a cidade:");
  scanf("%d", &cidades);

  switch(cidades){
    case 66:
      printf("O DDD 61 pertence a Brasília!");
    break;
    case 71:
      printf("O DDD 71 pertence a Bahia!");
    break;
    case 11:
      printf("O DDD 11 pertence a São Paulo!");
    break;
    case 21:
      printf("O DDD 21 pertence a Rio De Janeiro!");
    break;
    case 32:
      printf("O DDD 32 pertence a Juiz de Fora!");
    break;
    case 19:
      printf("O DDD 19 pertence a Campinas!");
    break;
    case 27:
      printf("O DDD 27 pertence a Vitória!");
    break;
    case 31:
    printf("O DDD 31 pertence a Belo Horizonte!");
    break;
    default:
    printf("Este DDD não se encontra na nossa base de dados:");
  }
  return 0;
}