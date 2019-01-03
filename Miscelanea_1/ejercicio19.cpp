/*
*guillermo cala; jan/ 3/ 19
*elaborar un algorimo que rellene una matriz de 3x3 y muestre su traspuesta (la traspuesta se consigue intercambiando filas por columnas y viceversa).
*/
#include <iostream>
using namespace std;

int main()
{
	int matriz[3][3], matriz2[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "ingrese el valor para la posicion [" << i << "][" << j << "]: ";
			cin >> matriz[i][j];
		}
	}
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "[\t";
		for (int j = 0; j < 3; j++)
		{
			cout << matriz[i][j] << "\t";
		}
		cout << "]\n";
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matriz2[j][i] = matriz[i][j];
		}
	}
	cout << "\nla transpuesta es: " << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "[\t";
		for (int j = 0; j < 3; j++)
		{
			cout << matriz2[i][j] << "\t";
		}
		cout << "]\n";
	}
	system("pause");
	return 0;
}