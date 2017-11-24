#ifndef _USUARIO_HPP_
#define _USUARIO_HPP_

#include "data.hpp"

class Pessoa : public Data{
public:

private:
	string nome_;
	int idade_;
	string CPF_;
	string mae_;
	Data data_;
};


#endif //_USUARIO_HPP_ 
