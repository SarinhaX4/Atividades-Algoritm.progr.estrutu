#include <stdio.h>

//1. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.

main(){
  int num = 0;

  printf("Digite um número positivo natural:\n");
  scanf("%d", &num);
  for( int i = 0; i <= num; i ++){
    printf("%d \n", i);
  }
  
}
