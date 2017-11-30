/**
 * @file	loja.hpp
 * @brief	Definicao de funções basicas de loja
 * @details	As funções basicas de loja são login, cadastro, buscar produto e vender produto.
 * @author	Fernando Rodrigues Maciel (fernandomaciel@ufrn.edu.br)
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

#include "usuario.hpp"

void loja(vector<Usuario>& v);
void login();
void cadastro(vector<Usuario>& v);
void buscar();
void vender();
string verificaUsuario(string usuario, int n);
void buscarProduto(string n);

#endif //_LOJA_HPP_
