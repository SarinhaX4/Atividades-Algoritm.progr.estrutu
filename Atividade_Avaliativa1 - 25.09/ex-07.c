#include <stdio.h>

//7. Faça um algoritmo que leia as três notas de 30 alunos de uma turma. Para cada aluno, calcule a média ponderada, como segue: MP = ( n1*2 + n2*4 + n3*3 ) / 10

//Além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma mensagem "Aprovado", caso a média seja maior ou igual a sete, e uma mensagem "Reprovado", caso contrário. Ao final, mostre a média geral.


main(){
  float n1, n2, n3, mp, mg, mediaGeral, somatoriaGeral = 0;
  int i;

  for( i = 1  ; i <= 30 ; i++){
    printf("\nDigite a primeira nota: \n");
    scanf("%f", &n1);
    printf("Digite a segunda nota: \n");
    scanf("%f", &n2);
    printf("Digite a terceira nota: \n");
    scanf("%f", &n3);

    mp = (n1*2 + n2*4 + n3*3 ) / 10;
    printf("A média do aluno %i será: %.2f \n", i, mp);

    if( mp >= 7){
      printf("Você está Aprovado");
    } else{
      printf("Você está Reprovado");
    }
    somatoriaGeral = somatoriaGeral + mp;
  }
   mediaGeral = somatoriaGeral/30;
   printf("Media geral: %.2f", mediaGeral);
  return 0;
}
