SRC_DIR = ./src
OBJ_DIR = ./build
INC_DIR = ./include
LIB_DIR = ./lib
BIN_DIR = ./bin

CC = g++
CPP_FLAGS = -Wall -pedantic -std=c++11 -I$(INC_DIR)
AR = ar

all: mbasic_static-test mbasic_dynamic-test

mbasic.a: $(SRC_DIR)/MathBasic.cpp $(INC_DIR)/MathBasic.h
	$(CC) $(CPP_FLAGS) -c $(SRC_DIR)/MathBasic.cpp -o $(OBJ_DIR)/MathBasic.o
	$(AR) rcs $(LIB_DIR)/$@ $(OBJ_DIR)/MathBasic.o

mbasic.so: $(SRC_DIR)/MathBasic.cpp $(INC_DIR)/MathBasic.h
	$(CC) $(CPP_FLAGS) -c $(SRC_DIR)/MathBasic.cpp -o $(OBJ_DIR)/MathBasic.o 
	$(CC) -shared -fPIC -o $(LIB_DIR)/$@ $(OBJ_DIR)/MathBasic.o

dir:
	mkdir bin build lib

mbasic_static-test: $(SRC_DIR)/main.cpp mbasic.a
	$(CC) $(CPP_FLAGS) -o $(BIN_DIR)/$@ $(SRC_DIR)/main.cpp $(LIB_DIR)/mbasic.a

mbasic_dynamic-test: $(SRC_DIR)/main.cpp mbasic.so
	$(CC) $(CPP_FLAGS) -L/home/alisonsidnei/Área\ de\ Trabalho/ExercicioLP1_Lib-mbasic/lib -Wl,-rpath=/home/alisonsidnei/Área\ de\ Trabalho/ExercicioLP1_Lib-mbasic/lib -o $(BIN_DIR)/$@ $(SRC_DIR)/main.cpp $(LIB_DIR)/mbasic.so

clean:
	rm $(OBJ_DIR)/* $(BIN_DIR)/* $(LIB_DIR)/*