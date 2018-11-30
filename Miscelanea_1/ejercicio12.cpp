/*
*Guillermo Cala; nov/ 29/ 2018
*elaborar un algoritmo que lea 10 números por teclado, los almacene en un array y muestre la media (promedio).
*/
#include <iostream>
using namespace std;

int main ()
{
	const int Indicador = 10;
	int Numeros[Indicador];
	int SumaNum = 0;
	float Media = SumaNum / Indicador;
	cout << "Media de 10 numeros enteros" << endl;
	for (int i = 0; i < Indicador; i++)
	{
		cout << "Ingrese el valor # " << i + 1 << " : ";
		cin >> Numeros[i];
		SumaNum += Numeros[i];
	}
	cout << "la media es: " << Media << endl;
	system ("pause");
	return 0;
}
