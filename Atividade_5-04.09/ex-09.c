#include <stdio.h>

//Faça um programa que leia: • o valor do salario atual do funcionário;  • o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).Use as tabelas abaixo para calcular o salario reajustado deste funcionário e imprima o valor do salario final reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum aumento. 



main() {

    float tempo;
    float salarioAtual, salarioReajustado = 0, bonus, salarioFinal;

    printf("Digite o salario");
    scanf("%f", &salarioAtual);
    
    printf("DIgite o tempo de servico");
    scanf("%f", &tempo);

    if(salarioAtual < 500){
        salarioReajustado = salarioAtual * 1.25;
    }else if(salarioAtual > 500 && salarioAtual < 1000){
        salarioReajustado = salarioAtual * 1.2;
    }else if(salarioAtual > 1000 && salarioAtual < 1500){
        salarioReajustado = salarioAtual * 1.15;
    }else if(salarioAtual > 1500 && salarioAtual < 2000){
        salarioReajustado = salarioAtual * 1.1;
    }else{
        salarioReajustado = salarioAtual;
    }

    if(tempo < 1){
        bonus = 0;
    }else if(tempo >= 1 && tempo < 3){
        bonus = 100;
    }else if(tempo >= 3 && tempo < 6){
        bonus = 200;
    }else if(tempo >= 6 && tempo < 10){
        bonus = 300;
    }else{
        bonus = 500;
    }

    salarioFinal = salarioReajustado + bonus;

    if(salarioFinal == salarioAtual){
        printf("Não teve aumento");
    }else{
        printf(" teve aumento");
        printf("Salario final: %f", salarioFinal);
    }
}
