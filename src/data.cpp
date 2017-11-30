/**
 * @file	data.cpp
 * @brief	Implementacao dos metodos definidos na classe Data
 * @author	Fernando Rodrigues Maciel (fernandomaciel@ufrn.edu.br)
 * @since	16/11/2017
 * @date	26/11/2017
 * @sa		data.hpp
 */
#include "data.hpp"

/**
 *	@details	Por padrao, uma data é inicializada com valores iguais a zero
 */
Data::Data() {
	this->dia_ = 0;
	this->mes_ = 0;
	this->ano_ = 0;
}

/**
 *	@details	Construtor parametrizado
 */
Data::Data(int dia, int mes, int ano) {
	this->dia_ = dia;
	this->mes_ = mes;
	this->ano_ = ano;
}

/** @brief Atualiza o dia do produto */
void Data::setDia(const int dia) {
	this->dia_ = dia;
}

/** @brief  Retorna o dia do produto */
int Data::getDia() {
	return dia_;
}

/** @brief Atualiza o mes do produto */
void Data::setMes(const int mes) {
	this->mes_ = mes_;
}

/** @brief  Retorna o mes do produto */
int Data::getMes() {
	return mes_;
}

/** @brief Atualiza o ano do produto */
void Data::setAno(const int ano) {
	this->ano_ = ano;
}

/** @brief  Retorna o ano do produto */
int Data::getAno() {
	return ano_;
}

/**	@brief Retorna o data na forma de string */
/*string Data::dataString() {
	std::stringstream d, m, a;
	d << dia_;
	m << mes_;
	a << ano_;

	return d.str() + "/" + m.str() + "/" + a.str();
	
} */

ostream& operator<<(ostream& os, Data &d) {
	os << d.dia_ << "/" << d.mes_ << "/" << d.ano_ ;
	return os ;
}

istream& operator>>(istream& is, Data &d) {
	is >> d.dia_ >> d.mes_ >> d.ano_ ;
	return is ;
}