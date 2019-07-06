/*
*Guillermo Cala; nov/ 28/ 2018
*elaborar un algoritmo que rellene un array con los 100 primeros n�meros pares y muestre su suma.
*/
#include <iostream>
using namespace std;
void FillArray(int list[], const int * limit, int * Cont);
void SumElem(int list[], const int * limit, int * Sum);
int main()
{
	const int Indicador = 100;
	int NumPares[Indicador];
	int cont = 0, SumaPares = 0;
	FillArray(NumPares, &Indicador, &cont);
	SumElem(NumPares, &cont, &SumaPares);
	cout << "La suma de los numeros es : " << SumaPares << endl;
	system("pause");
	return 0;
}
void FillArray(int list[], const int * limit, int * Cont)
{
	for (int i = 1; i < *limit; i++)
	{
		if (i % 2 == 0)
		{
			list[*Cont] = i;
			++*Cont;
		}
	}
}
void SumElem(int list[], const int * limit, int * Sum)
{
	for (int i = 0; i < *limit; i++)
	{
		cout << list[i] << " - ";
		*Sum += list[i];
	}
	cout << endl;
}
