/*
*guillermo cala; jan/ 3/ 19
*elaborar un algoritmo que lea una cadena y diga cuantas mayusculas hay
*/
#include <iostream>
#include <cstring>
using namespace std;
void FillChar(char text[200], int * limit);
int MayusInText(char list[], char list2[], const int * limit, int * NumVoc);
int main()
{
	int Cant, CantMayus = 0;
	char texto[200];
	char Mayus[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	FillChar(texto, &Cant);
	MayusInText(texto, Mayus, &Cant, &CantMayus);
	cout << "El texto tiene " << CantMayus << " mayusculas." << endl;
	system("pause");
	return 0;
}
void FillChar(char text[200], int * limit)
{
	cout << "Ingrese una oracion cualquiera: ";
	gets(text);
	*limit = strlen(text);
}
int MayusInText(char list[], char list2[], const int * limit, int * NumVoc)
{
	for(int i = 0; i < *limit; i++)
	{
		for(int j = 0; j < 26; j++)
		{
			if(list[i] == list2[j])
			{
				++*NumVoc;
			}
		}
	}
	return *NumVoc;
}
