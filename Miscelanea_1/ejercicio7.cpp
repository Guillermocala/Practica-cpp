/*
*Guillermo Cala; nov/ 27/ 2018
*elaborar un algoritmo que lea 10 números por teclado, los almacene en un array y los ordene de forma ascendente.
*/
#include <iostream>
using namespace std;

int main ()
{
	const int Cantidad = 10;
	int Numeros[Cantidad];
	int aux;
	for (int i = 0; i < Cantidad; i++)
	{
		cout << "Ingrese el numero #" << i + 1  << " :";
		cin >> Numeros[i];
	}
	for (int i = 0; i < Cantidad; i++) /*este bucle recorre la cuenta de los elementos*/
	{
		for (int j = i; j < Cantidad; j++) /*este bucle compara los elementos con los demas*/
		{
			if (Numeros[i] > Numeros[j])
			{
				aux = Numeros[i];
				Numeros[i] = Numeros[j];
				Numeros[j] = aux;
			}
		}
	}
	cout << "El arreglo de forma ascendente queda asi: " << endl;
	for (int i = 0; i < Cantidad; i++)
	{
		cout << "Numero #" << i + 1 << " : " << Numeros[i] << endl;
	}
	system ("pause");
	return 0;
}
