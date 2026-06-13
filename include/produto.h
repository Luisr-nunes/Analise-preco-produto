#ifndef PRODUTO_H
#define PRODUTO_H

typedef struct {
    int id;
    float preco;
} Produto;

Produto* criar_produtos(int quantidade);
void cadastrar_produto(Produto *ptr, int indice);
void aplicar_desconto(Produto *produto, float percentual);
void imprimir_produtos(Produto *ptr, int quantidade);
void liberar_produtos(Produto *ptr);

#endif
