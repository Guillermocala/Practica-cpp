/*
*guillermo cala; jan/ 12/ 19
*uso de la libreria string y ejemplos de los tipos de declaracion
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string cadena1 = "esta es la cadena 1"; //like-c intialization (with the = operator)
	cout << cadena1 << endl;
	string cadena2 ("esta es la cadena 2");//constructor initialization (with the operator ())
	cout << cadena2 << endl;
	string cadena3 {"esta es la cadena 3"};//uniform initialization (iwth the operator {})
	cout << cadena3 << endl;
	system("pause");
	return 0;
}