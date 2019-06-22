/*
*guillermo cala; jan/ 3/ 19
*elaborar un algorimo que rellene una matriz de 3x3 y muestre su traspuesta (la traspuesta se consigue intercambiando filas por columnas y viceversa).
*/
#include <iostream>
using namespace std;
void FillArray(int list[][3], const int * Fil, const int * Col);
void PrintArray(int list[][3], const int * Fil, const int * Col);
void Transpuesta(int list[][3], int list2[][3], const int * Fil, const int * Col);
int main()
{
	const int CFil = 3;
	const int CCol = 3;
	int matriz[CFil][CCol], matriz2[CFil][CCol];
	FillArray(matriz, &CFil, &CCol);
	Transpuesta(matriz, matriz2, &CFil, &CCol);
	cout << "\nLa matriz queda asi..." << endl;
	PrintArray(matriz, &CFil, &CCol);
	cout << "\nLa transpuesta es..." << endl;
	PrintArray(matriz2, &CFil, &CCol);
	system("pause");
	return 0;
}
void FillArray(int list[][3], const int * Fil, const int * Col)
{
	for(int i = 0; i < *Fil; i++)
	{
		for(int j = 0; j < *Col; j++)
		{
			cout << "ingrese el valor para la posicion [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> list[i][j];
		}
	}
}
void PrintArray(int list[][3], const int * Fil, const int * Col)
{
	for(int i = 0; i < *Fil; i++)
	{
		cout << "[\t";
		for(int j = 0; j < *Col; j++)
		{
			cout << list[i][j] << "\t";
		}
		cout << "]\n";
	}
}
void Transpuesta(int list[][3], int list2[][3], const int * Fil, const int * Col)
{
	for(int i = 0; i < *Fil; i++)
	{
		for(int j = 0; j < *Col; j++)
		{
			list2[i][j] = list[j][i];
		}
	}
}
