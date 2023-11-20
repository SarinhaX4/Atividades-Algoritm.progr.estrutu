// // Em uma fábrica de peças, o salário base dos operários é de R$ 600,00. Além do salário base,
// // cada operário recebe um adicional de produtividade baseado na quantidade de peças fabricadas
// // por mês. Este adicional é pago de acordo com o seguinte critério:
// // - Se o número de peças for inferior ou igual a 50, não existe adicional de produtividade;
// // - Se o número de peças for superior a 50 e inferior ou igual a 80, o adicional de produtividade será de R$ 0,50 para cada peça fabricada acima de 50;
// // -  Se o número de peças for superior a 80, o adicional de produtividade será de R$ 0,50 para cada peça fabricada acima de 50 até 80 e de R$ 0,75 por peça fabricada acima das
// // 80.

#include <stdio.h>

//Função para validar a quantidade
int validaQuantidade() {
    int quantidade;

    printf("Digite a quantidade de pecas fabricadas pelo funcionario (-1 para encerrar): ");
    scanf("%d", &quantidade);

    if (quantidade == -1) {
        return -1;
    }

    while (quantidade < 0) {
        printf("Quantidade invalida. Digite novamente: ");
        scanf("%d", &quantidade);
    }

    return quantidade;
}
//Função para fazer o cálculo
float calculaSalario(int quantidade) {
    float salarioBase = 600.0;
    float adicional1 = 0.50;
    float adicional2 = 0.75;
    int limite1 = 50;
    int limite2 = 80;

    float salario = salarioBase;

    if (quantidade > limite1) {
        salario += (quantidade * adicional1);
        if (quantidade > limite2) {
              salario += (quantidade * adicional2);
        }
    }

    return salario;
}

//Função para mostrar o valor final
void mostraFinal(float salario) {
    printf("O salario total do funcionario e: R$ %.2f\n\n", salario);
}

//principal
int main() {
    int quantidade;
    float salario;

    while (1) {
        quantidade = validaQuantidade();

        if (quantidade == -1) {
            break;
        }

        salario = calculaSalario(quantidade);

        mostraFinal(salario);
    }

    return 0;
}

