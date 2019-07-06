/*
*Guillermo Cala; nov/ 29/ 2018
*elaborar un algoritmo que lea 10 n�meros por teclado, los almacene en un array y muestre la media (promedio).
*/
#include <iostream>
using namespace std;
void FillArray(int list[], const int * limit, int * Sum);
int main()
{
	const int Indicador = 10;
	int Numeros[Indicador];
	int SumaNum = 0;
	float Media;
	cout << "Media de 10 numeros enteros" << endl;
	FillArray(Numeros, &Indicador, &SumaNum);
	Media = SumaNum / Indicador;
	cout << "la media es: " << Media << endl;
	system("pause");
	return 0;
}
void FillArray(int list[], const int * limit, int * Sum)
{
	for(int i = 0; i < *limit; i++)
	{
		cout << "Ingrese el valor # " << i + 1 << " : ";
		cin >> list[i];
		*Sum += list[i];
	}
}
