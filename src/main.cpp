#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <cstdlib>

#include "loja.hpp"

int main() {

	system("clear");
	int n;
	cout << "\tE-Commerce" << endl;
	cout << "1-Login" << endl;
	cout << "2-Cadastrar" << endl;
	cout << "3-Buscar" << endl;
	cout << "0-sair" << endl;
	do{	
		cin >> n;
	}while(n < 0 or n > 3);
 	
	
	switch(n) {
		case 1:
			cout << "Efetuar login:" << endl;
			break;
		case 2:	
			cout << "Cadastrar-se:" << endl;
			break;
		case 3:
			cout << "Buscar Produto:" << endl;
			break;
		case 0:
			cout << "Sair..." << endl;
			exit(EXIT_SUCCESS);
		default:
			exit(EXIT_FAILURE);
	} 		
}
