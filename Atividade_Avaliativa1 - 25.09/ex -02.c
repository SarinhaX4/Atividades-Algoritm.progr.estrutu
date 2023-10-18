#include <stdio.h>

// Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico. 

main(){
  float chico = 1.50 , ze = 1.10, cont = 0;

  for(int i = 0; ze <= chico; i++){
  chico = chico + 0.02;
  ze = ze + 0.03;
  cont++;
}
  printf("Serão necessários %.2f anos para que Zé seja maior que Chi", cont);
}