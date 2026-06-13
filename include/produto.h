#ifndef PRODUTO_H
#define PRODUTO_H

typedef struct {
    int id;
    float preco;
} Produto;

void aplicar_desconto(Produto *produto, float percentual);

#endif
