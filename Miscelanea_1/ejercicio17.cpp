/*
*Guillermo Cala; dec/ 04/ 2018
*elaborar un algoritmo que muestre los primeros 100 números de izquierda a derecha usando un array de dos dimensiones
*la última fila a mostrará la suma de sus respectivas columnas.
*/
#include <iostream>
using namespace std;

int main ()
{
	const int CFilas = 50;
	const int CColumnas = 50;
	int Numeros[CFilas][CColumnas];
	int Numero = 1, NumFilas = 10, NumColumnas = 10, i, j;
	for (i = 0; i < NumFilas; i++)
	{
		for (j = 0; j < NumColumnas; j++)
		{
			Numeros[i][j] = Numero;
			Numero++;
		}
	}
	NumFilas++;
	for (i = 0; i < NumFilas; i++)
	{
		float Suma = 0;
		for (j = 0; j < NumColumnas; j++)
		{
			Suma = Suma + Numeros[i][j]; 
		}
		Numeros[i][j] = Suma;
	}
	for (i = 0; i < NumFilas; i++)
	{
		for (j = 0; j < NumColumnas; j++)
		{
			cout << Numeros[i][j] << " ";
		}
		cout << endl;
	}
	
	
	
	system ("pause");
	return 0;
}
