CC := g++
FLAGS := -I include/ -Wall
BUILD := build/
SRC := src/
TARGET := main.out

all: main

venda: pedido
	$(CC) $(CFLAGS) -c $(SRC)/venda.cpp -o $(BUILD)/venda.o

pedido: produto
	$(CC) $(CFLAGS) -c $(SRC)/pedido.cpp -o $(BUILD)/pedido.o

produto:
	$(CC) $(CFLAGS) -c $(SRC)/produto.cpp -o $(BUILD)/produto.o
	$(CC) $(CFLAGS) -c $(SRC)/acai.cpp -o $(BUILD)/acai.o
	$(CC) $(CFLAGS) -c $(SRC)/pizza.cpp -o $(BUILD)/pizza.o
	$(CC) $(CFLAGS) -c $(SRC)/cachorro_quente -o $(BUILD)/cachorro_quente.o

util:
	$(CC) $(CFLAGS) -c $(SRC)/util.cpp -o $(BUILD)/util.o

main: venda util
	$(CC) $(CFLAGS) $(BUILD)/venda.o $(BUILD)/util.o $(SRC)/main.cpp -o $(TARGET)

clean: $(RM) -r $(BUILD)/* $(TARGET)