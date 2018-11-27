/*
*Guillermo Cala; nov/ 26/ 2018
*elabore un algoritmo que rellene un array con los números primos comprendidos entre 1 y 100 y los muestre en pantalla en orden ascendente.
*/
#include <iostream>
using namespace std;

int main ()
{
	const int Indicador = 100;
	int Numeros[Indicador];
	int CantidadPrimos = 0;
	cout << "Numeros primos del 1 al 100: " << endl;
	for (int i = 1; i <= Indicador; i++)
	{
		int cont = 0;
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				cont++;
			}
		}
		if (cont == 2)
		{
			Numeros[CantidadPrimos] = i;
			CantidadPrimos++;
		}
	}
	for (int k = 0; k < CantidadPrimos; k++)
	{
		cout << Numeros[k] << endl;
	}	
	system ("pause");
	return 0;
}
