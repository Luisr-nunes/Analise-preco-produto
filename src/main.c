#include <stdio.h>
#include "produto.h"

int main(void) {
    Produto p = {1, 100.0f};

    printf("Produto %d - Preco original: R$ %.2f\n", p.id, p.preco);

    aplicar_desconto(&p, 10.0f);

    printf("Produto %d - Preco com desconto de 10%%: R$ %.2f\n", p.id, p.preco);

    return 0;
}
