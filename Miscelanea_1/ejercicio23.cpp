/*
*guillermo cala; jan/ 04/ 19
*elaborar un algoritmo que lea una cadena y la encripte sumando 3 al código ASCII de cada carácter. Mostrar por pantalla.
*/
#include <iostream>
#include <cstring>
using namespace std;
void FillChar(char text[50], int * limit);
void Encrypt(char text[50], const int * limit);
void PrintText(char text[50], const int * limit);
int main()
{
	int Cant;
	char frase[50];
	FillChar(frase, &Cant);
	Encrypt(frase, &Cant);
	cout << "\nLa nueva frase es..." << endl;
	PrintText(frase, &Cant);
	system("pause");
	return 0;
}
void FillChar(char text[50], int * limit)
{
	cout << "Ingrese una oracion cualquiera: ";
	gets(text);
	*limit = strlen(text);
}
void Encrypt(char text[50], const int * limit)
{
	for(int i = 0; i < *limit; i++)
	{
		if(text[i] != '\0')//para llegar hasta el ultimo caracter
		{
			text[i] = text[i] + 3;//el caracter guardado se le suma 3 posiciones modificandolo
		}
	}
}
void PrintText(char text[50], const int * limit)
{
	for(int i = 0; i < *limit; i++)
	{
		cout << text[i];
	}
	cout << endl;
}
