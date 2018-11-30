/*
*Guillermo Cala; nov/ 29/ 2018
*elaborar un algoritmo que rellene un array con 20 números y luego busque un número concreto.
*/
#include <iostream>
using namespace std;

int main ()
{
	const int Indicador = 20;
	int Numeros[Indicador];
	int NumBuscar, cont = 0;
	for (int i = 0; i < Indicador; i++)
	{
		cout << "Ingrese el numero #" << i + 1 << " : ";
		cin >> Numeros[i];
	}
	cout << "Ingrese el numero que desea buscar: ";
	cin >> NumBuscar;
	for (int i = 0; i < Indicador; i++)
	{
		if (Numeros[i] == NumBuscar)
		{
			cont++;
		}
	}
	cout << "El numero " << NumBuscar << " esta " << cont << " veces" << endl;
	system ("pause");
	return 0;
}
