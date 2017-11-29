#include "store.hpp"

#include <fstream>

Store::Store() {
	codigo_ = "";
	produtos_ = nullptr;
	quant_ = 0;
}

void Store::alocaProdutos()
{
	produtos_ = new Produtos{};
}

void Store::inserirProduto()
{
	char confirmar;
	int quantidade, dia, mes, ano;
	float valor;
	string nome;
	
	cout << "Informe o nome do produto: ";
	cin.ignore(0);
	getline(cin, nome);
	produtos_[quant_].setNome(nome);
	
	cout << "Informe o preço do produto: ";
	cin >> valor;
	produtos_[quant_].setPreco(valor);
	
	cout << "Informe a marca do produto: ";
	cin.ignore(0);
	getline(cin, nome);
	produtos_[quant_].setMarca(nome);
	
	cout << "Informe a condição do produto [novo/usado]: ";
	cin >> nome;
	//nome = toupper(nome);
	produtos_[quant_].setCondicao(nome);
	
	cout << "Informe a quantidade do produto disponivel para venda: ";
	cin >> quantidade;
	produtos_[quant_].setQuantidade(quantidade);
	//Criar função para gerar codigo aleatorio para produto;
	produtos_[quant_].setCodigo(CodigoProduto());
	
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
		this->quant++;
;		salvarDados();

	} else {
		cout << "Todo as informações inseridas seram perdidas" << endl;
		cout << "Precione enter para continuar " << endl;
		cin.ignore().get();
		loja();
	}
}

bool Store::buscaProduto(string codigo)
{
	for(int i = 0; i < this->quant_; i++){
		if(codigo == produtos_[i].getCodigo()){
			produtos_[i].escrever();
			return true;
		}
	}

	return false;
}

void Store::atualizarDataBase() {
	std::fstream arquivo("/Projeto/database/produtos.txt") ;
	if (not in) {
		std::perror("input") ;

	}
	arquivo << "Nome 	Preço	Codigo	Fabricação	Validade	Marca	
	Tipo	Condição	Quantidade	Descrição	Vendedor" << endl ;
	for (int i{0} ; i < quant_ ; i++) {
		arquivo << produtos_[i].escreverDataBase() ;
	}
	
}
