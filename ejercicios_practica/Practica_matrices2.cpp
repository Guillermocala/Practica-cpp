/*elaborar un algoritmo que permita al usuario indicar las dimensiones del vector, leer los datos y luego imprimirlos*/
#include <iostream>
using namespace std;

int main()
{
	/*se usa el tipo de declaracion constante para manejar un espacio en memoria especifico 
	en vez de asignar valor constantes a cada campo*/
	const int CColumnas = 10; 
	const int CFilas = 10;
	int matriz[CFilas][CColumnas];
	int filas, columnas;
	cout << "Ingrese el numero de filas que va a tener el vector(maximo 10): ";
	cin >> filas;
	cout << "Ingrese el numero de columnas que va a tener el vector(maximo 10): ";
	cin >> columnas;
	if (filas > 0 && filas <= CFilas && columnas > 0 && columnas <= CColumnas)
	{
		for (int i = 0; i < filas; i++)
		{
			for (int j = 0; j < columnas; j++)
			{
				cout << "ingrese el elemento de la posicion [" << i + 1 << "] [" << j + 1 << "] : ";
				cin >> matriz[i][j];
			}
		}
	cout << "La matriz es la siguiente: " << endl;
		for (int k= 0; k < filas; k++)
		{
			cout << "[";
			for (int l = 0; l < 2; l++)
			{
				cout << "  " << matriz[k][l] << "  ";
			}
			cout << "] "<< endl;
		}
	}
	else
	{
		cout << "Usted ha ingresado valores invalidos!" << endl;
	}
	system("pause");
	return 0;
}
