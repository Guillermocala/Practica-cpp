/*
*Guillermo Cala; nov/ 28/ 2018
*elaborar un algoritmo que rellene un array con los 100 primeros números pares y muestre su suma.
*/
#include <iostream>
using namespace std;

int main ()
{
	const int Indicador = 100;
	int NumPares[Indicador];
	int cont = 0, SumaPares = 0;
	for (int i = 1; i < Indicador; i++)
	{
		if (i % 2 == 0)
		{
			NumPares[cont] = i;
			cont++;
		}
	}
	for (int i = 0; i < cont; i++)
	{
		cout << NumPares[i] << endl;
		SumaPares += NumPares[i];
	}
	cout << "La suma de los numeros es : " << SumaPares << endl;
	system ("pause");
	return 0;
}

