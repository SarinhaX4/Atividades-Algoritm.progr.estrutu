#include <stdio.h>

void pagamentoAVista(double valor) {
    printf("Opção de pagamento à vista selecionada.\n");
    valor = valor - (valor * 0.10);
    printf("Valor total: R$%.2lf à vista.\n", valor);
}

void pagamentoDuasVezes(double valor) {
    printf("Opção de pagamento parcelado em duas vezes selecionada.\n");
    double parcela = valor / 2;
    printf("Duas parcelas de R$%.2lf. Valor total: R$%.2lf\n", parcela, valor);
}

void pagamentoParcelado(double valor) {
    int parcelas;
    printf("Opção de pagamento parcelado de 3 a 10 parcelas selecionada. Insira a quantidade de parcelas:\n");
    scanf("%i", &parcelas);
    valor = (valor / parcelas) + (valor * 0.03);
    printf("%i parcelas de R$%.2lf. Valor total com juros de 3%% ao mês: R$%.2lf\n", parcelas, valor, valor * parcelas);
}

int main() {
    double valorGasto;
    int opcao;
    printf("Insira o valor gasto:\n");
    scanf("%lf", &valorGasto);
    printf("Escolha a opção de pagamento:\n 1 - À vista\n 2 - Em duas vezes\n 3 - De 3 a 10 vezes (Acima de R$100,00).\n");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            pagamentoAVista(valorGasto);
            break;
        case 2:
            pagamentoDuasVezes(valorGasto);
            break;
        case 3:
            if (valorGasto >= 100) {
                pagamentoParcelado(valorGasto);
            } else {
                printf("Valor abaixo do permitido para pagamento parcelado.\n");
            }
            break;
        default:
            printf("Opção inserida não corresponde às alternativas disponíveis.\n");
            break;
    }

    return 0;
}
