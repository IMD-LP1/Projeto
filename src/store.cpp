#include "store.hpp"

Store::Store() {
	codigo = "";
	produtos = nullptr;
	quant = 0;
}

void Store::alocaProdutos()
{
	produtos = new Produtos{};
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
	produtos[quant].setNome(nome);
	
	cout << "Informe o preço do produto: ";
	cin >> valor;
	produtos[quant].setPreco(valor);
	
	cout << "Informe a marca do produto: ";
	cin.ignore(0);
	getline(cin, nome);
	produtos[quant].setMarca(nome);
	
	cout << "Informe a condição do produto [novo/usado]: ";
	cin >> nome;
	//nome = toupper(nome);
	produtos[quant].setCondicao(nome);
	
	cout << "Informe a quantidade do produto disponivel para venda: ";
	cin >> quantidade;
	produtos[quant].setQuantidade(quantidade);
	//Criar função para gerar codigo aleatorio para produto;
	produtos[quant].setCodigo(gerarCodigo());
	
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
	for(int i = 0; i < this->quant; i++){
		if(codigo == produtos[i].getCodigo()){
			produtos[i].escrever();
			return true;
		}
	}

	return false;


}
