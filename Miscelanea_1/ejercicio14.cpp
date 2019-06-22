/*
*Guillermo Cala; nov/ 29/ 2018
*elaborar un algoritmo que rellene un array con 20 n�meros y luego busque un n�mero.
*/
#include <iostream>
using namespace std;
void FillArray(int list[], const int * limit);
void SearchNum(int list[], const int * limit, int * Num);
int main()
{
	const int Indicador = 20;
	int Numeros[Indicador];
	int NumBusc;
	FillArray(Numeros, &Indicador);
	cout << "Ingrese el numero que desea buscar: ";
	cin >> NumBusc;
	SearchNum(Numeros, &Indicador, &NumBusc);
	system("pause");
	return 0;
}
void FillArray(int list[], const int * limit)
{
	for(int i = 0; i < *limit; i++)
	{
		cout << "Ingrese el numero #" << i + 1 << " : ";
		cin >> list[i];
	}
}
void SearchNum(int list[], const int * limit, int * Num)
{
	int Cant = 0;
	for(int i = 0; i < *limit; i++)
	{
		if(list[i] == *Num)
		{
			Cant++;
		}
		else
		{
			/*UNEXPECTED FUNCTION*/
		}
	}
	if(Cant > 0)
	{
		cout << "El numero " << *Num << " existe, y esta " << Cant << " veces" << endl;
	}
	else
	{
		cout << "El numero " << *Num << " No existe" << endl;
	}
}
