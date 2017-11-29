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

using std::string;

#include <cstdlib>

//#include "produtos.hpp"

void loja();
void login();
void cadastro();
void buscar();
void vender();
string verificaUsuario(string usuario, int n);

#endif //_LOJA_HPP_
