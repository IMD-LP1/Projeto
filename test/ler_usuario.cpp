#include <iostream>
#include <string>

#include <fstream>
#include <sstream>
using namespace std;

int main()
{
	string usuario;
	cin >> usuario;
	ifstream file("usuarios.txt");
	 if(!file.is_open())
	 {
	 	cout << "ERRO: Programa não conseguiu verificar os usuarios\n";
	 	return 1;
	 }

	 while (!file.eof()){
	 	 string line, user, senha, nome, idade, dataNascimento;
	 	 getline(file, line);
	 	 istringstream iss(line);
	 	 iss >> user;
	 	 iss >> senha;
	 	 iss >> nome;
	 	 iss >> idade;
	 	 iss >> dataNascimento;
/*	 	 if(user == usuario){
	 	 	cout << user << endl;
	 	 	cout << senha << endl;
	 	 	cout << nome << endl;
	 	 	cout << idade << endl;
	 	 	cout << dataNascimento << endl;
		 }
*/
	 }

}