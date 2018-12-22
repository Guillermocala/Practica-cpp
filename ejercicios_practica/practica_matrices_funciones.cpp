/*
*guillermo cala; dec/ 22 /18
*repaso de matrices con diagonal principal y secundario en caso de que la misma sea cuadrada con menu
*/
#include <iostream>
using namespace std;

int main()
{
	int CFilas, CColumnas;
	const int NFilas = 50;
	const int NColumnas = 50;
	int Matriz[NFilas][NColumnas];
	void LeerMatriz(int NumFilas, int NumColumnas, int Tabla[NFilas][NColumnas]);
	void ImprimeMatriz(int NumFilas, int NumColumnas, int Tabla[NFilas][NColumnas]);
	void DiagonalPrincipal(int NumFilas, int NumColumnas, int Tabla[NFilas][NColumnas]);
	void DiagonalSecundaria(int NumFilas, int NumColumnas, int Tabla[NFilas][NColumnas]);
	void Transpuesta(int NumFilas, int NumColumnas, int Tabla[][50], void ImprimeMatriz(int NumFilas, int NumColumnas, int Tabla[][50]));
	cout << "Procesador de matrices(valor limite 50)" << endl;
	cout << "Ingrese el numero de filas: ";
	cin >> CFilas;
	cout << "Ingrese el numero de columnas: ";
	cin >> CColumnas;
	LeerMatriz(CFilas, CColumnas, Matriz);
	ImprimeMatriz(CFilas, CColumnas, Matriz);
	cout << "La diagonal principal es: ";
	DiagonalPrincipal(CFilas, CColumnas, Matriz);
	cout << "\nLa diagonal secundaria es: ";
	DiagonalSecundaria(CFilas, CColumnas, Matriz);
	cout << "\nLa matriz transpuesta es: " << endl;
	Transpuesta(CFilas, CColumnas, Matriz, ImprimeMatriz(CFilas, CColumnas, Matriz));
	cout << endl;
	system("pause");
	return 0;
}
void LeerMatriz(int NumFilas, int NumColumnas, int Tabla[][50])
{
	for (int i = 0; i < NumFilas; i++) /*PARA LEER MATRIZ*/
	{
		for (int j = 0; j < NumColumnas; j++)
		{
			cout << "Ingrese el dato para la posicion [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> Tabla[i][j];
		}
	}
}
void ImprimeMatriz(int NumFilas, int NumColumnas, int Tabla[][50])
{
	for (int i = 0; i < NumFilas; i++) /*PARA IMPRIMIR MATRIZ*/
	{
		cout << "[\t";
		for (int j = 0; j < NumColumnas; j++)
		{
			cout << Tabla[i][j] << "\t";  
		}
		cout << "]" << endl;
	}
}
void DiagonalPrincipal(int NumFilas, int NumColumnas, int Tabla[][50])
{
	for (int i = 0; i < NumFilas; i++)
	{
		for (int j = 0; j < NumColumnas; j++)
		{
			if (i == j)
			{
				cout << Tabla[i][j] << " ";
			}
		}
	}
}
void DiagonalSecundaria(int NumFilas, int NumColumnas, int Tabla[][50])
{
	int DiagSecundaria = NumFilas - 1;
	for (int i = 0; i < NumFilas; i++)
	{
		for (int j = 0; j < NumColumnas; j++)
		{
			if ( (i + j) == DiagSecundaria)
			{
				cout << Tabla[i][j] << " ";
			}
		}
	}
}
void Transpuesta(int NumFilas, int NumColumnas, int Tabla[][50], void ImprimeMatriz(int NumFilas, int NumColumnas, int Tabla[][50]))
{
	int Matriz2[50][50];
	for (int i = 0; i < NumFilas; i++)
	{
		for (int j = 0; j < NumColumnas; j++)
		{
			Matriz2[j][i] = Tabla[i][j];
		}
	}
	ImprimeMatriz(NumFilas, NumColumnas, Matriz2);
}