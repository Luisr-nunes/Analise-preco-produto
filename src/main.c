#include <stdio.h>
#include "produto.h"

int main(void) {
    Produto estoque[3] = {
        {1, 50.0f},
        {2, 120.0f},
        {3, 89.90f}
    };
    int total = 3;
    int i;

    printf("=== Estoque Original ===\n");
    imprimir_produtos(estoque, total);

    for (i = 0; i < total; i++) {
        aplicar_desconto(&estoque[i], 10.0f);
    }

    printf("=== Estoque com Desconto de 10%% ===\n");
    imprimir_produtos(estoque, total);

    return 0;
}
