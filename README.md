<div align="center" id="portuguese-version">

# Análise de Preço de Produto

**PT** | [EN](#english-version)

> Sistema em C para gestão de preços de produtos, desenvolvido de forma incremental através de 5 atividades que exploram conceitos fundamentais de ponteiros e alocação dinâmica.

<br>

</div>

---

## Sobre

**Análise de Preço de Produto** é uma aplicação de terminal construída para reforçar os conceitos de controle de memória em C. O projeto foi projetado para rodar offline, manipulando structs e ponteiros nativamente com alta performance, simulando operações de banco de dados (CRUD) de forma puramente em memória (RAM).

---

## Atividades Resolvidas

### 1. Fundamentos (Modificação Direta)
- Aumento de 10% no preço aplicado exclusivamente através de um ponteiro (`*ptr_preco *= 1.10f`), provando a alteração na memória.

### 2. Passagem por Referência
- Lógica encapsulada em `void aplicar_desconto(float *preco, float percentual)`, modificando os dados diretamente.

### 3. Structs
- Agrupamento de `id` e `preco` em `Produto`. Acesso aos campos feito com o operador seta (`produto->preco`).

### 4. Aritmética de Ponteiros
- A função `imprimir_produtos` percorre o array fazendo `(ptr + i)->campo`, sem o uso de colchetes `[]` para indexação.

### 5. Alocação Dinâmica
- Uso de `malloc` para criar o array com tamanho variável em tempo de execução e `free` no encerramento da `main`.

---

## Tecnologias Utilizadas

| Camada | Tecnologia | Descrição |
|---|---|---|
| Lógica Principal | **C (C99)** | Linguagem base focada em ponteiros e memória |
| Compilador | **GCC** | Para build multiplataforma (MinGW no Windows) |
| Automação | **Make** | Scripts rápidos de compilação local |

---

## Como Rodar o Código

### Pré-requisitos

- [GCC](https://gcc.gnu.org/) instalado no sistema
- [Make](https://www.gnu.org/software/make/)
- Windows, Linux ou macOS

### Compilação e Execução

```bash
# Clone o repositório
git clone https://github.com/Luisr-nunes/Analise-preco-produto.git
cd Analise-preco-produto

# Compile o código e gere o executável
make

# Execute a aplicação (Windows)
.\produto.exe

# Limpe os artefatos de compilação
make clean
```

---

## Estrutura do Projeto

```
Analise-preco-produto/
├── include/
│   └── produto.h        # Struct Produto + protótipos de funções
├── src/                 
│   ├── main.c           # Entry point interativo
│   ├── produto.c        # Operações CRUD
│   └── utils.c          # Funções utilitárias (aritmética de ponteiros)
└── Makefile             # Automação de compilação
```

---

## Desenvolvido por

<div align="center">

**Luis Nunes**

[![GitHub](https://img.shields.io/badge/GitHub-Luisr--nunes-181717?style=flat-square&logo=github)](https://github.com/Luisr-nunes)

</div>

---

<br>
<br>

---

<div align="center" id="english-version">

# Product Price Analysis

[PT](#portuguese-version) | **EN**

> A C-based system for product price management, incrementally developed through 5 activities that explore fundamental pointer and dynamic allocation concepts.

<br>

</div>

---

## About

**Product Price Analysis** is a terminal application built to reinforce memory management concepts in C. The project is designed to run offline, manipulating structs and pointers natively for high performance, simulating database CRUD operations entirely in-memory (RAM).

---

## Resolved Activities

### 1. Fundamentals (Direct Modification)
- 10% price increase applied exclusively through a pointer (`*ptr_preco *= 1.10f`), proving the memory alteration.

### 2. Pass by Reference
- Logic encapsulated in `void aplicar_desconto(float *preco, float percentual)`, modifying data directly.

### 3. Structs
- Grouping of `id` and `price` into `Produto`. Field access performed using the arrow operator (`produto->preco`).

### 4. Pointer Arithmetic
- The `imprimir_produtos` function iterates through the array using `(ptr + i)->field`, entirely avoiding `[]` brackets for indexing.

### 5. Dynamic Allocation
- Use of `malloc` to create a variable-size array at runtime, properly cleaned up with `free` at the end of the `main` execution.

---

## Tech Stack

| Layer | Technology | Description |
|---|---|---|
| Core Logic | **C (C99)** | Base language focusing on pointers and memory |
| Compiler | **GCC** | For cross-platform build (MinGW on Windows) |
| Automation | **Make** | Quick local compilation scripts |

---

## How to Run the Code

### Prerequisites

- [GCC](https://gcc.gnu.org/) installed on the system
- [Make](https://www.gnu.org/software/make/)
- Windows, Linux or macOS

### Setup & Execution

```bash
# Clone the repository
git clone https://github.com/Luisr-nunes/Analise-preco-produto.git
cd Analise-preco-produto

# Compile the code and generate the binary
make

# Run the application (Windows)
.\produto.exe

# Clean the build artifacts
make clean
```

---

## Project Structure

```
Analise-preco-produto/
├── include/
│   └── produto.h        # Produto struct + function prototypes
├── src/                 
│   ├── main.c           # Interactive entry point
│   ├── produto.c        # CRUD operations
│   └── utils.c          # Utility functions (pointer arithmetic)
└── Makefile             # Compilation automation
```

---

## Developed by

<div align="center">

**Luis Nunes**

[![GitHub](https://img.shields.io/badge/GitHub-Luisr--nunes-181717?style=flat-square&logo=github)](https://github.com/Luisr-nunes)

</div>