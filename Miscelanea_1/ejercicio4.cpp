/*
*Guillermo Cala; nov/ 26/ 2018
*elabore un algoritmo que rellene un array con los n�meros pares comprendidos entre 1 y 100 y los muestre en pantalla en orden ascendente.
*/
#include <iostream>
using namespace std;
void ReadArray(int list[], const int * limit, int * CantPar);
void PrintArray(int list[], int * CantPar);
int main()
{
	const int Indicador = 100;
	int Numeros[Indicador];
	int CantPares = 0;
	ReadArray(Numeros, &Indicador, &CantPares);
	cout << "Numeros pares del 1 al 100: " << endl;
	PrintArray(Numeros, &CantPares);
	system("pause");
	return 0;
}
void ReadArray(int list[], const int * limit, int * CantPar)
{
	for(int i = 1; i <= *limit; i++)
	{
		if(i % 2 == 0)
		{
			list[*CantPar] = i;
			++*CantPar;
		}
	}
}
void PrintArray(int list[], int * CantPar)
{
	for(int k = 0; k < *CantPar; k++)
	{
		cout << " - " << list[k];
	}
	cout << endl;
}
