/*
*guillermo cala; jan/ 3/ 19
*elaborar un algoritmo que lea una cadena y diga cuantas vocales hay
*/
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int cantidad, CantVocal = 0;
	char texto[200];
	char vocales[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
	cout << "ingrese una oracion cualquiera: ";
	gets(texto);
	cantidad = strlen(texto);
	for (int i = 0; i < cantidad; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (texto[i] == vocales[j])
			{
				CantVocal++;
			}
		}
	}
	cout << "El texto tiene " << CantVocal << " vocales." << endl;
	system("pause");
	return 0;
}