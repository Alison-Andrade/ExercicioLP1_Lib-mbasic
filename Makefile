SRC_DIR = ./src
OBJ_DIR = ./build
INC_DIR = ./include
LIB_DIR = ./lib
BIN_DIR = ./bin

CC = g++
CPP_FLAGS = -Wall -pedantic -std=c++11 -I$(INC_DIR)
AR = ar

all: mbasic_static-test mbasic_dynamic-test

mbasic.a: $(SRC_DIR)/Questao1/MathBasic.cpp $(INC_DIR)/MathBasic.h
	$(CC) $(CPP_FLAGS) -c $(SRC_DIR)/Questao1/MathBasic.cpp -o $(OBJ_DIR)/MathBasic.o
	$(AR) rcs $(LIB_DIR)/$@ $(OBJ_DIR)/MathBasic.o

mbasic.so: $(SRC_DIR)/Questao1/MathBasic.cpp $(INC_DIR)/MathBasic.h
	$(CC) $(CPP_FLAGS) -fPIC -c $(SRC_DIR)/Questao1/MathBasic.cpp -o $(OBJ_DIR)/MathBasic.o 
	$(CC) -shared -Wl,-soname,mbasic.so -o $(LIB_DIR)/$@ $(OBJ_DIR)/MathBasic.o

dir:
	mkdir bin build lib

mbasic_static-test: $(SRC_DIR)/Questao1/main.cpp mbasic.a
	$(CC) $(CPP_FLAGS) -o $(BIN_DIR)/$@ $(SRC_DIR)/Questao1/main.cpp $(LIB_DIR)/mbasic.a
	@echo "Binário utilizando biblioteca estática salvo em: ./bin/mbasic_static-test"

mbasic_dynamic-test: $(SRC_DIR)/Questao1/main.cpp mbasic.so
	$(CC) $(CPP_FLAGS) -L../lib -Wl,-rpath=../lib/ -o $(BIN_DIR)/$@ $(SRC_DIR)/Questao1/main.cpp $(LIB_DIR)/mbasic.so
	@echo "Binário utilizando biblioteca dinamica salvo em: ./bin/mbasic_dynamic-test"

clean:
	@rm $(OBJ_DIR)/* $(BIN_DIR)/* $(LIB_DIR)/*
	@echo "Binários, bibliotecas e arquivos de objetos removidos."