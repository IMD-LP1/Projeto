#include "data.hpp"

Data::Data() {
	this->dia_ = 0 , this->mes_ = 0 , this->ano_ = 0 ;
}

Data::Data(int dia, int mes, int ano) {
	this->dia_ = dia ;
	this->mes_ = mes ;
	this->ano_ = ano ;
}

void Data::setDia(const int dia) {
	this->dia_ = dia;
}

string Data::getDia() {
	return dia_;
}

void Data::setMes(const int mes) {
	this->mes_ = mes_;
}

string Data::getMes() {
	return mes_;
}

void Data::setAno(const int ano) {
	this->ano_ = ano;
}

string Data::getAno() {
	return ano_;
}

/**	@brief Retorna o data na forma de string */
string Data::dataString() {
	std::stringstream d, m, a;
	d << dia_;
	m << mes_;
	a << ano_;

	return d.str() + "/" + m.str() + "/" + a.str();
	
}