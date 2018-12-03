/*
*Guillermo Cala; dec/ 02/ 2018
*elaborar un algoritmo que muestre los primeros 100 números de izquierda a derecha usando un array de dos dimensiones.
*al no especificar el tamaño de cada dimension se puede hacer a gusto propio, lo normal sería una matriz 10x10
*tambien se pueden hacer de 4x25||25x4 2x50||50x2 5x20||20x5 
*/
#include <iostream>
using namespace std;

int main ()
{
	const int CFilas = 10;
	const int CColumnas = 10;
	int Numeros[CFilas][CColumnas];
	int Acum = 1;
	for (int i = 0; i < CFilas; i++)
	{
		for (int j = 0; j < CColumnas; j++)
		{
			Numeros[i][j] = Acum;
			Acum++;
		}
	}
	cout << "El vector bidimensional queda asi..." << endl;
	for (int i = 0; i < CFilas; i++)
	{
		for (int j = 0; j < CColumnas; j++)
		{
			cout << " " << Numeros[i][j];
		}
		cout << endl;
	}
	
	
	system ("pause");
	return 0;
}
