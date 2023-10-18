#include <stdio.h>

//2. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente. 

main(){
  int num;
  printf("Digite um número positivo natural:\n");
  scanf("%d", &num);
  for( int i = num ; i >= 0; i--){
    printf("%d \n", i);
  }
}

