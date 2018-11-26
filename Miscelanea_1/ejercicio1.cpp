/*elaborar un algoritmo que rellene un array con los 100 primeros números enteros y los muestre en pantalla en orden ascendente.*/
#include <iostream>
using namespace std;

int main ()
{
	const int Indicador = 100;
	int Numeros[Indicador];
	for (int i = 0; i < Indicador; i++)
	{
		Numeros[i] = i + 1;
	}
	for (int j = 0; j < Indicador; j++)
	{
		cout << " " << Numeros[j];
	}
	cout << endl;
	system("pause");
	return 0;
}
