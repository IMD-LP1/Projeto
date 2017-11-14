#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <cstdlib>

// #include "loja.hpp"

int main() {

	system("clear");
	int n;
	cout << "\tE-Commerce" << endl;
	cout << "1-Login\n2-Buscar\n-->";
	cin >> n;
	switch(n) {
		case 1:
			cout << "Efetuar login" << endl;
			break;
		case 2:	
			cout << "Buscar produto" << endl;
			break;
		default:
			cout << "Não exite opção" << endl;
			exit(EXIT_FAILURE);
	} 		

}