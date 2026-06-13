#include "produto.h"

void aplicar_desconto(float *preco, float percentual) {
    *preco -= *preco * (percentual / 100.0f);
}
