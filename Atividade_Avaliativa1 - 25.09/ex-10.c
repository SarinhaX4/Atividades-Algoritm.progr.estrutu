#include <stdio.h>
#include <string.h>

// 10. Foi feita uma estatística nas 200 principais cidades brasileiras para coletar dados sobre acidentes de trânsito. Foram obtidos os seguintes dados:  

// - código da cidade

// - estado (RS, SC, PR, SP, RJ, ...)

// - número de veículos de passeio (em 1992)

// - número de acidentes de trânsito com vítimas (em 1992)

// Deseja-se saber:

// a) qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem

// b) qual a média de veículos nas cidades brasileiras

// c) qual a média de acidentes com vítimas entre as cidades do Rio Grande do Sul.


struct Cidade {
    int codigo;
    char estado[3];
    int veiculos;
    int acidentes;
};

int main() {
    const int NUM_CIDADES = 200;
    struct Cidade cidades[NUM_CIDADES];

    int maiorIndice = -1;
    int menorIndice = -1;
    int cidadeMaiorIndice = -1;
    int cidadeMenorIndice = -1;
    int totalVeiculos = 0;
    int totalAcidentesRS = 0;
    int cidadesRS = 0;

    for (int i = 0; i < NUM_CIDADES; i++) {
        printf("Informe o código da cidade: ");
        scanf("%d", &cidades[i].codigo);

        printf("Informe o estado da cidade (sigla): ");
        scanf("%s", cidades[i].estado);

        printf("Informe o número de veículos de passeio em 1992: ");
        scanf("%d", &cidades[i].veiculos);

        printf("Informe o número de acidentes com vítimas em 1992: ");
        scanf("%d", &cidades[i].acidentes);

        int indice = (cidades[i].acidentes * 1000) / cidades[i].veiculos;

        if (maiorIndice == -1 || indice > maiorIndice) {
            maiorIndice = indice;
            cidadeMaiorIndice = cidades[i].codigo;
        }

        if (menorIndice == -1 || indice < menorIndice) {
            menorIndice = indice;
            cidadeMenorIndice = cidades[i].codigo;
        }

        totalVeiculos += cidades[i].veiculos;

        if (strcmp(cidades[i].estado, "RS") == 0) {
            totalAcidentesRS += cidades[i].acidentes;
            cidadesRS++;
        }
    }

    float mediaVeiculos = (float)totalVeiculos / NUM_CIDADES;
    float mediaAcidentesRS = cidadesRS > 0 ? (float)totalAcidentesRS / cidadesRS : 0;

    printf("Maior índice de acidentes: Cidade %d\n", cidadeMaiorIndice);
    printf("Menor índice de acidentes: Cidade %d\n", cidadeMenorIndice);
    printf("Média de veículos nas cidades brasileiras: %.2f\n", mediaVeiculos);
    printf("Média de acidentes com vítimas entre as cidades do Rio Grande do Sul: %.2f\n", mediaAcidentesRS);

    return 0;
}
