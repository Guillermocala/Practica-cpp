/*
*Guillermo Cala; dec/ 02/ 2018
*elaborar un algoritmo que muestre los primeros 100 n�meros de izquierda a derecha usando un array de dos dimensiones.
*al no especificar el tama�o de cada dimension se puede hacer a gusto propio, lo normal ser�a una matriz 10x10
*tambien se pueden hacer de 4x25||25x4 2x50||50x2 5x20||20x5
*/
#include <iostream>
using namespace std;
void FillArray(int list[][10], const int * Fil, const int * Col);
void PrintArray(int list[][10], const int * Fil, const int * Col);
int main()
{
	const int CFilas = 10;
	const int CColumnas = 10;
	int Numeros[CFilas][CColumnas];
	FillArray(Numeros, &CFilas, &CColumnas);
	cout << "El vector bidimensional queda asi..." << endl;
	PrintArray(Numeros, &CFilas, &CColumnas);
	system("pause");
	return 0;
}
void FillArray(int list[][10], const int * Fil, const int * Col)
{
	int Acum = 1;
	for(int i = 0; i < *Fil; i++)
	{
		for(int j = 0; j < *Col; j++)
		{
			list[i][j] = Acum;
			Acum++;
		}
	}
}
void PrintArray(int list[][10], const int * Fil, const int * Col)
{
	for(int i = 0; i < *Fil; i++)
	{
		for(int j = 0; j < *Col; j++)
		{
			cout << " " << list[i][j];
		}
		cout << endl;
	}
}
