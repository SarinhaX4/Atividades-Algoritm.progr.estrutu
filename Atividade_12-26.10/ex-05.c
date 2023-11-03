#include <stdio.h>

void calcularIdadeEConversoes(int anoNascimento) {
    int idadeAnos = 2023 - anoNascimento;
    printf("Idade em anos: %i\n", idadeAnos);

    int idadeDias = idadeAnos * 365;
    printf("Idade em dias: %i\n", idadeDias);

    int idadeMeses = (idadeDias / 365) * 12; // Aproximação simples
    printf("Idade em meses: %i\n", idadeMeses);
}

int main() {
    int anoNascimento;
    printf("Insira o ano de nascimento:\n");
    scanf("%i", &anoNascimento);

    calcularIdadeEConversoes(anoNascimento);

    return 0;
}
