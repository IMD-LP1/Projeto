#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

#include <cstdlib>

//#include "loja.hpp"

void buscar() {
	string name;
	string images = "images/";
	cout << "Informe o nome do produto: " << endl;
	cin >> name;
	images = "display" + images + name + ".jpg";
	cout << images << endl;
	system(images);
}

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
			login();
			break;
		case 2:	
			cout << "Cadastrar-se:" << endl;
			cadastro();
			break;
		case 3:
			cout << "Buscar Produto:" << endl;
			buscar();
			break;
		case 0:
			exit(EXIT_SUCCESS);
		default:
			exit(EXIT_FAILURE);
	} 		
}
