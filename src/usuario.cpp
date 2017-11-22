#include <iostream>

class Data {
public:

private:
	int dia_;
	int mes_;
	int ano_;
};

class Pessoa : public Data{
public:

private:
	string nome_;
	int idade_;
	string CPF_;
	string mae_;
	Data data;
};
