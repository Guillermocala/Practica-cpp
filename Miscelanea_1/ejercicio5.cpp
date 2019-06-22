/*
*Guillermo Cala; nov/ 27/ 2018
*elabore un algoritmo que rellene un array con los n�meros impares comprendidos entre 1 y 100 y los muestre en pantalla en orden ascendente.
*/
#include <iostream>
using namespace std;
void ReadArray(int list[], const int * limit, int * CantImp);
void PrintArray(int list[], int * CantImp);
int main()
{
	const int Indicador = 100;
	int Numeros[Indicador];
	int CantImpares = 0;
	ReadArray(Numeros, &Indicador, &CantImpares);
	cout << "Numeros impares del 1 al 100: " << endl;
	PrintArray(Numeros, &CantImpares);
	system("pause");
	return 0;
}
void ReadArray(int list[], const int * limit, int * CantImp)
{
	for(int i = 1; i <= *limit; i++)
	{
		if(i % 2 != 0)
		{
			list[*CantImp] = i;
			++*CantImp;
		}
	}
}
void PrintArray(int list[], int * CantImp)
{
	for(int k = 0; k < *CantImp; k++)
	{
		cout << " - " << list[k];
	}
	cout << endl;
}
