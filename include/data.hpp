/**
 * @file	data.hpp
 * @brief	Definicao da classe Data, que representa a informação da data do programa
 * @details	Os atributos de Data são dia, mes e ano.
 * @author	Fernando Rodrigues Maciel (fernandomaciel@ufrn.edu.br)
 * @author	Cleydson Talles Araujo Vieira (talles17.a@hotmail.com)
 * @author  Gabriel Queiroz de Almeida Pereira (gabrielqp@escritoriodeiluminacao.com.br)
 * @since	16/11/2017
 * @date	30/11/2017
 */
#ifndef _DATA_HPP_
#define _DATA_HPP_

#include <string>
using std::string;

#include <istream>
using std::istream ;
#include <ostream>
using std::ostream ;

#include <sstream>

/**
 * @class   Data
 * @brief   Implementação de uma classe que para armazenar dia, mes e ano 
 */
class Data {
private:
	int dia_;	//<--	Dia de fabricação do produto
	int mes_;	//<--	Mes de fabricação do produto
	int ano_;	//<--	Ano de fabricação do produto
public:

	/**	@brief Construtor da classe sem parametros */
	Data() ;

	/**	@brief Construtor da classe parametrizado */
	Data(int dia, int mes , int ano) ;

	/** @brief	Modifica o dia da data */
	void setDia(int dia);

	/** @brief	Retorna o dia da data */
	int getDia();

	/** @brief	Modifica o mes da data */
	void setMes(int mes);
	
	/** @brief	Retorna o mes da data */
	int getMes();

	/** @brief	Modifica o mes da data */
	void setAno(int ano);

	/** @brief	Retorna o ano da data */
	int getAno();

	/** @brief	Retorna a data em formato de string */
	//string dataString();

	friend ostream& operator<<(ostream& os, Data &d) ;
	friend istream& operator>>(istream& is, Data &d) ;
};

#endif //_DATA_HPP_
