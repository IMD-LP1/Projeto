/**
 * @file	usuario.cpp
 * @brief	Implementacao dos metodos definidos na classe Pessoa, Usuario e Cadastrar usuario.
 * @author	Fernando Rodrigues Maciel (fernandomaciel@ufrn.edu.br)
 * @author	Cleydson Talles Araujo Vieira (talles17.a@hotmail.com)
 * @author  Gabriel Queiroz de Almeida Pereira (gabrielqp@escritoriodeiluminacao.com.br)
 * @since	16/11/2017
 * @date	30/11/2017
 * @sa		usuario.hpp
 */
#include "usuario.hpp"

/* @brief Construtor padrão */
Pessoa::Pessoa() {
	//Data d(0,0,0) ;
	this->nome_ = "", this->idade_ = 0 , this->CPF_ = "", this->data_ = "";
}
/* @brief Construtor parametrizado */
Pessoa::Pessoa(string nome , int idade, string cpf, string data) {
	this->nome_ = nome;
	this->idade_ = idade;
	this->CPF_ = cpf;
	this->data_ = data;
}

/**
	 *  @brief	 metodo setNome da classe pessoa
	 *	@details nome String a ser passada para o nome da pessoa
	*/
void Pessoa::setNome(const string nome) {this->nome_ = nome;}
/*	@brief	metodo getNome da classe pessoa */
string Pessoa::getNome() {return nome_;}

/**
	 *  @brief	 metodo setIdade da classe pessoa
	 *	@details idade Valor a ser passado para a idade da pessoa
	*/
void Pessoa::setIdade(const int idade) {this->idade_ = idade;}
/*	@brief	metodo getIdade da classe pessoa */
int Pessoa::getIdade() {return idade_;}

/**
	 *  @brief	 metodo setCPF da classe pessoa
	 *	@details cpf Informação a ser passado para o cpf da pessoa
	*/
void Pessoa::setCPF(const string cpf) {this->CPF_ = cpf;}
/*	@brief	metodo getCPF da classe pessoa */
string Pessoa::getCPF() {return CPF_;}

/**
	 *  @brief	 metodo setData da classe pessoa
	 *	@details d Data a ser passada para a data de nascimento da pessoa
	*/
void Pessoa::setData(const string data) {this->data_ = data;}
/*	@brief	metodo getData da classe pessoa */
string Pessoa::getData() {return data_;}

ostream& operator<<(ostream& os, Pessoa &p) {
	os << p.nome_ << "	" << p.idade_ << "	" << p.CPF_ << "	" << p.data_ << endl ;
	return os ;
} 

istream& operator>>(istream& is, Pessoa &p) {
	is >> p.nome_ >> p.idade_ >> p.CPF_ >> p.data_ ;
	return is ;
}



Usuario::Usuario() {
	this->usuario_ = "", this->codigo_ = 0, this->senha_ = "" , this->telefone_ = "";
}

Usuario::Usuario(string nome, int idade, string cpf, string data, string usuario, int codigo, string senha, string telefone) {
	Pessoa {nome,idade, cpf, data};
	this->usuario_ = usuario;
	this->codigo_ = codigo;
	this->senha_ = senha;
	this->telefone_ = telefone ;
}

void Usuario::setEmail(const string usuario) {this->usuario_ = usuario;}
string Usuario::getEmail() {return usuario_;}

void Usuario::setCodigo(const int codigo) {this->codigo_ = codigo;}
int Usuario::getCodigo() {return codigo_;}

void Usuario::setSenha(const string senha) {this->senha_ = senha;}
string Usuario::getSenha() {return senha_;}

void Usuario::setTelefone(const string telefone) {this->telefone_ = telefone;}
string Usuario::getTelefone() {return telefone_ ;}

ostream& operator<<(ostream& os, Usuario &u) {
	os << u.getNome() << "	" << u.getIdade() << "	" << u.getCPF() << " " << u.getCodigo() 
	<< "	" << u.getSenha() << u.getTelefone() << endl ;
	return os ;
} 

/*
istream& operator>>(istream& is, Usuario &u) {
	is >> u.getNome() >> u.getIdade() >> u.getCPF() >> u.getData() >> u.getEmail() >> u.getCodigo() >> u.getSenha() >> u.getTelefone() ;
	return is ;
} */



