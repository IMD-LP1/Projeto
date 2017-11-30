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

#include <istream>

using namespace std;
using std::endl;
using std::istream ;
#include <ostream>
using std::ostream ;

#include <iostream>
using std::endl ;

/**
 * @class   Pessoa
 * @brief   Implementação de uma classe que armazena as informaçõe basicas de uma pessoa
 */
class Pessoa{
private:
	string nome_;
	int idade_;
	string CPF_;
	string data_;
	//Usuario usuarios;

public:

	Pessoa();
	Pessoa(string nome, int idade, string cpf, string data);

	string getNome();
	void setNome(const string nome);

	int getIdade();
	void setIdade(const int idade);

	string getCPF();
	void setCPF(const string cpf);

	string getData() ;
	void setData(const string d) ;

	friend ostream& operator<<(ostream& os, Pessoa &p) ;
	friend istream& operator>>(istream& is, Pessoa &p) ;

};

/**
 * @class   Usuario
 * @brief   Implementação de uma classe que herda de pessoa e armazena informações do usuario
 */
class Usuario: public Pessoa {
private:
	string usuario_;
	int codigo_;
	string senha_;
	string telefone_ ;

public:

	Usuario();
	Usuario(string nome, int idade, string cpf, string data, string usuario, int codigo, string senha, string telefone);
	void setEmail(const string usuario);
	string getEmail();
	void setCodigo(const int codigo);
	int getCodigo();
	void setSenha(const string senha);
	string getSenha();
	void setTelefone(const string telefone) ;
	string getTelefone () ;
	friend ostream& operator<<(ostream& os, Usuario &u) ;
	friend istream& operator>>(istream& is, Usuario &u) ;
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
	void gravar(std::ostream &out) const;
	

	void salvarDatabase();
	void atualizarDatabase();
	void carregarDatabase();
	bool autenticarUsuario(string matricula, string senha);

	// void carrinhoUsuario();
};


std::ostream& operator<<(std::ostream &out, const CadastroUsuario& user);

#endif //_USUARIO_HPP_ 