#ifndef _FUNCOES_HPP_
#define _FUNCOES_HPP_

#include "funcoes.hpp"
#include "usuario.hpp"

#include <iostream>
using std::cout;
using std::endl;
using std::cerr ;
using std::cin;
using std::string;
#include <cstdlib>
#include <string>
#include <vector>
using std::vector ;
#include <fstream>
using std::ifstream ;
using std::ofstream ;

void progresso(int n);
int gerarCodigo(string tipo);
void salvarUsuarios (vector<Usuario> &v) ;


#endif //_FUNCOES_HPP_
