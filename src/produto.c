#include <stdio.h>
#include <stdlib.h>
#include "produto.h"

Produto* criar_produtos(int quantidade) {
    Produto *ptr = (Produto *)malloc(quantidade * sizeof(Produto));

    if (ptr == NULL) {
        printf("Erro: falha ao alocar memoria.\n");
        exit(EXIT_FAILURE);
    }

    return ptr;
}

void cadastrar_produto(Produto *ptr, int indice) {
    printf("\n--- Produto %d ---\n", indice + 1);
    printf("ID: ");
    scanf("%d", &(ptr + indice)->id);
    printf("Preco: ");
    scanf("%f", &(ptr + indice)->preco);
}

void aplicar_desconto(Produto *produto, float percentual) {
    produto->preco -= produto->preco * (percentual / 100.0f);
}

void liberar_produtos(Produto *ptr) {
    free(ptr);
}
