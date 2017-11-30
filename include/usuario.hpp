/**
 * @file	usuario.hpp
 * @brief	Definicao da classe Usuario, que representa as possiveis operações do usuario
 * @details	O usuario herda da classe pessoa.
 * @author	Fernando Rodrigues Maciel (fernandomaciel@ufrn.edu.br)
 * @author	Fernando Rodrigues Maciel (fernandomaciel@ufrn.edu.br)
 * @author	Cleydson Talles Araujo Vieira (talles17.a@hotmail.com)
 * @author  Gabriel Queiroz de Almeida Pereira (gabrielqp@escritoriodeiluminacao.com.br)
 * @since	16/11/2017
 * @date	30/11/2017
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
	/* @brief Construtor padrão */
	Pessoa();
	/* @brief Construtor parametrizado */
	Pessoa(string nome, int idade, string cpf, string data);

	
	/*	@brief	metodo getNome da classe pessoa */
	string getNome();
	/**
	 *  @brief	 metodo setNome da classe pessoa
	 *	@details nome String a ser passada para o nome da pessoa
	*/
	void setNome(const string nome);

	/*	@brief	metodo getIdade da classe pessoa */
	int getIdade();
	/**
	 *  @brief	 metodo setIdade da classe pessoa
	 *	@details idade Valor a ser passado para a idade da pessoa
	*/
	void setIdade(const int idade);

	/*	@brief	metodo getCPF da classe pessoa */
	string getCPF();
	/**
	 *  @brief	 metodo setCPF da classe pessoa
	 *	@details cpf Informação a ser passado para o cpf da pessoa
	*/
	void setCPF(const string cpf);

	/*	@brief	metodo getData da classe pessoa */
	string getData() ;
	/**
	 *  @brief	 metodo setData da classe pessoa
	 *	@details d Data a ser passada para a data de nascimento da pessoa
	*/
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
	/* @brief Construtor padrão */
	Usuario();
	/* @brief Construtor parametrizado */
	Usuario(string nome, int idade, string cpf, string data, string usuario, int codigo, string senha, string telefone);
	
	/**
	 *  @brief	 metodo setUsuario da classe usuario
	 *	@details usuario Login a ser passado para usuario
	*/
	void setUsuario(const string usuario);
	/*	@brief	metodo getUsuario da classe pessoa */
	string getUsuario();
	
	/**
	 *  @brief	 metodo setCodigo da classe usuario
	 *	@details codigo valor a ser passado para o codigo do usuario
	*/
	void setCodigo(const int codigo);
	/*	@brief	metodo getCodigo da classe pessoa */
	int getCodigo();

	/**
	 *  @brief	 metodo setSenha da classe usuario
	 *	@details senha Informação a ser passada para a senha do usuario
	*/
	void setSenha(const string senha);
	/*	@brief	metodo getSenha da classe pessoa */
	string getSenha();

	/**
	 *  @brief	 metodo setTelefone da classe usuario
	 *	@details telefone Informação a ser passada para telefone do usuario
	*/
	void setTelefone(const string telefone) ;
	/*	@brief	metodo getTelefone da classe pessoa */
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