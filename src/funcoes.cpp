
#include <ctime>
#include <cstdlib>
#include <iostream>
using std::cout ;
#include <string>
using std::string ;
#include <stdlib.h>

#include "funcoes.hpp"
#include "usuario.hpp"
#include "produtos.hpp" 

void progresso(int n) {
	
	int i;
	cout << "[";
	for(i = 0; i <= n; i++) {
		cout << ".";
		system("sleep 0.3");
	}
	cout << "]";
}

int gerarCodigo(string nome) {

	srand(time(NULL));
	int codigo;
	//int i = 0;
	//char code[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	for(unsigned int i = 0; i < nome.size(); i++){
		codigo += nome[i]*(rand() %10);
	}
	
	return codigo;
}

void salvarUsuarios (vector<Usuario>& v) {
	ofstream saida("./database/usuarios.txt") ;
	if(saida.bad() || !saida || (saida.is_open() == 0)) {
		cerr << "O arquivo usuarios.txt nao abriu corretamente" << endl ;
		cerr << "O programa sera encerrado" << endl ;
		exit(1) ;
	}

	for (Usuario i : v) {
		cout << i << endl ;
		saida << i << endl ;
	}
	saida.close() ;
}

void salvarProdutos (vector<Produto>& p) {
	ofstream saida("../database/produtos.txt") ;
	if(saida.bad() || !saida || (saida.is_open() == 0)) {
		cerr << "O arquivo produtos.txt nao abriu corretamente" << endl ;
		cerr << "O programa sera encerrado" << endl ;
		exit(1) ;
	}

	for (Produto i : p) {
		cout << i << endl ;
		saida << i << endl ;
	}
	saida.close() ;
}


void carregarUsuarios (vector<Usuario>& v) {
	ifstream entrada("./database/usuarios.txt") ;
	if(entrada.bad() || !entrada || (entrada.is_open() == 0)) {
		cerr << "O arquivo usuarios.txt nao abriu corretamente" << endl ;
		cerr << "O programa sera encerrado" << endl ;
		exit(1) ;
	}

	string nome , cpf , senha , usuario, telefone , data;
	int idade , codigo ;
	while (!entrada.eof()) {
		entrada >> nome >> idade >> cpf >> data >> usuario >> codigo >> senha >> telefone  ;
		Usuario u(nome,idade,cpf,data,usuario,codigo,senha, telefone) ;		
		v.push_back(u) ; 
	}
	entrada.close() ;
}

void carregarProdutos (vector<Produto>& v) {
	ifstream entrada("./database/produtos.txt") ;
	if(entrada.bad() || !entrada || (entrada.is_open() == 0)) {
		cerr << "O arquivo produtos.txt nao abriu corretamente" << endl ;
		cerr << "O programa sera encerrado" << endl ;
		exit(1) ;
	}
	Produto p ;
	while (!entrada.eof()) {
		entrada >> p ;
		v.push_back(p) ; 
	}
	entrada.close() ;
}
