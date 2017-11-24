#include "data.hpp"

Data::Data() {
	int dia_;
	int mes_;
	int ano_;
	this->dia_ = 0 , this->mes_ = 0 , this->ano_ = 0 ;
}

Data::Data(int dia, int mes, int ano) {
	this->dia_ = dia ;
	this->mes_ = mes ;
	this->ano_ = ano ;
}

string Data::getDia() {return dia_;}
void Data::setDia(const int dia){this->dia_ = dia;}

string Data::getMes() {return mes_;}
void Data::setMes(const int mes){this->mes_ = mes_;}

string Data::getAno() {return ano_;}
void Data::setAno(const int ano){this->ano_ = ano;}