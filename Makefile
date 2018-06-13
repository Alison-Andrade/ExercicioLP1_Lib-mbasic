SRC_DIR = ./src
OBJ_DIR = ./build
INC_DIR = ./include
LIB_DIR = ./lib
BIN_DIR = ./bin

CC = g++
CPP_FLAGS = -Wall -pedantic -std=c++11 -I$(INC_DIR)
AR = ar

all: makedir mbasic.a mbasic.so

mbasic.a: $(SRC_DIR)/MathBasic.cpp $(INC_DIR)/MathBasic.h
	$(CC) $(CPP_FLAGS) -c $(SRC_DIR)/MathBasic.cpp -o $(OBJ_DIR)/MathBasic.o
	$(AR) rcs $(LIB_DIR)/$@ $(OBJ_DIR)/MathBasic.o

mbasic.so: $(SRC_DIR)/MathBasic.cpp $(INC_DIR)/MathBasic.h
	$(CC) $(CPP_FLAGS) -c $(SRC_DIR)/MathBasic.cpp -o $(OBJ_DIR)/MathBasic.o 
	$(CC) -shared -fPIC -o $(LIB_DIR)/$@ $(OBJ_DIR)/MathBasic.o

makedir:
	mkdir bin build lib

clean:
	rm $(OBJ_DIR)/* $(BIN_DIR)/* $(LIB_DIR)/*