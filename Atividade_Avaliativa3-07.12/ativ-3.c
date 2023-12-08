#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int codigo;
  char descricao[50];
  int quantidade;
  float valor;
  struct Produto *prox;
} Produto;

Produto* criarNovoProduto() {
  Produto* novoProduto = (Produto*)malloc(sizeof(Produto));
  if (novoProduto == NULL) {
    printf("Erro ao alocar memória para o novo produto");
    exit(EXIT_FAILURE);
  }
  novoProduto->prox = NULL;
  return novoProduto;
}

Produto* adicionarProduto(Produto* lista) {
  Produto* novoProduto = criarNovoProduto();

  printf("\n-----------------------------");
  printf("\n Cadastro de um produto:");
  printf("\n-----------------------------");

  printf("\nDigite o código do produto: ");
  scanf("%d", &novoProduto->codigo);

  printf("Digite a descrição do produto: ");
  scanf("%s", novoProduto->descricao);

  printf("Digite a quantidade do produto: ");
  scanf("%d", &novoProduto->quantidade);

  printf("Digite o valor do produto: ");
  scanf("%f", &novoProduto->valor);

  if (lista == NULL) {
    return novoProduto; 
  } else {
    Produto* atual = lista;
    while (atual->prox != NULL) {
      atual = atual->prox;
    }
    atual->prox = novoProduto;
    return lista;
  }
}

void exibirRelatorio(Produto* lista) {
  Produto* atual = lista;
  printf("\n-----------------------------");
  printf("\nRelatório de Produtos");
  printf("\n-----------------------------");
  printf("\n");

  while (atual != NULL) {
    printf("\nCódigo: %d", atual->codigo);
    printf("\nDescrição: %s", atual->descricao);
    printf("\nQuantidade: %d", atual->quantidade);
    printf("\nValor: %.2f", atual->valor);
    printf("\n");
    atual = atual->prox;
  }
}

Produto* encontrarProduto(Produto* lista, int codigoBusca) {
  Produto* atual = lista;
  while (atual != NULL) {
    if (atual->codigo == codigoBusca) {
      printf("\nCódigo: %d", atual->codigo);
      printf("\nDescrição: %s", atual->descricao);
      printf("\nQuantidade: %d", atual->quantidade);
      printf("\nValor: %.2f", atual->valor);
      return atual;
    }
    atual = atual->prox;
  }
  printf("Produto não encontrado");
  return NULL;
}

Produto* removerProduto(Produto* lista, int codigoBusca) {
  Produto* atual = lista;
  Produto* anterior = NULL;

  while (atual != NULL && atual->codigo != codigoBusca) {
    anterior = atual;
    atual = atual->prox;
  }

  if (atual != NULL) {
    if (anterior == NULL) {
      lista = atual->prox;
    } else {
      anterior->prox = atual->prox;
    }

    free(atual);
    printf("Produto removido com sucesso!");
  } else {
    printf("Produto não encontrado!");
  }

  return lista;
}

void liberarMemoria(Produto* lista) {
  Produto* atual = lista;
  Produto* proximo;

  while (atual != NULL) {
    proximo = atual->prox;
    free(atual);
    atual = proximo;
  }
}

int main() {
  int opcao;
  int codigoBusca;
  Produto* encontrado;
  Produto* estoque = NULL;

  do {
    printf("\n\n------------------------------------------------");
    printf("\n Bem vindo! Digite um número conforme sua necessidade:");
    printf("\n 1 - Cadastra produto");
    printf("\n 2 - Mostra relatório de produtos");
    printf("\n 3 - Busca o produto");
    printf("\n 4 - remove o produto");
    printf("\n 0 - para sair");
    printf("\n = ");
    scanf("%d", &opcao);

    switch (opcao) {
      case 1:
        estoque = adicionarProduto(estoque);
        break;

      case 2:
        exibirRelatorio(estoque);
        break;

      case 3:
        printf("\nDigite o código do produto para busca: ");
        scanf("%d", &codigoBusca);
        encontrarProduto(estoque, codigoBusca);
        break;

      case 4:
        printf("\nDigite o código do produto para remoção: ");
        scanf("%d", &codigoBusca);
        estoque = removerProduto(estoque, codigoBusca);
        break;

      case 0:
        break;

      default:
        printf("Opção inválida! Favor digitar um dos valores citados anteriormente");
        break;
    }
  } while (opcao != 0);
  printf("\n Operação encerrada, obrigada! ");

  liberarMemoria(estoque);
  return 0;
}
