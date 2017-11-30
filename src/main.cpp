/**
 * @file	main.cpp
 * @brief	Sistema de E-commerce
 * @details	Sistema de comercio eletronico com suas funções basicas de compra, venda, login e cadastro
 * @author	Fernando Rodrigues Maciel (fernandomaciel@ufrn.edu.br)
 * @author	Cleydson Talles Araujo Vieira (talles17.a@hotmail.com)
 * @author  Gabriel Queiroz de Almeida Pereira (gabrielqp@escritoriodeiluminacao.com.br)
 * @since	16/11/2017
 * @date	30/11/2017
 */
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <vector>
using std::vector ;

#include <string>
using std::string;

#include <cstdlib>
#include <ostream>
using std::ostream ;


#include "loja.hpp"
#include "funcoes.hpp"
#include "store.hpp"
#include "usuario.hpp"

/*
 * @brief	função principal
 */
int main() {
	system("clear");
	cout << "Iniciando sistema";
	progresso(3);
	cout << "[OK]" << endl;
	cout << "Carregando banco de dados";
	progresso(3);
	cout << "[OK]" << endl;
	progresso(3);
	cout << endl;
	vector<Usuario> vu;
	vector<Produto> vp;
	//vu[0](talles, 21, 333333, 23 02 1996, talles17, 1239213 ,123456)
	carregarUsuarios(vu);
	//cout << vu[0] << endl ;
	carregarProdutos(vp) ;

	loja(vu, vp);

}


