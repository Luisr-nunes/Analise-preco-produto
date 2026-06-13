#include <stdio.h>
#include "produto.h"

int main(void) {
    float preco = 100.0f;

    printf("Preco original: R$ %.2f\n", preco);

    aplicar_desconto(&preco, 10.0f);

    printf("Preco com desconto de 10%%: R$ %.2f\n", preco);

    return 0;
}
