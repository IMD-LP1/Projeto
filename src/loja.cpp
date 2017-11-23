#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

#include "loja.hpp"

void loja() {
	
	int n;
	system("clear");

	cout << "\tE-Commerce" << endl;
	cout << "1-Login" << endl;
	cout << "2-Cadastrar" << endl;
	cout << "3-Buscar" << endl;
	cout << "0-sair" << endl;
	
	//PODE SER COLOCADO UM TRATAMENTO DE EXCECÃO AQUI
	do{	
		cin >> n;
	}while(n < 0 or n > 3);
 	
	
	switch(n) {
		case 1:
			cout << "Efetuar login:" << endl;
			//login();
			break;
		case 2:	
			cout << "Cadastrar-se:" << endl;
			//cadastro();
			break;
		case 3:
			//cout << "Buscar Produto:" << endl;
			buscar();
			break;
		case 0:
			exit(EXIT_SUCCESS);
		default:
			exit(EXIT_FAILURE);
	}

}

void buscar() {
	
	string produto;	
	
	cout << "O que deseja buscar: ";
	cin >> produto;
	
	
	//buscarProduto(produto);

}
