/**
 * @file	produtos.cpp
 * @brief	Implementacao dos metodos definidos na classe produto
 * @author	Fernando Rodrigues Maciel (fernandomaciel@ufrn.edu.br)
 * @author
 * @author
 * @since	16/11/2017
 * @date	25/11/2017
 * @sa		jogador.hpp
 */

#include "produtos.hpp"

/**
 * @details Por padrao, um produto e criado com o nome vazio 
 *			e valores para preço e data iguais a zero. 
 */
Produto::Produto(){
	this->nome_ = "", this->preco_ = 0.0, this->marca_ = "", this->condicao_ = "", this-> codigo_ = "", this->quantidade_ = 0, 
	this->valor_ = 0, this-> dataF_ = (0,0,0);
}

Produto::Produto(string nome, float preco, string marca, string, condicao, string codigo, int quantidade, float valor, Data data) {
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


/*
string Produto::getFabricacao() {
	fabricacao_ = dataString(dia_, mes_, ano_);
	return fabricacao_;
}
void Produto::setFabricacao(int dia, int mes, int ano) { 
	this->dia_ = dia;
	this->mes_ = mes;
	this->ano_ = ano;
	
}
*/


/**	@brief Retorna o total a ser pago por produto */
float Produto::getValorTotal() {
	return this->proco_ * this->quantidade_;
}


ostream& operator<<(ostream& out, const Produto* a) {
	a->escrever(out);
	return out;
}

void Produto::inserirProduto() {
	
	char confirmar;
	int quantidade, dia, mes, ano;
	float valor;
	string nome;
	
	cout << "Informe o nome do produto: ";
	cin.ignore(0);
	getline(cin, nome);
	setNome(nome);
	
	cout << "Informe o preço do produto: ";
	cin >> valor;
	setPreco(valor);
	
	cout << "Informe a marca do produto: ";
	cin.ignore(0);
	getline(cin, nome);
	setMarca(nome);
	
	cout << "Informe a condição do produto [novo/usado]: ";
	cin >> nome;
	nome = toupper(nome);
	setCondicao(nome);
	
	cout << "Informe a quantidade do produto disponivel para venda: ";
	cin >> quantidade;
	getQuantidade(quantidade);
	//Criar função para gerar codigo aleatorio para produto;
	getCodigo(CodigoProduto());
	
	/*
	cout << "Informe a data de Fabricação do produto: ";
	cin >> dia >> mes >> ano;
	getFabricacao(data):
	*/
	
	cout << "Confimar cadastro de produto para venda [S/n]? ";
	cin >> confirmar;
	confirmar = toupper(confirmar);
	// IMPLEMENTAR TRATAMENTO DE EXCEÇÃO PARA CONFIRMAÇÃO
	//tratarConfirmacao(confirmar);
	if(confirmar == 'S') {
		salvarDados();
	} else {
		cout << "Todo as informações inseridas seram perdidas" << endl;
		cout << "Precione enter para continuar " << endl;
		cin.ignore().get();
		loja();
	}
	
}

void Produto::atualizarDataBase() {



}





























