/**
 * @file	usuario.cpp
 * @brief	Implementacao dos metodos definidos na classe Pessoa, Usuario e Cadastrar usuario.
 * @author	Fernando Rodrigues Maciel (fernandomaciel@ufrn.edu.br)
 * @author
 * @author
 * @since	16/11/2017
 * @date	26/11/2017
 * @sa		usuario.hpp
 */
#include "usuario.hpp"

Pessoa::Pessoa() {
	Data d(0,0,0) ;
	this->nome_ = "", this->idade_ = 0 , this->CPF_ = "", this->data_ = d;
}

Pessoa::Pessoa(string nome , int idade, string cpf, Data data) {
	this->nome_ = nome;
	this->idade_ = idade;
	this->CPF_ = cpf;
	this->data_ = data;
}

void Pessoa::setNome(const string nome) {this->nome_ = nome;}
string Pessoa::getNome() {return nome_;}

void Pessoa::setIdade(const int idade) {this->idade_ = idade;}
int Pessoa::getIdade() {return idade_;}

void Pessoa::setCPF(const string cpf) {this->CPF_ = cpf;}
string Pessoa::getCPF() {return CPF_;}

void Pessoa::setData(const Data data) {this->data_ = data;}
Data Pessoa::getData() {return data_;}


Usuario::Usuario() {
	this->email_ = "", this->codigo_ = "", this->senha_ = "";
}

Usuario::Usuario(string email, string codigo, string senha) {
	this->email_ = email;
	this->codigo_ = codigo;
	this->senha_ = senha;
}

void Usuario::setEmail(const string email) {this->email_ = email;}
string Usuario::getEmail() {return email_;}

void Usuario::setCodigo(const string codigo) {this->codigo_ = codigo;}
string Usuario::getCodigo() {return codigo_;}

void Usuario::setSenha(const string senha) {this->senha_ = senha;}
string Usuario::getSenha() {return senha_;}



