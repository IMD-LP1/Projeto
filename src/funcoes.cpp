#include "funcoes.hpp"

void progresso(int n) {
	
	int i;
	for(i = 0; i <= n; i++) {
		cout << ".";
		system("sleep 0.3");
	}
}

