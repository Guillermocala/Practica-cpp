/*
*Guillermo Cala; nov/ 27/ 2018
*elabore un algoritmo que lea 10 n�meros por teclado, los almacene en un array y muestre la suma, resta, multiplicaci�n y divisi�n de todos.
*/
#include <iostream>
using namespace std;
void ReadArray(int list[], const int * limit);
void Operations(int list[], const int * limit);
int main()
{
	const int Cantidad = 10;
	int Numeros[Cantidad];
	ReadArray(Numeros, &Cantidad);
	cout << "Suma, resta, multiplicacion y division de 10 datos enteros..." << endl;
	Operations(Numeros, &Cantidad);
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
void Operations(int list[], const int * limit)
{
	int Suma = 0, Resta = 0, Multiplicacion = 1;
	float Division = 1;
	for(int j = 0; j < *limit; j++)
	{
		Suma = list[j] + Suma;
		Resta = list[j] - Resta;
		Multiplicacion = list[j] * Multiplicacion;
		Division = list[j] / Division;
	}
	cout << "- La suma de los valores es: " << Suma << endl;
	cout << "- La resta de los valores es: " << Resta << endl;
	cout << "- La multiplicacion de los valores es: " << Multiplicacion << endl;
	cout << "- La division de los valores es: " << Division << endl;
}
