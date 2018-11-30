/*
*Guillermo Cala; nov/29/2018
*elaborar un algoritmo que mediante un array almacene números tanto positivos como negativos y los muestre ordenados.
*/
#include <iostream>
using namespace std;

int main ()
{
	const int Indicador = 100;
	int Numeros[Indicador];
	int Cantidad, aux;
	cout << "Ingrese la cantidad de datos a almacenar: ";
	cin >> Cantidad;
	for (int i = 0; i < Cantidad; i++)
	{
		cout << "Ingrese el numero # " << i + 1 << " : ";
		cin >> Numeros[i];
	}
	cout << "Los datos ordenados en orden ascendente " << endl;
	for (int i = 0; i < Cantidad; i++)
	{
		for (int j = i; j < Cantidad; j++)
		{
			if (Numeros[i] > Numeros[j])
			{
				aux = Numeros[i];
				Numeros[i] = Numeros[j];
				Numeros[j] = aux;
			}
		}
	}
	for (int i = 0; i < Cantidad; i++)
	{
		cout << Numeros[i] << endl;
	}
	cout << endl;
	
	system ("pause");
	return 0;
}
