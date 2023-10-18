#include <stdio.h>

//5. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. 

main(){
  int soma = 0, contador = 0, par = 0;

  while( contador < 50){
    par = par + 2;
    soma = soma + par;
    contador++;
    printf("\n%d, %d, %d", contador,par, soma);
  }
}
