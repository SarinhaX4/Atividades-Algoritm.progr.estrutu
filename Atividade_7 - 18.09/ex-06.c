#include <stdio.h>

//6. Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim, apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade de frutas. Ao final, apresente o valor total da compra. 

// 1 => ABACAXI – 5,00 a unidade 2 => MAÇA – 1,00 a unidade 3 => PERA – 4,00 a unidade 

int main() {
    int fruta, opcao, quantidade;
    int somatorio = 0;
    int continua;

    printf("Bem-vindo à Feira das Frutas da Sara!\n");

    do {
        printf("-------------------------------------------------\n");
        printf("Menu de Opções:\n");
        printf("ABACAXI (1) - R$5,00 a unidade\n");
        printf("MAÇA (2) - R$1,00 a unidade\n");
        printf("PERA (3) - R$4,00 a unidade\n");
        printf("-------------------------------------------------\n");
        printf("Selecione a fruta (1/2/3): ");
        scanf("%i", &opcao);

        if (opcao >= 1 && opcao <= 3) {
            printf("Quantas unidades deseja comprar? ");
            scanf("%i", &quantidade);

            switch (opcao) {
                case 1:
                    printf("%i abacaxis selecionados\n", quantidade);
                    fruta = quantidade * 5;
                    break;
                case 2:
                    printf("%i maçãs selecionadas\n", quantidade);
                    fruta = quantidade * 1;
                    break;
                case 3:
                    printf("%i peras selecionadas\n", quantidade);
                    fruta = quantidade * 4;
                    break;
            }

            somatorio += fruta;
        } else {
            printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        }

        printf("Deseja continuar comprando? (1-Sim / 0-Não): ");
        scanf("%i", &continua);

    } while ( continua == 1);

    printf("-------------------------------------------------\n");
    printf("Total a pagar: R$%i\n", somatorio);
    printf("Obrigado por escolher a Feira das Frutas da Sara!\n");

    return 0;
}

