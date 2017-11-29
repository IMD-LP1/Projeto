#include "funcoes.hpp"
#include <string>

void progresso(int n) {
	
	int i;
	cout << "[";
	for(i = 0; i <= n; i++) {
		cout << ".";
		system("sleep 0.3");
	}
	cout << "]";
}

string gerarCodigo(string tipo) {

	srand(time(NULL));
	string codigo;
	int i = 0;
	char code[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	codigo = tipo + code[rand() % 26] + to_string(rand() % 9999);
	
	while(i < 3) {
		if(tipo == "PS4577") {
			//tipo = "PS4577";
			return(gerarCodigo(tipo));
		} else {
			return codigo;
		}
	}
	cout << "Não foi possivel criar o codigo" << endl;
	return 0;
}