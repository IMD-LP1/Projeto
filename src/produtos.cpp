#include "produtos.hpp"

Produto::Produto(){
string nome_;
	float preco_;
	string marca_;
	string codigo_;
	Data dataF_;
	this->nome_ = "", this->preco_ = 0.0, this->marca_ = "", this-> codigo_ = "", this-> dataF_ = (0,0,0);
}

Produto::Produto(string nome, float preco, string marca, string codigo, data) {
	this->nome_ = nome;
	this->preco_ = preco;
	this->marca_ = marca;
	this->codigo_ = codigo;
	this->dataF_ = data
}

void Produto::inserirProduto() {}

void Produto::atualizarDataBase()
