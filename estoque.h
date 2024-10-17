#ifndef ESTOQUE_H
#define ESTOQUE_H

#define MAX_PRODUTOS 100

typedef struct {
  char nome[50];
  char categoria[20];
  float preco;
  long codigoBarras;
  char fornecedor[30];
  char validade[11];
  int qtdMinima;
} Produto;

// Funções de gerenciamento de estoque
void listarProdutos(Produto produtos[], int total);
void buscarProduto(Produto produtos[], int total, char nome[]);
void removerProduto(Produto produtos[], int *total, char nome[]);
void editarProduto(Produto produtos[], int total, char nome[]);
void inicializarProdutos(Produto produtos[], int *totalProdutos);
void adicionar_ao_estoque(Produto produtos[], int *totalProdutos, char nome[],
                          char categoria[], float preco, long codigoBarras,
                          char fornecedor[], char validade[], int qtdMinima,
                          int quantidade);

#endif
