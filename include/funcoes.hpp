/**
 * @file	funcoes.hpp
 * @brief	Definiçao de funcoes utilizadas no projeto
 * @author	Fernando Rodrigues Maciel (fernandomaciel@ufrn.edu.br)
 * @author	Cleydson Talles Araujo Vieira (talles17.a@hotmail.com)
 * @author  Gabriel Queiroz de Almeida Pereira (gabrielqp@escritoriodeiluminacao.com.br)
 * @since	16/11/2017
 * @date	30/11/2017
 */
#ifndef _FUNCOES_HPP_
#define _FUNCOES_HPP_

#include "funcoes.hpp"
#include "usuario.hpp"
#include "produtos.hpp"

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

/* @brief Funcao que da andamento ao programa */
void progresso(int n);
/* @brief Funcao que gera um codigo randomico */
int gerarCodigo(string tipo);
/**
 *  @brief Funcao que salva todos os usarios do programa em database/usuarios.txt 
 *  @details v Vetor de usuarios da loja 
 */
void salvarUsuarios (vector<Usuario> &v) ;
/**
 *  @brief Funcao que carrega todos os usuarios do programa de database/usuarios.txt 
 *  @details v Vetor de usuarios da loja 
 */
void carregarUsuarios(vector<Usuario>& v) ;
/**
 *  @brief Funcao que salva todos os produtos do programa em database/produtos.txt 
 *  @details v Vetor de usuarios da loja 
 */
void salvarProdutos (vector<Produto> &v) ;
/**
 *  @brief Funcao que carrega todos os produtos do programa em database/produtos.txt 
 *  @details v Vetor de usuarios da loja 
 */
void carregarProdutos(vector<Produto>& v) ;

#endif //_FUNCOES_HPP_
