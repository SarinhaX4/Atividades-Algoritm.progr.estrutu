#include <stdio.h>

//Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salario atual e o tempo de serviço de cada funcionário. Os funcionários com menor salario terão um aumento proporcionalmente maior do que os funcionários  com um salario maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de salário. Faça um programa que leia:

main{
  int salarioAtual, temServico, novoSalario, ajuste;

  printf("Digite o seu salário atual:");
  scanf("%d", &salarioAtual);

  printf("Digite o seu tempo de serviço em meses:");
  scanf("%d", &tempServico);

  if( salarioAtual <= 500 && tempServico < 12 ){
    ajuste = 500*(0.25);
    NovoSalario = ajuste + salarioAtual;
    printf("O seu novo salário será de: %d", NovoSalario);
  } else if(salarioAtual >= 1000 && tempServico >){
    
  }
  
}