#ifndef _PRODUTOS_HPP_
#define _PRODUTOS_HPP_

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cctype>

#include "data.hpp"

class Produto {
private:
	string nome_;		//<--	Nome do produto
	float preco_;		//<--	Valor unitario do produto
	string marca_;		//<--	Marca do produto
	string condicao_;	//<<-	Condição do produto (novo ou usado)
	string codigo_;		//<--	Codigo do produto
	int quantidade_;	//<--	Quantidade do produto
	float valor_;		//<--	valor total de produtos
	Data dataF_;		//<--	Data de fabricação do produto

public:
	Produto();	//<--	Construtor padrão
	Produto(string nome, float preco, string marca, string condicao, string codigo, int quantidade, Data data dataF{int dia, int mes, int ano});	//<--	Construtor parametrizado
	
	void setNome(const string nome);
	string getNome();
	
	void setPreco(const float preco);
	float getPreco();
	
	void setMarca(const string marca);
	string getMarca();
	
	void setCondicao(const string condicao);
	string getCondicao();
	
	void setCodigo(const string codigo);
	string getCodigo();
	
	void setQuantidade(const int quantidade);
	int getQuantidade();
	
	void setFabricacao(int dia, int mes, int ano);
	Data getFabricacao();

	float getValorTotal();

	void escrever(ostream& out) const {
		out << "Produto: " << nome_ << endl;
		out << "Preço: " << preco_ << endl;
		out << "Marca: " << marca_ << endl;
		out << "Condição: " << condicao_ << endl;
		out << "Codigo: " << codigo_ << endl;
		out << "Quantidade: " << quantidade_ << endl;
		out << "Data Fabricação: " << dataF_ << endl;

	}
};

class CadastrarProduto {
private:
public:
	void inserirProduto();
	string buscarProduto(string codigo);
	void escrever(ostream& out) const;
	void atualizarDataBase();
	void salvarBase();
	void carregarBase();
	
};


ostream& operator<<(ostream& out, const CadastroProdutos& a);

#endif //_PRODUTOS_HPP_
