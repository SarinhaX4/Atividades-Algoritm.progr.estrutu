// Com a proposta para ampliação da terceirização da mão de obra, o Ministério da Fazenda está
// empenhado em elaborar uma análise sobre o recebimento de salário regular através do registro
// em carteira profissional dos funcionários no país. Assim, elabore um algoritmo que obtenha,
// para cada assalariado, com carteira profissional assinada, o seu sexo M(masculino) e
// F(feminino) e o valor de seu salário, devendo este salário ser maior que um real (R$1,00). Seu
// algoritmo deverá analisar e classificar este assalariado em Acima, Igual ou Abaixo do salário
// mínimo. Sabe-se que o salário mínimo nacional é de R$ 1400,00. Após a leitura dos dados de
// cada assalariado cadastrado pelo ministério deverá ser apresentado o seu salário em reais, a
// classificação por extenso em relação ao salário mínimo e o sexo por extenso (Masculino ou
// Feminino)

#include <stdio.h>

char obterSexo() {
    char sexo;
    printf("Por favor, informe seu sexo (M/F): ");
    scanf(" %c", &sexo);
    return sexo;
}

double obterSalario() {
    double salario;
    printf("Informe seu salário: R$ ");
    scanf("%lf", &salario);

    if (salario > 1) {
        return salario;
    } else {
        printf("O valor inserido não é suportado.\n");
        return -1; 
    }
}

int classificarSalario(double salario) {
    if (salario < 1400) {
        return 1; 
    } else if (salario == 1400) {
        return 2; 
    } else {
        return 3; 
    }
}

void mostrarInformacoes(char sexo, double salario, int classificacao) {
    printf("\nInformações do Assalariado:\n");

    printf("Sexo: %s\n", (sexo == 'm' || sexo == 'M') ? "Masculino" : "Feminino");
    printf("Salário: R$%.2lf\n", salario);

    switch (classificacao) {
        case 1:
            printf("Classificação: Abaixo do salário mínimo\n");
            break;
        case 2:
            printf("Classificação: Igual ao salário mínimo\n");
            break;
        case 3:
            printf("Classificação: Acima do salário mínimo\n");
            break;
        default:
            printf("Classificação inválida\n");
    }
}

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int opcao = 1;
    char sexo;
    double salario;
    int classificacaoSalario;
    int contAbaixo = 0;
    int contAcima = 0;

    do {
        sexo = obterSexo();
        salario = obterSalario();

        if (salario != -1) { 
            classificacaoSalario = classificarSalario(salario);

            if (classificacaoSalario == 1) {
                contAbaixo++;
            } else if (classificacaoSalario == 3) {
                contAcima++;
            }

            mostrarInformacoes(sexo, salario, classificacaoSalario);

            printf("\nDigite 1 para continuar, digite 0 para finalizar: ");
            scanf("%d", &opcao);
            limparBuffer();
        } else {
            opcao = 1;
            limparBuffer();
        }

    } while (opcao == 1);

    printf("\nPesquisa encerrada.\nAssalariados com salário abaixo do salário mínimo: %i.\nAssalariados com salário acima do salário mínimo: %i.\n", contAbaixo, contAcima);

    return 0;
}

