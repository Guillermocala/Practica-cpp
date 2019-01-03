/*
*guillermo cala; jan/ 3/ 19
*elaborar un algoritmo que lea una cadena y la muestre al revés.
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int cantidad;
	char texto[200];
	cout << "ingrese una oracion cualquiera: ";
	gets(texto);
	cantidad = strlen(texto);
	cout << "el texto invertido es: " << endl;
	for (int i = cantidad; i >= 0; i--)
	{
		cout << texto[i];
	}
	cout << endl;
	system("pause");
	return 0;
}