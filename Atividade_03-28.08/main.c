#include <stdio.h>

main() {
  int idade;
  char nome[40];

  printf("Digite seu nome:");
  fgets(nome, 40, stdin);

  printf("Digite sua idade:");
  scanf("%d", &idade);

  if(idade < 18){
    printf("%s", nome);
    printf("é menor de idade");
  }
  else{
    printf("%s", nome);
    printf("é maior de idade");
  }
}
