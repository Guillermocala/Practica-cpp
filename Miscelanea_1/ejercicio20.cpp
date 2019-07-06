/*
*guillermo cala; jan/ 3/ 19
*elaborar un algoritmo que lea una cadena y la muestre al revés.
*/
#include <iostream>
#include <cstring>
using namespace std;
void FillChar(char text[200], int * limit);
void PrintText(char text[200], const int * limit);
int main()
{
	int Cant;
	char texto[200];
	FillChar(texto, &Cant);
	cout << "el texto invertido es: " << endl;
	PrintText(texto, &Cant);
	system("pause");
	return 0;
}
void FillChar(char text[200], int * limit)
{
	cout << "ingrese una oracion cualquiera: ";
	gets(text);
	*limit = strlen(text);
}
void PrintText(char text[200], const int * limit)
{
	for(int i = *limit; i >= 0; i--)
	{
		cout << text[i];
	}
	cout << endl;
}
