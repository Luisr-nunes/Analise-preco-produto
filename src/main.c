#include <stdio.h>
#include "produto.h"

int main(void) {
    Produto *estoque = NULL;
    int quantidade;
    int i;
    float desconto;

    printf("=== Sistema de Gestao de Produtos ===\n\n");

    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    estoque = criar_produtos(quantidade);

    for (i = 0; i < quantidade; i++) {
        cadastrar_produto(estoque, i);
    }

    printf("\n=== Produtos Cadastrados ===\n");
    imprimir_produtos(estoque, quantidade);

    printf("Informe o percentual de desconto a aplicar: ");
    scanf("%f", &desconto);

    for (i = 0; i < quantidade; i++) {
        aplicar_desconto(estoque + i, desconto);
    }

    printf("\n=== Produtos com Desconto de %.1f%% ===\n", desconto);
    imprimir_produtos(estoque, quantidade);

    liberar_produtos(estoque);

    return 0;
}
