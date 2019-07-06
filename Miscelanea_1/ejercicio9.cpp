/*
*Guillermo Cala; nov/ 28/ 2018
*elaborar un algoritmo que lea 5 n�meros por teclado, los copie a otro array multiplicados por 2 y muestre el segundo array.
*/
#include <iostream>
using namespace std;
void ReadArray(int list[], const int * limit);
void Mult2(int list[], int list2[], const int * limit);
void PrintArray(int list[], const int * limit);
int main()
{
	const int Indicador = 5;
	int Numeros[Indicador];
	int CopyNums[Indicador];
	ReadArray(Numeros, &Indicador);
	Mult2(Numeros, CopyNums, &Indicador);
	cout << "El vector copiado es: " << endl;
	PrintArray(CopyNums, &Indicador);
	system("pause");
	return 0;
}
void ReadArray(int list[], const int * limit)
{
	for (int i = 0; i < *limit; i++)
	{
		cout << "Ingrese el valor #" << i + 1 << " : ";
		cin >> list[i];
	}
}
void Mult2(int list[], int list2[], const int * limit)
{
	for (int i = 0; i < *limit; i++)
	{
		list2[i] = list[i] * 2;
	}
}
void PrintArray(int list[], const int * limit)
{
	for(int j = 0; j < *limit; j++)
	{
		cout << " - " << list[j];
	}
	cout << endl;
}
