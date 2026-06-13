# Análise de Preço de Produto

Sistema em C para gestão de preços de produtos, desenvolvido de forma incremental através de 5 atividades que exploram conceitos fundamentais de ponteiros e alocação dinâmica.

---

## Estrutura do Projeto

```
Analise-preco-produto/
├── include/
│   └── produto.h        # Struct Produto + protótipos de funções
│
├── src/                 # Implementações
│   ├── main.c           # Entry point interativo e fluxo principal
│   ├── produto.c        # Operações CRUD sobre Produto
│   └── utils.c          # Funções utilitárias e de exibição
│
├── Makefile             # Automação de compilação
└── README.md
```

> **Nota:** `produto.exe` (executável gerado na compilação) **não faz parte do repositório** — está no `.gitignore`.

---

## Descrição dos Módulos

### `produto.h` — Modelo de Dados Central

Define a `struct Produto` com `id` (inteiro) e `preco` (float). Centraliza os protótipos de funções CRUD e de impressão para o projeto. Utiliza `#ifndef` para proteção contra múltiplas inclusões.

### `produto.c` — Camada de Operações (CRUD)

Implementa a lógica de negócio do sistema usando ponteiros:
- `criar_produtos`: Retorna um ponteiro para a área de memória alocada (`malloc`).
- `cadastrar_produto` / `aplicar_desconto`: Recebem ponteiros e modificam os dados diretamente na memória.
- `liberar_produtos`: Limpa a memória com `free()`.

### `utils.c` — Funções Utilitárias

Contém a função `imprimir_produtos`, que foi projetada especificamente para iterar e exibir arrays de struct utilizando **exclusivamente aritmética de ponteiros** em vez de indexação por colchetes, conforme requisitos das atividades.

### `main.c` — Entry Point

Responsável pela interação com o usuário (perguntar a quantidade de produtos, receber os dados via `scanf` e organizar as chamadas para as funções dos módulos). 

---

## Resolução das Atividades

- **Atividade 1 (Fundamentos):** Aumento de 10% no preço aplicado exclusivamente através de um ponteiro (`*ptr_preco *= 1.10f`), provando a alteração na memória.
- **Atividade 2 (Passagem por Referência):** Lógica encapsulada em `void aplicar_desconto(float *preco, float percentual)`.
- **Atividade 3 (Structs):** Agrupamento de `id` e `preco` em `Produto`. Acesso aos campos feito com o operador seta (`produto->preco`).
- **Atividade 4 (Aritmética de Ponteiros):** A função `imprimir_produtos` percorre o array fazendo `(ptr + i)->campo`, sem o uso de colchetes `[]`.
- **Atividade 5 (Alocação Dinâmica):** Uso de `malloc` para criar o array com tamanho variável em tempo de execução e `free` no encerramento da `main`.

---

## Como Compilar e Executar

### Pré-requisitos

- GCC (`gcc --version`)
- Make (`make --version`)
- Windows, Linux ou macOS

### Comandos

```bash
# Compilar o executável
make

# Executar a aplicação (Windows)
.\produto.exe
# (Linux/macOS)
./produto

# Limpar os arquivos compilados
make clean
```

### `.gitignore` recomendado

```
*.exe
*.o
```

---

## Decisões Técnicas

**Por que `typedef struct`?**
O uso de `typedef` permite instanciar e utilizar a estrutura chamando apenas `Produto` em vez de `struct Produto`, deixando o código mais limpo e próximo do padrão usado em mercado e em projetos enterprise.

**Por que aritmética de ponteiros em `utils.c`?**
A escolha por `(ptr + i)->preco` em vez de `ptr[i].preco` foi para exercitar o controle explícito sobre o endereçamento de memória (deslocamento através do tamanho natural do tipo de dado), um requisito da Atividade 4.

**Separação em Módulos (Header / Source):**
Para estruturar o projeto com cara de "enterprise", a declaração da interface (header) foi separada da implementação (src). Isso melhora o encapsulamento e a manutenibilidade caso a aplicação venha a crescer.

---

> Desenvolvido como projeto acadêmico para a disciplina de Programação Imperativa e Funcional — CESAR School, Recife/PE.