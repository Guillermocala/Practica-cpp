/*
*Guillermo Cala; nov/ 26/ 2018
*elabore un algoritmo que rellene un array con los números pares comprendidos entre 1 y 100 y los muestre en pantalla en orden ascendente.
*/
#include <iostream>
using namespace std;

int main ()
{
	const int Indicador = 100;
	int Numeros[Indicador];
	int CantidadPares = 0;
	cout << "Numeros pares del 1 al 100: " << endl;
	for (int i = 1; i <= Indicador; i++)
	{
		if (i % 2 == 0)
		{
			Numeros[CantidadPares] = i;
			CantidadPares++;
		}
	}
	for (int k = 0; k < CantidadPares; k++)
	{
		cout << Numeros[k] << endl;
	}	
	system ("pause");
	return 0;
}
