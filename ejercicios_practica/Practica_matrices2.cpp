/*elaborar un algoritmo que permita al usuario indicar las dimensiones del vector, leer los datos y luego imprimirlos*/
#include <iostream>
using namespace std;
/*se usa el tipo de declaracion constante para manejar un espacio en memoria especifico 
en vez de asignar valor constantes a cada campo*/
const int CColumnas = 10; 
const int CFilas = 10;
int matriz[CFilas][CColumnas];
void LeerMatriz (int matriz[CFilas][CColumnas], int NumFilas, int NumColumnas);
void ImprimeMatriz (int matriz[CFilas][CColumnas], int NumFilas, int NumColumnas);

int main()
{
	int filas, columnas;
	cout << "Ingrese el numero de filas que va a tener el vector(maximo 10): ";
	cin >> filas;
	cout << "Ingrese el numero de columnas que va a tener el vector(maximo 10): ";
	cin >> columnas;
	if (filas > 0 && filas <= CFilas && columnas > 0 && columnas <= CColumnas)
	{
		LeerMatriz (matriz, filas, columnas);
		cout << "La matriz es la siguiente: " << endl;
		ImprimeMatriz (matriz, filas, columnas);
	}
	else
	{
		cout << "Usted ha ingresado valores invalidos!" << endl;
	}
	system("pause");
	return 0;
}
void LeerMatriz (int matriz[CFilas][CColumnas], int NumFilas, int NumColumnas)
{
	for (int i = 0; i < NumFilas; i++)
	{
		for (int j = 0; j < NumColumnas; j++)
		{
			cout << "ingrese el elemento de la posicion [" << i + 1 << "] [" << j + 1 << "] : ";
			cin >> matriz[i][j];
		}
	}
}
void ImprimeMatriz (int matriz[CFilas][CColumnas], int NumFilas, int NumColumnas)
{
	for (int k= 0; k < NumFilas; k++)
	{
		cout << "[";
		for (int l = 0; l < NumColumnas; l++)
		{
			cout << "  " << matriz[k][l] << "  ";
		}
		cout << "] "<< endl;
	}
}
