/**
 * @file	store.hpp
 * @brief	Definicao de funções basicas de produtos da loja
 * @details	As funções basicas da store são inserir produtos e buscas produtos.
 * @author	Fernando Rodrigues Maciel (fernandomaciel@ufrn.edu.br)
 * @since	16/11/2017
 * @date	28/11/2017
 */

#ifndef _STORE_HPP_
#define _STORE_HPP_

#include <string>
#include <iostream>
using namespace std;

#include "produtos.hpp"


class Store : public Produto{
private:
	int codigo; 
	Produto* produtos;
	int quant;

public:
	Store();
	void alocaProdutos();
	void inserirProduto();
	void buscarProduto(string codigo);
	bool escrever(ostream& out) const;
	void atualizarDataBase();
	void salvarBase();
	void carregarBase();
};


#endif
