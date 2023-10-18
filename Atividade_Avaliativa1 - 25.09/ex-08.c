#include <stdio.h>

// //8. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:  

// // a) média do salário da população;

// // b) média do número de filhos;

// // c) maior salário;

// // d) percentual de pessoas com salário até R$100,00.

// // O final da leitura de dados se dará com a entrada de um salário negativo. (Use o comando do - while) .


int main() {
    float quantSalario = 0,
        contSalario = 0,
        mediaSalario,
        mediaFilhos,
        salario,
        salarioMaior = 0, 
        percentual,
        quantFilhos = 0,
        filhos,
        contFilhos = 0,
        contSalAteCem = 0;

    do {
        printf("Digite a quantidade de filhos: ");
        scanf("%f", &quantFilhos);
        contFilhos += quantFilhos;

        printf("Digite o salário (-1 para encerrar): ");
        scanf("%f", &salario);

        if (salario != -1) {
            if (salario > 0) {
                quantSalario += salario;
                contSalario++;
            }

            if (salario > salarioMaior) {
                salarioMaior = salario;
            }
        }
    } while (salario != -1);

    if (contSalario > 0) {
        mediaSalario = quantSalario / contSalario;
        mediaFilhos = contFilhos / contSalario;
        percentual = (contSalAteCem / contSalario) * 100;

    } else {
        mediaSalario = 0;
        mediaFilhos = 0;
        percentual = 0;
    }

    printf("Média do número de filhos: %.2f\n", mediaFilhos);
    printf("Média do salário: %.2f\n", mediaSalario);
    printf("Porcentagem de pessoas que ganham até R$100,00: %.2f por cento\n", percentual);
    printf("Maior salário: %.2f\n", salarioMaior);

    return 0;
}

