/*
*Guillermo Cala; Dec/ 05/ 18
*elaborar un algoritmo que rellene un array de dos dimensiones con números pares 
*lo pinte y después que pida una posición X,Y y mostrar el número correspondiente.
*/
#include <iostream>
using namespace std;

int main ()
{
	const int CFilas = 10;
	const int CColumnas = 10;
	int NumPares[CFilas][CColumnas];
	int Numero = 2, NumFila, NumColumna;
	for (int i = 0; i < CFilas; i++)
	{
		for (int j = 0; j < CColumnas; j++)
		{
			if (Numero % 2 == 0)
			{
				NumPares[i][j] = Numero;
				Numero++;
			}
			else
			{
				NumPares[i][j] = Numero + 1;
			}
			Numero++;
		}
	}
	for (int i = 0; i < CFilas; i++)
	{
		for (int j = 0; j < CColumnas; j++)
		{
			cout << NumPares[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Ingrese la Fila de la que desea obtener el dato: ";
	cin >> NumFila;
	cout << "Ingrese la Columna de la que desea obtener el dato: ";
	cin >> NumColumna;
	cout << "El dato es: "<< NumPares[NumFila - 1][NumColumna - 1] << endl;
	system ("pause");
	return 0;
}
