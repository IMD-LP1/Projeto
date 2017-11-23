#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

#include <cstdlib>

#include "loja.hpp"
#include "funcoes.hpp"

int main() {

	cout << "Iniciando sistema";
	progresso(3);
	cout << "[OK]" << endl;
	cout << "Carregando banco de dados";
	progresso(3);
	cout << "[OK]" << endl;
	progresso(3);
	loja();

}
