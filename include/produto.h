#ifndef PRODUTO_H
#define PRODUTO_H

typedef struct {
    int id;
    float preco;
} Produto;

void aplicar_desconto(Produto *produto, float percentual);
void imprimir_produtos(Produto *ptr, int quantidade);

#endif
