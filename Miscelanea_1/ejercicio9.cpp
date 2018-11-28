/*
*Guillermo Cala; nov/ 28/ 2018
*elaborar un algoritmo que lea 5 números por teclado, los copie a otro array multiplicados por 2 y muestre el segundo array.
*/
#include <iostream>
using namespace std;

int main ()
{
	const int Indicador = 5;
	int Numeros[Indicador];
	int CopiaNumeros[Indicador];
	for (int i = 0; i < Indicador; i++)
	{
		cout << "Ingrese el numero #" << i + 1 << " : ";
		cin >> Numeros[i];
	}
	for (int i = 0; i < Indicador; i++)
	{
		CopiaNumeros[i] = Numeros[i] * 2;
	}
	cout << "El vector copiado es: " << endl;
	for (int i = 0; i < Indicador; i++)
	{
		cout << i + 1 << "- " << CopiaNumeros[i] << endl;
	}
	
	system ("pause");
	return 0;
}
