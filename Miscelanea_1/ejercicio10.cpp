/*
*Guillermo Cala; nov/ 28/ 2018
*elaborar un algoritmo que lea 5 números por teclado, los copie a otro array multiplicados por 2 y los muestre todos ordenados usando un tercer array.
*/
#include <iostream>
using namespace std;

int main ()
{
	const int Indicador = 5;
	int Numeros[Indicador];
	int CopiaNumeros[Indicador];
	int Organizador;
	for (int i = 0; i < Indicador; i++) /* leer vector*/
	{
		cout << "Ingrese el numero #" << i + 1 << " : ";
		cin >> Numeros[i];
	}
	for (int i = 0; i < Indicador; i++) /* copia al vector secundario*/
	{
		CopiaNumeros[i] = Numeros[i] * 2;
	}
	for (int i = 0; i < Indicador; i++) /*ordenar el vector secundario*/
	{
		for (int j = 0; j < i; j++)
		{
			if (CopiaNumeros[i] < CopiaNumeros[j]) /*si es mayor cambia las posiciones*/
			{
				Organizador = CopiaNumeros[i];
				CopiaNumeros[i] = CopiaNumeros[j];
				CopiaNumeros[j] = Organizador; 
			}
		}
	}
	cout << "El vector copiado es: " << endl;
	for (int i = 0; i < Indicador; i++) /*imprimir el vector secundario ya ordenado*/
	{
		cout << i + 1 << "- " << CopiaNumeros[i] << endl;
	}
	
	system ("pause");
	return 0;
}

