#include <stdio.h>

int main(void) {
    float preco = 100.0f;
    float *ptr_preco = &preco;

    printf("Preco original: R$ %.2f\n", preco);

    *ptr_preco *= 1.10f;

    printf("Preco com aumento de 10%%: R$ %.2f\n", preco);

    return 0;
}
