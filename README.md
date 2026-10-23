# Análise de Preço de Produto

<!-- badges -->
![C](https://img.shields.io/badge/C-A8B9CC?style=flat-square&logo=c&logoColor=white) ![GCC](https://img.shields.io/badge/GCC-A42E2B?style=flat-square&logo=gnu&logoColor=white) ![Make](https://img.shields.io/badge/Make-427819?style=flat-square&logo=gnu&logoColor=white)

[Read in English](README.en.md)

Programa de terminal em C para cadastrar produtos e aplicar descontos, usado para praticar ponteiros, structs e alocação dinâmica de memória.

## Sobre

O projeto foi construído de forma incremental, em cinco atividades sobre manipulação de memória em C. A versão atual reúne o resultado de todas elas em um único fluxo:

1. o usuário informa quantos produtos vai cadastrar;
2. o vetor de produtos é alocado dinamicamente com `malloc`;
3. cada produto recebe ID e preço;
4. a lista é exibida, um percentual de desconto é aplicado a todos os itens e a lista é exibida de novo;
5. a memória é liberada com `free`.

## Conceitos praticados

| Atividade | Conceito | Onde aparece no código |
| --- | --- | --- |
| 1 | Modificar um valor através de um ponteiro | `aplicar_desconto` altera o preço pelo endereço do produto |
| 2 | Passagem por referência | `aplicar_desconto(Produto *produto, float percentual)` |
| 3 | Structs e operador seta | `typedef struct { int id; float preco; } Produto` e `produto->preco` |
| 4 | Aritmética de ponteiros | `cadastrar_produto` e `imprimir_produtos` usam `(ptr + i)->campo`, sem `[]` |
| 5 | Alocação dinâmica | `criar_produtos` (`malloc`, com checagem de falha) e `liberar_produtos` (`free`) |

## Tecnologias

- C (C99)
- GCC com `-Wall -Wextra`
- Make

## Estrutura

```
Analise-preco-produto/
├── include/
│   └── produto.h   # struct Produto e protótipos
├── src/
│   ├── main.c      # fluxo interativo
│   ├── produto.c   # alocação, cadastro, desconto e liberação
│   └── utils.c     # impressão da tabela com aritmética de ponteiros
└── Makefile
```

## Como executar

Pré-requisitos: GCC e Make (no Windows, MinGW ou WSL).

```bash
git clone https://github.com/Luisr-nunes/Analise-preco-produto.git
cd Analise-preco-produto
make
./produto          # Linux/macOS
.\produto.exe      # Windows
```

Exemplo de uso:

```
Quantos produtos deseja cadastrar? 2
--- Produto 1 ---
ID: 10
Preco: 50
...
Informe o percentual de desconto a aplicar: 10
```

O alvo `make clean` usa o comando `del` e funciona apenas no Windows; no Linux/macOS, remova o binário com `rm produto`.

## Autor

Luís Nunes — [GitHub](https://github.com/Luisr-nunes) · [LinkedIn](https://www.linkedin.com/in/luis-nunes-dev/)
