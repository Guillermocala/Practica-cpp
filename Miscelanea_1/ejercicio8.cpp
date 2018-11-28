/*
*Guillermo Cala; nov/ 27/ 2018
*elaborar un algoritmo que lea 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los 10 números en pantalla mediante un solo array.
*/
#include <iostream>
using namespace std;

int main ()
{
	const int indicador = 5;
	int array1[indicador];
	int array2[indicador];
	int array3[10];
	cout << "Ingreso e impresion de numeros mediante varios arrays" << endl;
	for (int i = 0; i < indicador; i++)/*se almacena los valores en el primer array*/
	{
		cout << "Ingrese el numero # " << i + 1 << " : ";
		cin >> array1[i];
	}
	for (int j = 0; j < indicador; j++)/*se almacenan los valores en el segundo array*/
	{
		cout << "Ingrese el numero # " << j + 6 << " : ";
		cin >> array2[j];
	}
	for (int k = 0; k < indicador; k++)/*los valores del primer array se almacenan en el tercer array*/
	{
		array3[k] = array1[k];
	}
	/*
	*aqui para almacenarlos y cumplir un orden se requiere que el indice se le añada el numero de objetos ya almacenados 
	*en el vector previamente (en este caso 5)
	*/
	for (int k = 0; k < indicador; k++)
	{
		array3[5 + k] = array2[k];
	}
	cout << "Los valores de ambos arrays son los siguientes: " << endl;
	/*
	*si se quiere mostrar en orden inverso se debe usar la siguiente linea en reemplazo de la evaluacion del bucle de impresion:
	*for (int l = 9; l >= 0; l--)
	*/
	for (int l = 0; l < 10; l++)
	{
		cout << array3[l] << endl;
	}
	system ("pause");
	return 0;
}

