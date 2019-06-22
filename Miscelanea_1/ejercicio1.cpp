/*
*Guillermo Cala;  nov/ 25/ 2018
*elaborar un algoritmo que rellene un array con los 100 primeros n�meros enteros y los muestre en pantalla en orden ascendente.
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
	cout << "Numeros del 1 al 100 en forma ascendente: " << endl;
	PrintArray(Numeros, &Indicador);
	cout << endl;
	system("pause");
	return 0;
}
void ReadArray(int list[], const int * limit)
{
	for(int i = 0; i < *limit; i++)
	{
		list[i] = i + 1;
	}
}
void PrintArray(int list[], const int * limit)
{
	for(int j = 0; j < *limit; j++)
	{
		cout << "- " << list[j];
	}
}
