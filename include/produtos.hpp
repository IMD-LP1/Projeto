/**
 * @file	prodtuos.hpp
 * @brief	Definicao da classe Produto, que representa a informação dos produtos do programa
 * @details	Os atributos do Produto são nome , preco , marca , condicao , codigo , quantidade , valo e data de fabricaçao.
 * @author	Fernando Rodrigues Maciel (fernandomaciel@ufrn.edu.br)
 * @author	Cleydson Talles Araujo Vieira (talles17.a@hotmail.com)
 * @author  Gabriel Queiroz de Almeida Pereira (gabrielqp@escritoriodeiluminacao.com.br)
 * @since	16/11/2017
 * @date	30/11/2017
 */
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
	/* @brief Construtor padrão */
	Produto();
	/* @brief Construtor parametrizado */
	Produto(string nome, float preco, string marca, string condicao, int codigo, int quantidade, float valor, string dataF);	//<--	Construtor parametrizado
	
	/**
	 *  @brief	 metodo setNome da classe produto
	 *	@details nome String a ser passada para o nome
	*/
	void setNome(const string nome);
	 /* @brief	 metodo getNome da classe produto */
	string getNome();
	
	/**
	 *  @brief	 metodo setPreco da classe produto
	 *	@details preco Valor a ser passada para o preco do produto
	*/
	void setPreco(const float preco);
	/*	@brief	metodo getPreco da classe produto */
	float getPreco();
	
	/**
	 *  @brief	 metodo setMarca da classe produto
	 *	@details marca String a ser passada para a marca
	*/
	void setMarca(const string marca);
	/*	@brief metodo getPreco da classe produto */
	string getMarca();
	
	/**
	 *  @brief	 metodo setCondicao da classe produto
	 *	@details condicao String a ser passada para a condicao do produto
	*/
	void setCondicao(const string condicao);
	/*	@brief	metodo getCondico da classe produto */
	string getCondicao();
	
	/**
	 *  @brief	 metodo setCodigo da classe produto
	 *	@details codigo Codigo a ser passada para o codigo do produto
	*/
	void setCodigo(const int codigo);
	/*	@brief	metodo getCodigo da classe produto */
	int getCodigo();
	
	/**
	 *  @brief	 metodo setQuantidade da classe produto
	 *	@details quantidade Valor a ser passada para a quantidade do produto
	*/
	void setQuantidade(const int quantidade);
	/*	@brief	metodo getQuantidade da classe produto */
	int getQuantidade();
	
	/**
	 *  @brief	 metodo setFabricao da classe produto
	 *	@details d String a ser passada para a data de fabricacao do produto
	*/
	void setFabricacao(string d);
	/*	@brief	metodo getFabricacao da classe produto */
	string getFabricacao();

	float getValorTotal();

	friend ostream& operator<<(ostream& os, Produto &p) ;
	friend istream& operator>>(istream& is, Produto &p) ;
	
};



//ostream& operator<<(ostream& out, const CadastroProdutos& a);

#endif //_PRODUTOS_HPP_
