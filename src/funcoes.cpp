#include "funcoes.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
#include <stdlib.h> 

void progresso(int n) {
	
	int i;
	cout << "[";
	for(i = 0; i <= n; i++) {
		cout << ".";
		system("sleep 0.3");
	}
	cout << "]";
}

int gerarCodigo() {

	srand(time(NULL));
	int codigo;
	//int i = 0;
	//char code[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	codigo = (rand() % 9999);
	
	return codigo;
}