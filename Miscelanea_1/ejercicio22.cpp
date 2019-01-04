/*
*guillermo cala; jan/ 3/ 19
*elaborar un algoritmo que lea una cadena y diga cuantas mayusculas hay
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int cantidad, CantMayus = 0;
	char texto[200];
	char Mayusculas[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	cout << "ingrese una oracion cualquiera: ";
	gets(texto);
	cantidad = strlen(texto);
	for (int i = 0; i < cantidad; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (texto[i] == Mayusculas[j])
			{
				CantMayus++;
			}
		}
	}
	cout << "El texto tiene " << CantMayus << " mayusculas." << endl;
	system("pause");
	return 0;
}