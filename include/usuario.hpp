/**
 * @file	usuario.hpp
 * @brief	Definicao da classe Usuario, que representa as possiveis operações do usuario
 * @details	O usuario herda da classe pessoa.
 * @author	Fernando Rodrigues Maciel (fernandomaciel@ufrn.edu.br)
 * @author
 * @author
 * @since	16/11/2017
 * @date	26/11/2017
 */
#ifndef _USUARIO_HPP_
#define _USUARIO_HPP_

#include "data.hpp"

/**
 * @class   Pessoa
 * @brief   Implementação de uma classe que armazena as informaçõe basicas de uma pessoa
 */
class Pessoa : public Data{
private:
	string nome_;
	int idade_;
	string CPF_;
	Data data_;

public:

	Pessoa();
	Pessoa(string nome, int idade, string cpf, Data{int dia, int mes, int ano});

	string getNome();
	void setNome(const string nome);

	int getIdade();
	void setIdade(const int idade);

	string getCPF();
	void setCPF(const string cpf);

};

/**
 * @class   Usuario
 * @brief   Implementação de uma classe que herda de pessoa e armazena informações do usuario
 */
class Usuario: public pessoa {
private:
	string email_;
	string codigo_;
	string senha_;

public:

	Usuario();
	Usuario(string nome, int idade, string cpf, data{int dia, int mes, int ano}, string email, string codigo);

};

/**
 * @class   CadastroUsuario
 * @brief   Implementação de uma classe define as operações do usuario
 */
class CadastroUsuario {
public:
	CadastroUsuario();
	~CadastroUsuario();

	void loginUsuario(string codigoUsuario, bool logado);
	string dadosUsuario(string codigoUsuario);
	void cadastrarUsuario();
	string buscarUsuario(string codigoUsuario);
	void gravar(ostream &out) const;
	

	void salvarDatabase();
	void atualizarDatabase();
	void carregarDatabase();
	bool autenticarUsuario(string matricula, string senha);

	// void carrinhoUsuario();
};


ostream& operator<<(ostream &out, const CadastroUsuario& user);

#endif //_USUARIO_HPP_ 
