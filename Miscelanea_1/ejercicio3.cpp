/*
*Guillermo Cala; nov/ 26/ 2018
*elabore un algoritmo que rellene un array con los n�meros primos comprendidos entre 1 y 100 y los muestre en pantalla en orden ascendente.
*/
#include <iostream>
using namespace std;
void ReadArray(int list[], const int * limit, int * CantPrim);
void PrintArray(int list[], const int * CantPrim);
int main()
{
	const int Indicador = 100;
	int Numeros[Indicador];
	int CantPrimos = 0;
	ReadArray(Numeros, &Indicador, &CantPrimos);
	cout << "Numeros primos del 1 al 100: " << endl;
	PrintArray(Numeros, &CantPrimos);
	system ("pause");
	return 0;
}
/*al pasar la constante limit por referencia se evita cargos extras en memoria, aunque no se modifique*/
void ReadArray(int list[], const int * limit, int * CantPrim)
{
	for(int i = 1; i <= *limit; i++)
	{
		int cont = 0;
		for(int j = 1; j <= i; j++)
		{
			if(i % j == 0)
			{
				cont++;
			}
			else
			{
				/*UNEXPECTED FUNCTION*/
			}
		}
		if(cont == 2)
		{
			list[*CantPrim] = i;
			/*
			*al traabajar con apuntadores a una variables (no arrays), debemos de tener cuidado
			*de no incrementar la direccion de memoria (puntero), ya que nos producira un error
			*de fallo de accesso a memoria con lo cual nuestro programa gfallará
			*/
			++*CantPrim;
		}
		else
		{
			/*UNEXPECTED FUNCTION*/
		}
	}
}
void PrintArray(int list[], const int * CantPrim)
{
	for(int k = 0; k < *CantPrim; k++)
	{
		cout << " - "<< list[k];
	}
	cout << endl;
}
