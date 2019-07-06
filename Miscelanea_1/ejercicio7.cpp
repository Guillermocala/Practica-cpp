/*
*Guillermo Cala; nov/ 27/ 2018
*elaborar un algoritmo que lea 10 n�meros por teclado, los almacene en un array y los ordene de forma ascendente.
*/
#include <iostream>
using namespace std;
void ReadArray(int list[], const int * limit);
void Sort(int list[], const int * limit);
void PrintArray(int list[], const int * limit);
int main()
{
	const int Cantidad = 10;
	int Numeros[Cantidad];
	ReadArray(Numeros, &Cantidad);
	Sort(Numeros, &Cantidad);
	cout << "El arreglo de forma ascendente queda asi: " << endl;
	PrintArray(Numeros, &Cantidad);
	system ("pause");
	return 0;
}
void ReadArray(int list[], const int * limit)
{
	for (int i = 0; i < *limit; i++)
	{
		cout << "Ingrese el valor #" << i + 1 << " : ";
		cin >> list[i];
	}
}
void Sort(int list[], const int * limit)
{
	int aux;
	for(int i = 0; i < *limit; i++) /*este bucle recorre la cuenta de los elementos*/
	{
		for(int j = i; j < *limit; j++) /*este bucle compara los elementos con los demas*/
		{
			if(list[i] > list[j])
			{
				aux = list[i];
				list[i] = list[j];
				list[j] = aux;
			}
		}
	}
}
void PrintArray(int list[], const int * limit)
{
	for(int j = 0; j < *limit; j++)
	{
		cout << " - " << list[j];
	}
	cout << endl;
}
