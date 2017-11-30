/**
 * @file	loja.cpp
 * @brief	Implementacao das funções de inicialização do sistema
 * @author	Fernando Rodrigues Maciel (fernandomaciel@ufrn.edu.br)
 * @since	25/11/2017
 * @date	25/11/2017
 * @sa		jogador.hpp
 */
#include "loja.hpp"
#include "funcoes.hpp"
#include "produtos.hpp"

void loja(vector<Usuario>& v) {
	
	int n;
	int varlogin = 0;
	system("clear");

	cout << "\tE-Commerce" << endl;
	cout << "1-Login" << endl;
	cout << "2-Cadastrar" << endl;
	cout << "3-Buscar" << endl;
	cout << "4-Vender" << endl;
	cout << "5-Ver todos produtos disponíveis" << endl;
	cout << "0-sair" << endl;
	
	cin >> n;
	do{	
		cout << "Número inválido! Digite um número válido.\n";
		cin >> n;
	}while(n < 0 or n > 4);
 	
	
	switch(n) {

		case 1:
			if(varlogin == 0) {
			//ut << "Efetuar login:" << endl;
			login();
			varlogin++;
			break;
		}
			else {
				cout << "Login já efetuado:\n";
				loja(v);
				break;
			}



		case 2:	
			//ut << "Cadastrar-se:" << endl;
			cadastro(v);
			break;


		case 3:
			if(varlogin != 0) {
			//cout << "Buscar Produto:" << endl;
			buscar();
			break;
		}
			else {
				cout << "É necessário efetuar login primeiro.\n";
				break;
			}


		case 4:
			if(varlogin != 0) {
			//cout << "Vender produto:" << endl;
			vender();
			break;
			}
			else {
				cout << "É necessário efetuar login primeiro.\n";
			}


		case 0:
			salvarUsuarios (v) ;
			exit(EXIT_SUCCESS);


		case 5: 
			if(varlogin != 0) {
				ImprimeTodos();
				break;
			}
			else {
				cout << "É necessário efetuar login primeiro.\n";
			}
		default:
			exit(EXIT_FAILURE);
	}

}

void buscar() {
	
	string produto;	
	
	cout << "O nome do produto que deseja buscar: ";
	cin >> produto;
	buscarProduto(produto);

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

void cadastro(vector<Usuario> &v) {

	char opcao;
	string nome;
	string CPF;
	string email;
	int codigo , idade;
	Usuario u ;

	cout << "Informe seu primeiro nome: ";
	cin >> nome;
	u.setNome(nome) ;

	cout << "Informe sua idade: ";
	cin >> idade;
	u.setIdade(idade) ;
	cout << "Informe seu CPF: ";
	cin >> CPF;
	u.setCPF(CPF) ;
	//VERIFICAR SE JÁ EXISTE CPF CADASTRADO CASO EXISTA INFORMAR QUE O CPF ESTÁ CADASTRADO
	//cout << "Nascimento: ";

	cout << "E-mail: ";
	cin >> email;
	u.setEmail(email) ;
	// VERIFICAR SE JÁ EXITE EMAIL CADASTRADO CASO EXISTA INFORMA QUE JÁ EXISTE O MESMO EMAIL CADASTRADO
	codigo = gerarCodigo(nome);	
	// SE TUDO OK GERAR CODIGO DE USUARIO
	cout << "Seu codigo de usuario é: " << codigo << endl;
	u.setCodigo(codigo) ;

	cout << "Confirmar cadastastro[S/n]? ";
	cin >> opcao;

	if(opcao == 'S') {

		cout << "Usuário cadastrado..." << endl;
		v.push_back(u) ;
		cout << "Faça login para continuar" << endl;
		/** A CONTINUAR..  */ 

	} 
	else {
		cout << "Todo as informações inseridas serão perdidas" << endl;
		cout << "Precione enter para continuar " << endl;
		cin.ignore().get();
		system("sleep 2");
		loja(v);
	}
}

void vender() 
{ 	
	string nome, marca, condicao ;
	float preco  ;
	int quantidade , dia , mes , ano ;
	Produto p ;
	// LEMBRAR TAMBEM DE ALTERAR A CLASSE PRODUTO, PARA ESSAS DESCRIÇOES ACIMA.
	cout << "Digite os dados do produto abaixo:\n";
	

	cout << "Nome: ";
	cin >> nome;
	p.setNome(nome) ;
	cout << "Preço: ";
	cin >> preco;
	p.setPreco(preco) ;

	cout << "Código produto: ";
	// METODO QUE VAI CONSEGUIR O CODIGO DO PRODUTO.
	p.setCodigo(0000) ;
	
	cout << "Data de fabricacao " << endl ;
	cout << "Dia: ";
	cin >> dia ;
	cout << "Mes: ";
	cin >> mes ;
	cout << "Ano: ";
	cin >> ano ;
	Data d(dia,mes,ano) ;
	p.setFabricacao(d) ;
	//cout << "Validade (Caso não possua, digite (NONE)) : ";
	//cin >> validade;

	cout << "Marca: ";
	cin >> marca;
	p.setMarca(marca) ;

	
	cout << "Condicao (novo/usador) : ";
	cin >> condicao;
	p.setCondicao(condicao) ;

	cout << "Quantidade: ";
	cin >> quantidade;
	p.setQuantidade(quantidade) ;

	cout << "Código do vendedor: ";
	// METODO QUE VAI CONSEGUIR CODIGO DO VENDEDOR.

	std::ofstream out;
	out.open("produtos2.txt", std::ofstream::app);
	// ADICIONA TUDO NO TXT COM UM ESPAÇO ENTRE AS PALAVRAS.
	out << p << endl;
	

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


void buscarProduto(string n)
{
	transform(n.begin(), n.end(), n.begin(), ::toupper); // TRANSFORMA O NOME DO PROUTO PARA MAISCULO.
	string aux;
	string aux2;

	aux[0] = n[0];						// ATRIBUI AS 3 PRIMEIRAS LETRAS PARA UMA AUXILIAR.
	aux[1] = n[1];
	aux[2] = n[2];
	
	std::ifstream file("produtos.txt");
	if(!file.is_open())
	 {
	 	cout << "ERRO: Programa não conseguiu encontrar o arquivo txt\n";
	 }

	  while (!file.eof()){
	  			 string line, nome, preco, codigo, fabricacao, validade, marca, tipo, condicao, quantidade, descricao, vendedor;
	  			 getline(file, line);
	  			 std::transform(line.begin(), line.end(), line.begin(), ::toupper);
			 	 
			 	 std::istringstream iss(line);
			 	 iss >> nome;
			 	 iss >> preco;
			 	 iss >> codigo;
			 	 iss >> fabricacao;
			 	 iss >> validade;
			 	 iss >> marca;
			 	 iss >> tipo;
			 	 iss >> condicao;
			 	 iss >> quantidade;
			 	 iss >> vendedor;
			 	 if(!nome.empty()) {
					aux2[0] = nome[0];		// ADICIONA OS 3 PRIMEIROS NOME DE UM PRODUTO "X" A OUTRA AUXILIAR.
					aux2[1] = nome[1];
					aux2[2] = nome[2];
			 	 }
			 	 
			 	 if(aux[0] == aux2[0] && aux[1] == aux2[1] && aux[2] == aux2[2]) 		// SE AS 3 PRIMEIRAS LETRAS DO PRODUTO  QUE ELE DIGITOU FOR IGUAL AS 3 PRIMEIRAS DO PRODUTO 'X'
			 	 																		// A DESCRICAO DESSES PRODUTOS.
			 	 {
			 	 cout << "Nome: " << nome << endl;
			 	 cout << "Preco: " << preco << endl;
			 	 cout << "Codigo: " << codigo << endl;
			 	 cout << "Fabricacao: " << fabricacao << endl;
			 	 cout << "Validade: " << validade << endl;
			 	 cout << "Marca: " << marca << endl;
			 	 cout << "Tipo: " << tipo << endl;
			 	 cout << "Condicao: " << condicao << endl;
			 	 cout << "Quantidade: " << quantidade << endl;
			 	 cout << "Vendedor: " << vendedor << endl;
			 	 cout << "-----------------------" << endl;
			 	}
			 	}
}

void ImprimeTodos()
{

	std::ifstream file("produtos.txt");
	if(!file.is_open())
	 {
	 	cout << "ERRO: Programa não conseguiu encontrar o arquivo txt\n";
	 	// ADICIONAR METODO DE SAIDA.
	 }
	cout << "-------------- PRODUTOS DISPONIVEIS----------------" << endl;
	  while (!file.eof()){
	  			 string line, word;
	  			 getline(file, line);
			 	 cout << line << endl;

	}
}
