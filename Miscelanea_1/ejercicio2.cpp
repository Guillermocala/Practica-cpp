/*
*Guillermo Cala; nov/ 25/ 2018
*elaborar un algoritmo que rellene un array con los 100 primeros numeros enteros y los muestre en pantalla en orden descendente.
*/
#include <iostream>
using namespace std;
void ReadArray(int list[], const int * limit);
void PrintArray(int list[], const int * limit);
int main()
{
	const int Indicador = 100;
	int Numeros[Indicador];
	ReadArray(Numeros, &Indicador);
	cout << "Numeros del 1 al 100 en forma descendente: " << endl;
	PrintArray(Numeros, &Indicador);
	cout << endl;
	system("pause");
	return 0;
}
void ReadArray(int list[], const int * limit)
{
	for(int i = 1; i < *limit; i++)
	{
		list[i] = i;
	}
}
void PrintArray(int list[], const int * limit)
{
	for(int j = *limit; j >= 1; j--)
	{
		cout << "- " << list[j];
	}
}
