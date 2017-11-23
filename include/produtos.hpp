#ifndef _PRODUTOS_HPP_
#define _PRODUTOS_HPP_

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cctype>

#include "data.hpp"

class Produto{
private:
	string nome_;
	float preco_;
	string marca_;
	string condicao_;
	string codigo_;
	Data dataF_;

public:
	Produto();
	Produto(string nome, float preco, string marca, string codigo, dataF{int dia, int mes, int ano});
	
	string getNome();
	void setNome(const string nome);

	float getPreco()
	void setPreco(const float preco);

	string getMarca();
	void setMarca(const string marca);
	
	string getCondicao();
	void setCondicao(const string condicao);
	
	int getQuantidade();
	void setQuantidade(const int quantidade);
	
	string getCodigo();
	void setCodigo(const string codigo);

	Data getFabricacao();
	void setFabricacao(int dia, int mes, int ano);
	

	void escrever(ostream& out) const {
		out << "Produto: " << nome << endl;
		out << "Preço: " << preco << endl;
		out << "Marca: " << marca << endl;
		out << "Codigo: " << codigo << endl;
		out << "Data Fabricação: " << dataF << endl;

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
