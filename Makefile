# E-Commerce Makefile
# Created by Fernando Rodrigues Maciel
CC=g++
PROG=E-Commerce
CPPFLAGS = -Wall -pedantic -std=c++11 -std=gnu++11 -ansi -I. -I$(INC_DIR) -lm

LIB_DIR=lib
INC_DIR=include
SRC_DIR=src
OBJ_DIR=build
BIN_DIR=bin
DOC_DIR=doc

RM = rm -rf

.PHONY: all init clean debug doxy doc

all: init E-Commerce

debug: CPPFLAGS += -g -O0
debug: all

init:
	@mkdir -p $(BIN_DIR)/
	@mkdir -p $(OBJ_DIR)/

E-Commerce: $(OBJ_DIR)/data.o $(OBJ_DIR)/produtos.o $(OBJ_DIR)/usuario.o $(OBJ_DIR)/funcoes.o $(OBJ_DIR)/loja.o $(OBJ_DIR)/main.o 
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CPPFLAGS) -o $(BIN_DIR)/$(PROG) $^
	@echo "+++ Executavel criado em $(BIN_DIR)/$(PROG) +++"
	@echo "============="

$(OBJ_DIR)/data.o: $(SRC_DIR)/data.cpp $(INC_DIR)/data.hpp
	$(CC) -c $(CPPFLAGS) -o $@ $<

$(OBJ_DIR)/store.o: $(SRC_DIR)/store.cpp $(INC_DIR)/store.hpp 
	$(CC) -c $(CPPFLAGS) -o $@ $<

$(OBJ_DIR)/produtos.o: $(SRC_DIR)/produtos.cpp $(INC_DIR)/produtos.hpp $(INC_DIR)/data.hpp $(INC_DIR)/loja.hpp
	$(CC) -c $(CPPFLAGS) -o $@ $<

$(OBJ_DIR)/usuario.o: $(SRC_DIR)/usuario.cpp $(INC_DIR)/usuario.hpp $(INC_DIR)/data.hpp
	$(CC) -c $(CPPFLAGS) -o $@ $<

$(OBJ_DIR)/funcoes.o: $(SRC_DIR)/funcoes.cpp $(INC_DIR)/funcoes.hpp
	$(CC) -c $(CPPFLAGS) -o $@ $<

$(OBJ_DIR)/loja.o: $(SRC_DIR)/loja.cpp $(INC_DIR)/loja.hpp
	$(CC) -c $(CPPFLAGS) -o $@ $<

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp $(INC_DIR)/loja.hpp $(INC_DIR)/funcoes.hpp 
	$(CC) -c $(CPPFLAGS) -o $@ $<

doxy:
	doxygen -g

doc:
	$(RM) $(DOC_DIR)/*
	doxygen

clean:
	$(RM) $(OBJ_DIR)
	$(RM) $(BIN_DIR)
