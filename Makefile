CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
SRC = src/main.c src/produto.c src/utils.c
OUT = produto

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) -o $(OUT) $(SRC)

clean:
	del /Q $(OUT).exe 2>nul || true
