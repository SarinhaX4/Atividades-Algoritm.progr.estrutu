#include <stdio.h>

// //3. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares (sem usar comando condicional). 

main(){
  int num, i = 0;
  printf("Digite um número inteiro positivo: ");
  scanf("%d", &num);

  for ( int i = num ; i >= 0 ; i--){
    i--;
  }
  printf(" Os números impares dentro desse intervalo são: %d",i);
  
}
