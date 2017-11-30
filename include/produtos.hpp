#ifndef _PRODUTOS_HPP_
#define _PRODUTOS_HPP_

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <istream>
using std::istream ;
#include <ostream>
using std::ostream ;

#include <cctype>

/**
 * @class   Produto
 * @brief   Implementação de uma classe que tem as principais caracteristicas de produto
 */
class Produto {
private:
	string nome_;		//<--	Nome do produto
	float preco_;		//<--	Valor unitario do produto
	string marca_;		//<--	Marca do produto
	string condicao_;	//<<-	Condição do produto (novo ou usado)
	int codigo_;		//<--	Codigo do produto
	int quantidade_;	//<--	Quantidade do produto
	float valor_;		//<--	valor total de produtos
	string dataF_;		//<--	Data de fabricação do produto

public:
	Produto();	//<--	Construtor padrão
	Produto(string nome, float preco, string marca, string condicao, int codigo, int quantidade, float valor, string dataF);	//<--	Construtor parametrizado
	
	void setNome(const string nome);
	string getNome();
	
	void setPreco(const float preco);
	float getPreco();
	
	void setMarca(const string marca);
	string getMarca();
	
	void setCondicao(const string condicao);
	string getCondicao();
	
	void setCodigo(const int codigo);
	int getCodigo();
	
	void setQuantidade(const int quantidade);
	int getQuantidade();
	
	void setFabricacao(string d);
	string getFabricacao();

	float getValorTotal();

	friend ostream& operator<<(ostream& os, Produto &p) ;
	friend istream& operator>>(istream& is, Produto &p) ;
	
};



//ostream& operator<<(ostream& out, const CadastroProdutos& a);

#endif //_PRODUTOS_HPP_
