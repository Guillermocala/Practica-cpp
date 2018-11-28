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
	int SumPares = 0, cont = 0;
	for (int i = 0; i < Indicador; i++)
	{
		if (i % 2 == 0)
		{
			NumPares[i] = i;
			cont++;
		}
	}
	for (int i = 0; i < cont; i++)
	{
		cout << NumPares[i] << endl;
	}
	cout << "Y la suma de dichos numeros es : " << SumPares;
	system ("pause");
	return 0;
}
