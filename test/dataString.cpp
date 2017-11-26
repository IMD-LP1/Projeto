#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <sstream>

string dataString(int dia, int mes, int ano) {

	std::stringstream d, m, a;
	d << dia;
	m << mes;
	a << ano;

	return d.str() + "/" + m.str() + "/" + a.str();
	
}

int main() {

	int dia{25}, mes{11}, ano{2017};
	string data;

	cout << "Informe o dia o mes e o ano: ";
	cin >> dia >> mes >> ano;

	data = dataString(dia, mes, ano);

	cout << data << endl;

}