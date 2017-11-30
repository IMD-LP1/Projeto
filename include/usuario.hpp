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
	Usuario usuarios;

public:

	Pessoa();
	Pessoa(string nome, int idade, string cpf, Data data);

	string getNome();
	void setNome(const string nome);

	int getIdade();
	void setIdade(const int idade);

	string getCPF();
	void setCPF(const string cpf);

	Data getData() ;
	void setData(const Data d) ;

};

/**
 * @class   Usuario
 * @brief   Implementação de uma classe que herda de pessoa e armazena informações do usuario
 */
class Usuario: public Pessoa {
private:
	string email_;
	int codigo_;
	string senha_;

public:

	Usuario();
	Usuario(string nome, int idade, string cpf, Data data, string email, int codigo, string senha);
	void setEmail(const string email);
	string getEmail();
	void setCodigo(const int codigo);
	int getCodigo();
	void setSenha(const string senha);
	string getSenha();
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