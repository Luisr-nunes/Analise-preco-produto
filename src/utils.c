#include <stdio.h>
#include "produto.h"

void imprimir_produtos(Produto *ptr, int quantidade) {
    int i;

    printf("\n%-10s %-15s\n", "ID", "Preco (R$)");
    printf("----------------------------\n");

    for (i = 0; i < quantidade; i++) {
        printf("%-10d %-15.2f\n", (ptr + i)->id, (ptr + i)->preco);
    }

    printf("\n");
}
