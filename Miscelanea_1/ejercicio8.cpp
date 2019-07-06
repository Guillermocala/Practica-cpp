/*
*Guillermo Cala; nov/ 27/ 2018
*elaborar un algoritmo que lea 10 n�meros por teclado, 5 para un array y 5 para otro array distinto. Mostrar los 10 n�meros en pantalla mediante un solo array.
*/
#include <iostream>
using namespace std;
void ReadArray(int list[], const int * limit);
void CompArray(int list1[], int list2[], int list3[], const int * limit1);
void PrintArray(int list[], const int * limit);
int main()
{
	const int Indicador = 5, Indicador2 = 10;
	int array1[Indicador];
	int array2[Indicador];
	int array3[Indicador2];
	cout << "Ingreso e impresion de numeros mediante varios arrays" << endl;
	ReadArray(array1, &Indicador);
	ReadArray(array2, &Indicador);
	CompArray(array1, array2, array3, &Indicador);
	cout << "Los valores de ambos arrays son los siguientes: " << endl;
	PrintArray(array3, &Indicador2);
	system ("pause");
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
void CompArray(int list1[], int list2[], int list3[], const int * limit1)
{
	for(int k = 0; k < *limit1; k++)
	{
		list3[k] = list1[k];
		list3[*limit1 + k] = list2[k];
	}
}
void PrintArray(int list[], const int * limit)
{
	/*
	*si se quiere mostrar en orden inverso se debe usar la siguiente linea en reemplazo de la evaluacion del bucle de impresion:
	*for (int l = 9; l >= 0; l--)
	*/
	for(int j = 0; j < *limit; j++)
	{
		cout << " - " << list[j];
	}
	cout << endl;
}
