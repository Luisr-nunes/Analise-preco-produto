#include "produto.h"

void aplicar_desconto(Produto *produto, float percentual) {
    produto->preco -= produto->preco * (percentual / 100.0f);
}
