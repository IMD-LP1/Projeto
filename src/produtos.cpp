/**
 * @file	produtos.cpp
 * @brief	Implementacao dos metodos definidos na classe produto
 * @author	Fernando Rodrigues Maciel (fernandomaciel@ufrn.edu.br)
 * @author
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
	this-> codigo_ = "" ; 
	this->quantidade_ = 0 ; 
	this->valor_ = 0 ;
	Data d(0,0,0) ; 
	this->dataF_ = d ;
}

Produto::Produto(string nome, float preco, string marca, string condicao, string codigo, int quantidade, float valor, Data data) {
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
void Produto::setCodigo(const string codigo) {
	this->codigo_ = codigo;
}

/** @brief Retorna o codigo do produto */
string Produto::getCodigo() {
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


void Produto::setFabricacao(Data d) { 
	this->dataF_ = d ;	
}

string Produto::getFabricacao() {
	string fabricacao_ ;
	fabricacao_ = dataF_.dataString();
	return fabricacao_;
	//return dataF_ ;
}


/**	@brief Retorna o total a ser pago por produto */
float Produto::getValorTotal() {
	return this->preco_ * this->quantidade_;
}

/*void escrever(std::ostream& out) const {
		cout << "Produto: " << nome_ << endl;
		cout << "Preço: " << preco_ << endl;
		cout << "Marca: " << marca_ << endl;
		cout << "Condição: " << condicao_ << endl;
		cout << "Codigo: " << codigo_ << endl;
		cout << "Quantidade: " << quantidade_ << endl;
		cout << "Data Fabricação: " << dataF_.dataString() << endl;
}*/
/*
std::ostream& operator<<(std::ostream& out) {
	a->escrever(out) ;
	return out ;
} */
// void Produto::atualizarDataBase() {

// }
