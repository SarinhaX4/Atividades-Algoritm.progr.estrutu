#include <stdio.h>

// 7. Uma pesquisa sobre algumas características físicas da população de uma determinada região coletou os seguintes dados, referentes a cada habitante:

// a) sexo (m e f);

// b) cor dos olhos (a (azuis), v (verdes), c (castanhos), p (pretos));

// c) cor dos cabelos (l (loiros), c (castanhos), p (pretos), r (ruivos));

// d) idade em anos.

// e) valor do salário.

// Para o cadastro, todos os campos deve ser validados, ou seja, para sexo, serão aceitos somente as opções ‘m’ e ‘f’; para cor de olhos, apenas as opções ‘a’, ‘v’, ‘c’ e ‘p’; para cor dos cabelos, apenas as opções ‘l’, ‘c’, ‘p’ e ‘r’; para idade, apenas valores entre 10 e 100 anos, inclusive estes e para o salário, não aceitar valores negativos.

// Para indicar fim dos habitantes pesquisados, o usuário fornecerá um habitante fictício com idade igual a –1.

// Ao final, o algoritmo deve determinar a porcentagem de indivíduos do sexo feminino, com idade entre 18 e 35 anos e que tenham olhos castanhos e cabelos castanhos 

int main() {
    char sexo;
    char corOlho;
    char corCabelo;
    int idade, salario;
    int contSexo = 0;
    int contCorOlho = 0;
    int contCorCabelo = 0;
    int contIdade = 0;
    int pessoasProcuradas = 0;
    int pessoasPesquisadas = 0;
    int percent;

    printf("Bem-vindo à Pesquisa de Características!\n");

    do {
        do {
            printf("Digite o sexo (M - masculino / F - feminino): ");
            scanf(" %c", &sexo);
            if (sexo == 'f' || sexo == 'F') {
                contSexo++;
            }
        } while (!(sexo == 'M' || sexo == 'm' || sexo == 'F' || sexo == 'f'));

        pessoasPesquisadas++;

        do {
            printf("Insira a cor dos olhos (a - azuis, v - verdes, c - castanhos, p - pretos): ");
            scanf(" %c", &corOlho);
            if (corOlho == 'c' || corOlho == 'C') {
                contCorOlho++;
            }
        } while (!(corOlho == 'a' || corOlho == 'A' || corOlho == 'v' || corOlho == 'V' || corOlho == 'c' || corOlho == 'C' || corOlho == 'p' || corOlho == 'P'));

        do {
            printf("Insira a cor dos cabelos (l - loiro, c - castanho, p - preto, r - ruivo): ");
            scanf(" %c", &corCabelo);
            if (corCabelo == 'c' || corCabelo == 'C') {
                contCorCabelo++;
            }
        } while (!(corCabelo == 'l' || corCabelo == 'L' || corCabelo == 'c' || corCabelo == 'C' || corCabelo == 'p' || corCabelo == 'P' || corCabelo == 'r' || corCabelo == 'R'));

        do {
            printf("Insira o salario: ");
            scanf("%i", &salario);
        } while (salario <= 0);

        do {
            printf("Insira a idade (entre 10 e 100 anos). Para indicar a finalização da pesquisa, digite -1: ");
            scanf("%i", &idade);
            if (idade >= 18 && idade <= 35) {
                contIdade++;
            }
        } while ((idade < 10 || idade > 100) && idade != -1);

        if (contSexo == 1 && contCorOlho == 1 && contCorCabelo == 1 && contIdade == 1) {
            pessoasProcuradas++;
        }

        contSexo--;
        contCorOlho--;
        contCorCabelo--;
        contIdade--;
    } while (!(idade == -1));


    pessoasPesquisadas--;

    percent = (pessoasProcuradas * 100) / pessoasPesquisadas;

    printf("\n--- Resultados da Pesquisa ---\n");
    printf("Pessoas pesquisadas: %i\n", pessoasPesquisadas);
    printf("Pessoas que atenderam aos critérios: %i\n", pessoasProcuradas);
    printf("Percentual que atenderam aos critérios: %i%%\n", percent);

    printf("Obrigado por participar da pesquisa!\n");

    return 0;
}
