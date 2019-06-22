/*
*Guillermo Cala; Dec/ 05/ 18
*elaborar un algoritmo que rellene un array de dos dimensiones con n�meros pares
*lo pinte y despu�s que pida una posici�n X,Y y mostrar el n�mero correspondiente.
*/
#include <iostream>
using namespace std;
void FillArray(int list[][10], const int * Fil, const int * Col);
void PrintArray(int list[][10], const int * Fil, const int * Col);
void LocatePoint(int list[][10]);
int main()
{
	const int CFilas = 10;
	const int CColumnas = 10;
	int NumPares[CFilas][CColumnas];
	FillArray(NumPares, &CFilas, &CColumnas);
	PrintArray(NumPares, &CFilas, &CColumnas);
	LocatePoint(NumPares);
	system("pause");
	return 0;
}
void FillArray(int list[][10], const int * Fil, const int * Col)
{
	int Numero = 2;
	for(int i = 0; i < *Fil; i++)
	{
		for(int j = 0; j < *Col; j++)
		{
			if(Numero % 2 == 0)
			{
				list[i][j] = Numero;
				Numero++;
			}
			else
			{
				list[i][j] = Numero + 1;
			}
			Numero++;
		}
	}
}
void PrintArray(int list[][10], const int * Fil, const int * Col)
{
	for(int i = 0; i < *Fil; i++)/*imprime datos*/
	{
		for(int j = 0; j < *Col; j++)
		{
			cout << " - " << list[i][j];
		}
		cout << endl;
	}
}
void LocatePoint(int list[][10])
{
	int NumFila, NumColumna;
	cout << "Ingrese la Fila de la que desea obtener el dato: ";
	cin >> NumFila;
	cout << "Ingrese la Columna de la que desea obtener el dato: ";
	cin >> NumColumna;
	cout << "El dato es: " << list[NumFila - 1][NumColumna - 1] << endl;
}
