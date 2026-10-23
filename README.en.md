# Product Price Analysis

[Ler em Português](README.md)

A C terminal program to register products and apply discounts, used to practice pointers, structs and dynamic memory allocation.

## About

The project was built incrementally across five assignments on memory handling in C. The current version combines all of them into a single flow:

1. the user enters how many products to register;
2. the product array is allocated dynamically with `malloc`;
3. each product gets an ID and a price;
4. the list is printed, a discount percentage is applied to every item and the list is printed again;
5. memory is released with `free`.

## Concepts practiced

| Assignment | Concept | Where it appears in the code |
| --- | --- | --- |
| 1 | Changing a value through a pointer | `aplicar_desconto` updates the price through the product's address |
| 2 | Pass by reference | `aplicar_desconto(Produto *produto, float percentual)` |
| 3 | Structs and the arrow operator | `typedef struct { int id; float preco; } Produto` and `produto->preco` |
| 4 | Pointer arithmetic | `cadastrar_produto` and `imprimir_produtos` use `(ptr + i)->field`, without `[]` |
| 5 | Dynamic allocation | `criar_produtos` (`malloc`, with failure check) and `liberar_produtos` (`free`) |

## Tech stack

- C (C99)
- GCC with `-Wall -Wextra`
- Make

## Structure

```
Analise-preco-produto/
├── include/
│   └── produto.h   # Produto struct and prototypes
├── src/
│   ├── main.c      # interactive flow
│   ├── produto.c   # allocation, input, discount and release
│   └── utils.c     # table printing with pointer arithmetic
└── Makefile
```

## Running

Requirements: GCC and Make (on Windows, MinGW or WSL).

```bash
git clone https://github.com/Luisr-nunes/Analise-preco-produto.git
cd Analise-preco-produto
make
./produto          # Linux/macOS
.\produto.exe      # Windows
```

Sample session (the program prompts are in Portuguese):

```
Quantos produtos deseja cadastrar? 2
--- Produto 1 ---
ID: 10
Preco: 50
...
Informe o percentual de desconto a aplicar: 10
```

The `make clean` target uses the `del` command and only works on Windows; on Linux/macOS remove the binary with `rm produto`.

## Author

Luís Nunes — [GitHub](https://github.com/Luisr-nunes) · [LinkedIn](https://www.linkedin.com/in/luis-nunes-dev/)
