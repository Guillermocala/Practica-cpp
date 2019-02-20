/*
*guillermo cala; jan/ 13 / 19
*constants literals/ string literals
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string frase1 = "esta es una frase, ahora un \nsalto de linea y ahora una\ttabulacion";
	cout << frase1 << endl;
	string frase2 = "esta es una" " frase compuesta por" " varias sentencias en comillas";
	cout << frase2 << endl;
	string frase3 = "esta es una frase \
multilinea que solo se puede \
apreciar en el codigo fuente";
	cout << frase3 << endl;
	/*the raw strings no pueden procesar ningun caracter de escape como \n, \t o \"*/
	string frase4 = R"(esta es una raw string sin secuencia de caracteres)";
	cout << frase4 << endl;
	string frase5 = R"(esta es otra raw string\nun salto aqui)";
	cout << frase5 << endl;
	cin.get();
	return 0;
}
