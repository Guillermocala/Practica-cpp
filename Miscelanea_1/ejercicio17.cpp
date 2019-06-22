/*
*Guillermo Cala; dec/ 04/ 2018
*elaborar un algoritmo que muestre los primeros 100 n�meros de izquierda a derecha usando un array de dos dimensiones
*la �ltima fila a mostrar� la suma de sus respectivas columnas.
*/
#include <iostream>
using namespace std;
void FillArray(int list[][15], const int * Fil, const int * Col);
void SumArray(int list[][15], int * Fil, const int * Col);
void PrintArray(int list[][15], const int * Fil, const int * Col);
int main()
{
	const int CFilas = 15;
	const int CColumnas = 15;
	int Numeros[CFilas][CColumnas];
	int NumFil = 10, NumCol = 10;
	FillArray(Numeros, &NumFil, &NumCol);
	SumArray(Numeros, &NumFil, &NumCol);
	PrintArray(Numeros, &NumFil, &NumCol);
	system("pause");
	return 0;
}
void FillArray(int list[][15], const int * Fil, const int * Col)
{
	int Numero = 1;
	for(int i = 0; i < *Fil; i++)/*lectura de datos*/
	{
		for(int j = 0; j < *Col; j++)
		{
			list[i][j] = Numero;
			Numero++;
		}
	}
}
void SumArray(int list[][15], int * Fil, const int * Col)
{
	int i, j;/*para no causar colisiones al ingresar la ultima fila*/
	for(i = 0; i < *Fil; i++)/*suma de datos*/
		int Suma = 0;
		{
		for(j = 0; j < *Col; j++)
		{
			Suma = Suma + list[j][i];/*como se va a sumar las columnas el indice es al reves*/
		}
		list[j][i] = Suma;/*como se ingresa en la ultima fila, el inidice debe seguir siendo el mismo*/
	}
	++*Fil;
}
void PrintArray(int list[][15], const int * Fil, const int * Col)
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
