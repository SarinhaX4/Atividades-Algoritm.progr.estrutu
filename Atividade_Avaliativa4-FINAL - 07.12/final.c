#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Veiculo {
    char proprietario[50];
    char combustivel[15];
    char modelo[50];
    char cor[20];
    char chassi[20];
    int ano;
    char placa[8];
    struct Veiculo* proximo;
} Veiculo;

Veiculo* criarVeiculo() {
    Veiculo* novoVeiculo = (Veiculo*)malloc(sizeof(Veiculo));
    if (novoVeiculo == NULL) {
        printf("Erro de alocação de memória\n");
        exit(EXIT_FAILURE);
    }
    novoVeiculo->proximo = NULL;
    return novoVeiculo;
}

Veiculo* adicionarVeiculo(Veiculo* lista) {
    Veiculo* novoVeiculo = criarVeiculo();

    printf("\n-----------------------------");
    printf("\nCadastro de Veículo");
    printf("\n-----------------------------");

    printf("\nProprietário: ");
    scanf("%s", novoVeiculo->proprietario);

    printf("Combustível (álcool, diesel ou gasolina): ");
    scanf("%s", novoVeiculo->combustivel);

    printf("Modelo: ");
    scanf("%s", novoVeiculo->modelo);

    printf("Cor: ");
    scanf("%s", novoVeiculo->cor);

    printf("Nº chassi: ");
    scanf("%s", novoVeiculo->chassi);

    printf("Ano: ");
    scanf("%d", &novoVeiculo->ano);

    printf("Placa (3 letras e 4 números): ");
    scanf("%s", novoVeiculo->placa);


    if (lista == NULL) {
        return novoVeiculo; 
    } else {
        Veiculo* atual = lista;
        while (atual->proximo != NULL) {
            atual = atual->proximo;
        }
        atual->proximo = novoVeiculo;
        return lista;
    }
}


void listarProprietariosAnoDiesel(Veiculo* lista) {
    printf("\n-----------------------------");
    printf("\nProprietários de carros do ano de 2010 ou posterior e movidos a diesel");
    printf("\n-----------------------------");
    printf("\n");

    Veiculo* atual = lista;

    while (atual != NULL) {
        if (atual->ano >= 2010 && strcmp(atual->combustivel, "diesel") == 0) {
            printf("\nProprietário: %s", atual->proprietario);
        }
        atual = atual->proximo;
    }
}


void listarPlacasJ(Veiculo* lista) {
    printf("\n-----------------------------");
    printf("\nPlacas que começam com a letra J e terminam com 0, 2, 4 ou 7 e seus proprietários");
    printf("\n-----------------------------");
    printf("\n");

    Veiculo* atual = lista;

    while (atual != NULL) {
        if (atual->placa[0] == 'J' && (atual->placa[6] == '0' || atual->placa[6] == '2' || atual->placa[6] == '4' || atual->placa[6] == '7')) {
            printf("\nPlaca: %s, Proprietário: %s", atual->placa, atual->proprietario);
        }
        atual = atual->proximo;
    }
}


void listarModeloCor(Veiculo* lista) {
    printf("\n-----------------------------");
    printf("\nModelo e cor dos veículos com placas que têm a segunda letra vogal e a soma dos valores numéricos é par");
    printf("\n-----------------------------");
    printf("\n");

    Veiculo* atual = lista;

    while (atual != NULL) {
        char segundaLetraPlaca = atual->placa[1];
        int somaNumerosPlaca = (atual->placa[3] - '0') + (atual->placa[4] - '0') + (atual->placa[5] - '0') + (atual->placa[6] - '0');

        if ((segundaLetraPlaca == 'A' || segundaLetraPlaca == 'E' || segundaLetraPlaca == 'I' || segundaLetraPlaca == 'O' || segundaLetraPlaca == 'U') &&
            somaNumerosPlaca % 2 == 0) {
            printf("\nModelo: %s, Cor: %s", atual->modelo, atual->cor);
        }
        atual = atual->proximo;
    }
}


void trocarProprietario(Veiculo* lista, char chassi[]) {
    printf("\n-----------------------------");
    printf("\nTroca de proprietário com o número do chassi para carros sem dígitos zero na placa");
    printf("\n-----------------------------");
    printf("\n");

    Veiculo* atual = lista;

    while (atual != NULL) {
        if (strchr(atual->placa, '0') == NULL) {
            if (strcmp(atual->chassi, chassi) == 0) {
                printf("\nProprietário antigo: %s", atual->proprietario);
                printf("\nDigite o novo proprietário: ");
                scanf("%s", atual->proprietario);
                printf("\nProprietário atualizado com sucesso!");
                return;
            }
        }
        atual = atual->proximo;
    }

    printf("\nNenhum veículo encontrado com o chassi fornecido ou com placa sem dígitos zero");
}

void liberarMemoria(Veiculo* lista) {
    Veiculo* atual = lista;
    Veiculo* proximo;

    while (atual != NULL) {
        proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
}

int main() {
    int opcao;
    char chassi[20];
    Veiculo* listaVeiculos = NULL;

    do {
        printf("\n-----------------------------");
        printf("\n 1 - cadastra veículo");
        printf("\n-----------------------------");
        printf("\n 2 - Lista proprietários de carros 2010 ou posterior e os movidos a diesel");
        printf("\n-----------------------------");
        printf("\n 3 - Lista placas que começam com a letra J e terminam com 0, 2, 4 ou 7 e seus proprietários");
        printf("\n-----------------------------");
        printf("\n 4 - Lista modelo e cor dos veículos com placas que têm a segunda letra vogal e a soma dos valores numéricos é par");
        printf("\n-----------------------------");
        printf("\n 5 - Trocar o proprietário com o número do chassi (apenas para carros com placas que não possuem nenhum dígito igual a zero)");
        printf("\n-----------------------------");
        printf("\n 0 - para sair");
        printf("\n = ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                listaVeiculos = adicionarVeiculo(listaVeiculos);
                break;

            case 2:
                listarProprietariosAnoDiesel(listaVeiculos);
                break;

            case 3:
                listarPlacasJ(listaVeiculos);
                break;

            case 4:
                listarModeloCor(listaVeiculos);
                break;

            case 5:
                printf("\nDigite o número do chassi para a troca de proprietário: ");
                scanf("%s", chassi);
                trocarProprietario(listaVeiculos, chassi);
                break;

            case 0:
                break;

            default:
                printf("Opção inválida! Favor digitar um dos valores citados anteriormente");
                break;
        }
    } while (opcao != 0);
    printf("\n Operação encerrada! Obrigada ");

    liberarMemoria(listaVeiculos);
    return 0;
}
