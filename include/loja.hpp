/**
 * @file	loja.hpp
 * @brief	Definicao de funções basicas de loja
 * @details	As funções basicas de loja são login, cadastro, buscar produto e vender produto.
 * @author	Fernando Rodrigues Maciel (fernandomaciel@ufrn.edu.br)
 * @author	Cleydson Talles Araujo Vieira (talles17.a@hotmail.com)
 * @author  Gabriel Queiroz de Almeida Pereira (gabrielqp@escritoriodeiluminacao.com.br)
 * @since	16/11/2017
 * @date	26/11/2017
 */
#ifndef _LOJA_HPP_
#define _LOJA_HPP_

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>

#include <fstream>
#include <sstream>
#include <algorithm>

#include <vector>
using std::vector ;

using std::string;

#include <cstdlib>

#include "produtos.hpp"
#include "usuario.hpp"

/**
 *  @brief Funcao que da andamento ao programa 
 *  @details v Vetor de usuarios da loja 
 *  @details p Vetor de produtos da loja 
 */
void loja(vector<Usuario>& v , vector<Produto>& p);
/**
 *  @brief Funcao que faz o login do usuario no programa 
 *  @details v Vetor de usuarios da loja 
 *  @details p Vetor de produtos da loja
 */
void login(vector<Usuario>& v , vector<Produto>& p);
/**
 *  @brief Funcao que faz o cadastro do usuario no programa 
 *  @details v Vetor de usuarios da loja 
 *  @details p Vetor de produtos da loja
 */
void cadastro(vector<Usuario>& v , vector<Produto>& p);
void buscar();
/* @brief Funcao que lista um produto pra venda */
void vender();
/** 
 *  @brief Funcao que verifica se existe um usuario 
 *  @details v Vetor de usuarios da loja 
 *  @details user Nome do usario
 */
string verificaUsuario(vector<Usuario> &v, string user, int n);
/** 
 *  @brief Funcao que procura um produto na loja 
 *  @details n Nome do produto  
 */
void buscarProduto(string n);
/* @brief Funcao que imprime todos os funcionarios */
void ImprimeTodos();

#endif //_LOJA_HPP_
