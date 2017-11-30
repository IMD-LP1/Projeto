/**
 * @file	produtos.cpp
 * @brief	Implementacao dos metodos definidos na classe produto
 * @author
 * @author	Fernando Rodrigues Maciel (fernandomaciel@ufrn.edu.br)
 * @author
 * @since	16/11/2017
 * @date	25/11/2017
 * @sa		produtos.hpp
 * @sa		loja.hpp
 */

#include "produtos.hpp"
#include "loja.hpp"
/**
 * @details Por padrao, um produto e criado com o nome vazio 
 *			e valores para preço e data iguais a zero. 
 */
Produto::Produto() {
	this->nome_ = "" ;
	this->preco_ = 0.0; 
	this->marca_ = "" ; 
	this->condicao_ = "" ; 
	this->codigo_ = 0 ; 
	this->quantidade_ = 0 ; 
	this->valor_ = 0 ;
	this->dataF_ = "";
}
/* @details	construtor paramentrizado da classe produtos */
Produto::Produto(string nome, float preco, string marca, string condicao, int codigo, int quantidade, float valor, string data) {
	this->nome_ = nome;
	this->preco_ = preco;
	this->marca_ = marca;
	this->condicao_ = condicao;
	this->codigo_ = codigo;
	this->quantidade_ = quantidade;
	this->valor_ = valor;	
	this->dataF_ = data ;
}


/** @brief Atualiza o nome do produto */
void Produto::setNome(const string nome) {
	this->nome_ = nome;
}

/** @brief Retorna o nome do produto */
string Produto::getNome() {
	return this->nome_;
}

/** @brief Atualiza o preço do produto */
void Produto::setPreco(const float preco) {
	this->preco_ = preco;
}

/** @brief Retorna o preço do produto */
float Produto::getPreco() {
	return this->preco_;
}

/**	@brief Atualiza o nome da marca */
void Produto::setMarca(const string marca) {
	this->marca_ = marca;
}

/**	@brief Retorna a marca do produto */
string Produto::getMarca() {
	return this->marca_;
}

/** @brief Atualiza a condição do produto */
void Produto::setCondicao(const string condicao) {
	this->condicao_ = condicao;
}

/**	@brief Retorna a condição do produto (novo ou usado) */
string Produto::getCondicao() {
	return this->condicao_;
}

/** @brief Atualiza o codigo do produto*/
void Produto::setCodigo(const int codigo) {
	this->codigo_ = codigo;
}

/** @brief Retorna o codigo do produto */
int Produto::getCodigo() {
	return this->codigo_;
}

/** @brief Atualiza a quantidade do produto */
void Produto::setQuantidade(const int quantidade) {
	this->quantidade_ = quantidade;
}

/** @brief  Retorna a quantidade do produto */
int Produto::getQuantidade() {
	return this->quantidade_;
}


void Produto::setFabricacao(string d) { 
	this->dataF_ = d ;	
}

/*string Produto::getFabricacao() {
	string fabricacao_ ;
	fabricacao_ = dataF_.dataString();
	return fabricacao_;
	//return dataF_ ;
} */


/**	@brief Retorna o total a ser pago por produto */
float Produto::getValorTotal() {
	return this->preco_ * this->quantidade_;
}

ostream& operator<<(ostream& os, Produto &p) {
	os << p.nome_ << "	" << p.preco_ << "	" << p.marca_ << "	" << p.codigo_ << "	" << p.quantidade_ << "	" << p.getValorTotal() 
	<< "	" << p.dataF_ << endl ;
	return os ;
} 

istream& operator>>(istream& is, Produto &p) {
	is >> p.nome_ >> p.preco_ >> p.marca_ >> p.codigo_ >> p.quantidade_ >> p.dataF_ ;
	return is ;
}

// void Produto::atualizarDataBase() {

// }
