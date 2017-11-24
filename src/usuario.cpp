#include "usuario.hpp"

Pessoa::Pessoa () {
	string nome_ ;
	int idade_ ;
	string cpf_ ;
	string mae_ ;
	Data data_ ;
	this->nome_ = "" ; this->idade_ = 0 , this->cpf_ = "", this->mae_ = "" , this->data_ = (0,0,0) ;
}

Pessoa::Pessoa(string nome , int idade, string cpf, string mae, Data data) {
	this->nome_ = nome ;
	this->idade_ = idade ;
	this->cpf_ = cpf ;
	this->mae_ = mae_ ;
	this->data_ = data ;
}

string Pessoa::getNome() {return nome_;}
void Pessoa::setNome(const string nome) {this->nome_ = nome;}

int Pessoa::getIdade() {return idade_;}
void Pessoa::setIdade(const int idade) {this->idade_ = idade;}

string Pessoa::getCPF() {return cpf_;}
void Pessoa::setCPF(const string cpf) {this->cpf_ = cpf;}

string Pessoa::getMae() {return mae_;}
void Pessoa::setMae(const string mae) {this->mae_ = mae;}

Data Pessoa::getData() {return data_;}
void Pessoa::setData(const Data data) {this->data_ = data;}