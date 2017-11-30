/**
 * @file	loja.cpp
 * @brief	Implementacao das funções de inicialização do sistema
 * @author	Fernando Rodrigues Maciel (fernandomaciel@ufrn.edu.br)
 * @since	25/11/2017
 * @date	25/11/2017
 * @sa		jogador.hpp
 */
#include "loja.hpp"

void loja() {
	
	int n;
	system("clear");

	cout << "\tE-Commerce" << endl;
	cout << "1-Login" << endl;
	cout << "2-Cadastrar" << endl;
	cout << "3-Buscar" << endl;
	cout << "4-Vender" << endl;
	cout << "0-sair" << endl;
	
	cin >> n;
	do{	
		cout << "Número inválido! Digite um número válido.\n";
		cin >> n;
	}while(n < 0 or n > 4);
 	
	
	switch(n) {
		case 1:
			//ut << "Efetuar login:" << endl;
			login();
			break;
		case 2:	
			//ut << "Cadastrar-se:" << endl;
			cadastro();
			break;
		case 3:
			//cout << "Buscar Produto:" << endl;
			buscar();
			break;
		case 4:
			//cout << "Vender produto:" << endl;
			vender();
		case 0:
			exit(EXIT_SUCCESS);
		default:
			exit(EXIT_FAILURE);
	}

}

void buscar() {
	
	string produto;	
	
	cout << "O que deseja buscar: ";
	cin >> produto;
	
	
	//buscarProduto(produto);

}

void login() {

	string nome;
	string senha;
	string senhaAUX = "";
	while(senhaAUX == "")
	{
		cout << "Usuário: ";
		cin >> nome;      		
		senhaAUX = verificaUsuario(nome,1); 	// 1 = CASO LOGIN.
	}
	//IMPLEMENTAR METODO PARA BUSCAR USUARIO POR EMAIL OU CODIGO
	// CASO O USUARIO NÃO EXISTA MOSTRAR E COLOCAR OPÇÃO DE CADASTRAR DO CONTRARIO CONTUNUAR
	while(senha != senhaAUX){
		cout << "Senha: ";
		cin >> senha;
	}

	cout << "OK!\n";  
	//VERIFICAR SE SENHA CORREMPONDO COM A CADASTRADA CASO CONTRARIO PEDIR PARA O USUARIO TENTAR
	//NOVAMENTE CASO ELE ERRE 3 VEZES INFORMAR QUE ELE DEVE ENTRAR EM CONTATO COM O SUPORTE

	// SE TUDO FOI OK FAZER LOGIN NO SISTEMA 

}

void cadastro() {

	char opcao;
	string nome;
	string CPF;
	string idade;
	string email;
	int codigo;

	cout << "Informe seu primeiro nome: ";
	cin >> nome;

	cout << "Informe sua idade: ";
	cin >> idade;
	cout << "Informe seu CPF: ";
	cin >> CPF;
	//VERIFICAR SE JÁ EXISTE CPF CADASTRADO CASO EXISTA INFORMAR QUE O CPF ESTÁ CADASTRADO
	//cout << "Nascimento: ";

	cout << "E-mail: ";
	cin >> email;
	// VERIFICAR SE JÁ EXITE EMAIL CADASTRADO CASO EXISTA INFORMA QUE JÁ EXISTE O MESMO EMAIL CADASTRADO
	codigo = gerarCodigo(nome);	
	// SE TUDO OK GERAR CODIGO DE USUARIO
	cout << "Seu codigo de usuario é: " << codigo << endl;

	cout << "Confirmar cadastastro[S/n]? ";
	cin >> opcao;

	if(opcao == 'S') {

		cout << "Usuário cadastrado..." << endl;
		cout << "Faça login para continuar" << endl;
		/** A CONTINUAR..  */ 

	} else {
		cout << "Todo as informações inseridas serão perdidas" << endl;
		cout << "Precione enter para continuar " << endl;
		cin.ignore().get();
		system("sleep 2");
		loja();
	}
}

void vender() {

	// VERIFICAR COMO O USUARIO ESTA LOGADO
	//if(userLogin) {
		//inserirProduto();
	//} else {
		cout << "É necessario criar uma conta...!" << endl;
		system("sleep 2");
		loja();
	//}
}

string verificaUsuario(string usuario, int n)
{
	std::ifstream file("usuarios.txt");
	 if(!file.is_open())
	 {
	 	cout << "ERRO: Programa não conseguiu verificar os usuarios\n";
	 	return "";
	 }
		 while (!file.eof()){
		 	  	 string line, user, senha, nome, idade, dataNascimento;
			 	 getline(file, line);
			 	 std::istringstream iss(line);
			 	 iss >> user;
			 	 iss >> senha;
			 	 iss >> nome;
			 	 iss >> idade;
			 	 iss >> dataNascimento;
			 	 if(n == 1 && user == usuario) { return senha; }
		 }


	 return "";

}