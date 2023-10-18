#include <stdio.h>

//Dado três valores, A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for, se é um triangulo escaleno, um triangulo equilátero ou um triangulo isósceles.

main(){
  int a, b, c;
  printf("Digite o valor de A: ");
  scanf("%d", &a);
  printf("Digite o valor de B: ");
  scanf("%d", &b);
  printf("Digite o valor de C: ");
  scanf("%d", &c);

  if( a == 0 ||  b == 0 || c == 0 ){
    printf("Isso não é um triângulo!");
  } else if ( a == b && a != c){
    printf("Esse triângulo é isóceles!");
  } else if ( a == c &&  a != b){
    printf("Esse triângulo é isóceles!");
  } else if ( b == c && b != c){
    printf("Esse triângulo é isóceles!");
  } else if ( a != b && a != c & c != b){
    printf("Esse triângulo é escaleno!");
  } else if ( a == b && b == c && a == c){
    printf("Esse triângulo é equilátero!");
  } else{
    printf("erro");
  }
}