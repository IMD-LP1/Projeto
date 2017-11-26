#ifndef _DATA_HPP_
#define _DATA_HPP_

#include <string>
using std::string;

#include <sstream>


class Data {
private:
	int dia_;
	int mes_;
	int ano_;
public:

	void setDia(int dia);
	int getDia();

	void setMes(int mes);
	int getMes();

	void setAno(int ano);
	int getAno();

	string dataString();
};

#endif //_DATA_HPP_
