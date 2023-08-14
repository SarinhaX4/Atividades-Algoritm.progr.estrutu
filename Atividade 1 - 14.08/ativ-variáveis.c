#include <stdio.h>

main() {
  char nome[50];
  char idade[25];
  char matricula[25];
  char endereco[50];
  char curso[25];
  char periodo[25];
  char disciplina[25];

  printf("Digite o seu nome \n");
  scanf("%[^\n]", nome);

  fflush(stdin);
  fgets(idade, 25, stdin);

  printf("Digite a sua idade\n");
  scanf("%[^\n]", idade);

  fflush(stdin);
  fgets(matricula, 25, stdin);

  printf("Digite o apenas os números de sua matrícula\n");
  scanf("%[^\n]", matricula);
  
  fflush(stdin);
  fgets(endereco, 50, stdin);

  printf("Digite o seu endereço\n");
  scanf("%[^\n]", endereco);

  fflush(stdin);
  fgets(curso, 25, stdin);

  printf("Digite o seu curso \n");
  scanf("%[^\n]", curso);

  fflush(stdin);
  fgets(periodo, 25, stdin);

  printf("Digite o seu período \n");
  scanf("%[^\n]", periodo);

  fflush(stdin);
  fgets(disciplina, 25, stdin);

  printf("Digite o sua Disciplina \n");
  scanf("%[^\n]", disciplina);

  printf("O seu nome de usuário é: %s", nome);
  printf("\nA sua idade é: %s", idade);
  printf("\nO número de sua matrícula é: %s", matricula);
  printf("\nO seu endereço é: %s", endereco);
  printf("\nO seu curso é: %s", curso);
  printf("\nO seu período é: %s", periodo);
  printf("\nA sua disciplina é: %s", disciplina);
}
