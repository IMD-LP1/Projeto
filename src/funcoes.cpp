#include "funcoes.hpp"
#include <ctime>

void progresso(int n) {
	
	int i;
	cout << "[";
	for(i = 0; i <= n; i++) {
		cout << ".";
		system("sleep 0.3");
	}
	cout << "]";

}

