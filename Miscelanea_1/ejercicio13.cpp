/*
*Guillermo Cala; nov/29/2018
*elaborar un algoritmo que mediante un array almacene n�meros tanto positivos como negativos y los muestre ordenados.
*/
#include <iostream>
using namespace std;
void FillArray(int list[], const int * limit);
void Sort(int list[], const int * limit);
void PrintArray(int list[], const int * limit);
int main()
{
	const int Indicador = 100;
	int Numeros[Indicador];
	int Cantidad;
	cout << "Ingrese la cantidad de datos a almacenar: ";
	cin >> Cantidad;
	FillArray(Numeros, &Cantidad);
	cout << "Los datos ordenados en orden ascendente " << endl;
	Sort(Numeros, &Cantidad);
	PrintArray(Numeros, &Cantidad);
	system ("pause");
	return 0;
}
void FillArray(int list[], const int * limit)
{
	for(int i = 0; i < *limit; i++)
	{
		cout << "Ingrese el valor # " << i + 1 << " : ";
		cin >> list[i];
	}
}
void Sort(int list[], const int * limit)
{
	int Aux;
	for(int i = 0; i < *limit; i++)
	{
		for(int j = i; j < *limit; j++)
		{
			if(list[i] > list[j])
			{
				Aux = list[i];
				list[i] = list[j];
				list[j] = Aux;
			}
		}
	}
}
void PrintArray(int list[], const int * limit)
{
	for(int k = 0; k < *limit; k++)
	{
		cout << " - "<< list[k];
	}
	cout << endl;
}
