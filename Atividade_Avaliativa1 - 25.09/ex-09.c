#include <stdio.h>

// 9. Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:  

// - 1,2,3,4 = voto para os respectivos candidatos;
// - 5 = voto nulo;
// - 6 = voto em branco;
// Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:
// - total de votos para cada candidato;
// - total de votos nulos;
// - total de votos em branco;
// Como finalizador do conjunto de votos, tem-se o valor 0.

int main() {
    int voto;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int votosNulos = 0, votosBranco = 0;

    do {
        printf("Digite o código do candidato (1, 2, 3, 4), 5 para voto nulo, 6 para voto em branco, ou 0 para encerrar: ");
        scanf("%d", &voto);

        switch (voto) {
            case 0:
                // Encerra a votação
                break;
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votosNulos++;
                break;
            case 6:
                votosBranco++;
                break;
            default:
                printf("Código de voto inválido!\n");
                break;
        }
    } while (voto != 0);

    printf("Total de votos para cada candidato:\n");
    printf("Candidato 1: %d votos\n", candidato1);
    printf("Candidato 2: %d votos\n", candidato2);
    printf("Candidato 3: %d votos\n", candidato3);
    printf("Candidato 4: %d votos\n", candidato4);
    printf("Total de votos nulos: %d\n", votosNulos);
    printf("Total de votos em branco: %d\n", votosBranco);

    return 0;
}