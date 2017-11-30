/**
 * @file	main.cpp
 * @brief	Sistema de E-commerce
 * @details	Sistema de comercio eletronico com suas funções basicas de compra, venda, login e cadastro
 * @author	Fernando Rodrigues Maciel (fernandomaciel@ufrn.edu.br)
 * @since	16/11/2017
 * @date	25/11/2017
 */
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

#include <cstdlib>

#include "loja.hpp"
#include "funcoes.hpp"
#include "store.hpp"


int main() {

	cout << "Iniciando sistema";
	progresso(3);
	cout << "[OK]" << endl;
	cout << "Carregando banco de dados";
	progresso(3);
	cout << "[OK]" << endl;
	progresso(3);
	cout << endl;
	loja();

}
