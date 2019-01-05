/*
*guillermo cala; jan/ 04/ 19
*elaborar un algoritmo que lea una cadena y la encripte sumando 3 al código ASCII de cada carácter. Mostrar por pantalla.
*/
#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
	int cantidad;
	char frase[50];
	printf ("Introduzca una frase: ");
	gets (frase);
	cantidad = strlen(frase);
	for (int i = 0; i < 50; i++)
	{
		if (frase[i] != '\0')//para llegar hasta el ultimo caracter
		{
			frase[i] = frase[i] + 3;//el caracter guardado se le suma 3 posiciones modificandolo
		}
	}
	cout << "\nLa nueva frase es: " << endl;
	for (int i = 0; i < sum; i++)
	{
		cout << frase[i];
	}
	printf ("\n\n");
	system ("PAUSE");     
	return 0;
}