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
	this->dataF_ = data ;
}

string Produto::getNome(){return this->nome_;}
void Produto::setNome( const string nome ) {this->nome_ = nome;}

float Produto::getPreco(){return this->proco_ * this->quantidade_;}

string Produto::getMarca(){ return this->marca_;}
void Produto::setMarca(const string marca){ this->marca = marca;}

string Produto::getCondicao() { return this->condicao_;}

int Produto::getQuantidade(){return this->quantidade_;}
void Produto::setQuantidade(const int quantidade){ this->quantidade_ = quantidade;}

int Produto::getCodigo(){ return this->codigo_;}
void Produto::setCodigo(const int codigo){ this->codigo_ = codigo;}

/*
string Produto::getFabricacao(){ return this->fabricacao_;}
void Produto::setFabricacao(int dia, int mes, int ano) { 
	this->dia_ = dia;
	this->mes_ = mes;
	this->ano_ = ano;
	
}
*/

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





























