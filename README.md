# Análise de Preço de Produto

Sistema em C para gestão de preços de produtos, desenvolvido de forma incremental através de 5 atividades que exploram conceitos fundamentais de ponteiros.

## Estrutura do Projeto

```
Analise-preco-produto/
├── include/
│   └── produto.h       # Definição da struct Produto e protótipos de funções
├── src/
│   ├── main.c           # Ponto de entrada e fluxo principal
│   ├── produto.c        # Operações CRUD sobre Produto
│   └── utils.c          # Funções utilitárias de exibição
├── Makefile             # Automação de compilação
└── README.md
```

## Compilação e Execução

```bash
make
./produto
```

Para limpar os binários:

```bash
make clean
```

## Resolução das Atividades

### Atividade 1 — Fundamentos de Ponteiros e Modificação Direta

Declaração de uma variável `float preco` inicializada com `100.0` e um ponteiro `float *ptr_preco` apontando para seu endereço. O aumento de 10% é aplicado exclusivamente através do ponteiro com a expressão `*ptr_preco *= 1.10f`, demonstrando que a modificação via ponteiro altera diretamente o valor original na memória.

### Atividade 2 — Passagem por Referência

A lógica de alteração de preço é encapsulada na função `aplicar_desconto`, que recebe um ponteiro `float *preco` e um percentual `float`. A função modifica o valor original na memória através da desreferência do ponteiro (`*preco`), eliminando a necessidade de retorno. Na `main`, o endereço da variável é passado com o operador `&`.

### Atividade 3 — Ponteiros para Structs

O conceito de produto é formalizado em uma `struct Produto` contendo `id` (inteiro) e `preco` (float), definida com `typedef` para simplificar as declarações. A função `aplicar_desconto` é atualizada para receber um `Produto *produto` e utiliza o operador seta (`->`) para acessar e modificar o campo `preco` diretamente na memória.

### Atividade 4 — Aritmética de Ponteiros em Arrays

O programa é expandido para gerenciar um array estático de 3 produtos. A função `imprimir_produtos` recebe um ponteiro `Produto *ptr` e a quantidade de itens, percorrendo o array exclusivamente com aritmética de ponteiros: `(ptr + i)->id` e `(ptr + i)->preco`. A sintaxe de colchetes (`ptr[i]`) não é utilizada, conforme requisitado.

### Atividade 5 — Alocação Dinâmica de Memória

O sistema passa a suportar um número variável de produtos definido pelo usuário em tempo de execução. As operações são organizadas em funções CRUD:

| Função               | Responsabilidade                                           |
|----------------------|------------------------------------------------------------|
| `criar_produtos`     | Aloca memória dinamicamente com `malloc`                   |
| `cadastrar_produto`  | Preenche os dados de um produto via entrada do usuário     |
| `aplicar_desconto`   | Aplica um percentual de desconto ao preço do produto       |
| `imprimir_produtos`  | Exibe todos os produtos usando aritmética de ponteiros     |
| `liberar_produtos`   | Libera a memória alocada com `free`                        |

A alocação utiliza `malloc(quantidade * sizeof(Produto))` com verificação de falha. O preenchimento dos dados é feito iterando com ponteiros, e ao final do programa a memória é liberada com `free()` para evitar vazamentos.

## Tecnologias

- **Linguagem:** C (C99)
- **Compilador:** GCC
- **Build:** Make