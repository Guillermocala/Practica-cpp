/*
*guillermo cala; jan/ 3/ 19
*elaborar un algoritmo que lea una cadena y diga cuantas vocales hay
*/
#include <iostream>
#include <cstring>
using namespace std;
void FillChar(char text[200], int * limit);
int VocInText(char list[], char list2[], const int * limit, int * NumVoc);
int main()
{
	int Cant, CantVoc = 0;
	char texto[200];
	char vocales[10]{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
	FillChar(texto, &Cant);
	CantVoc = VocInText(texto, vocales, &Cant, &CantVoc);
	cout << "El texto tiene " << CantVoc << " vocales." << endl;
	system("pause");
	return 0;
}
void FillChar(char text[200], int * limit)
{
	cout << "Ingrese una oracion cualquiera: ";
	gets(text);
	*limit = strlen(text);
}
int VocInText(char list[], char list2[], const int * limit, int * NumVoc)
{
	for(int i = 0; i < *limit; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			if(list[i] == list2[j])
			{
				++*NumVoc;
			}
		}
	}
	return *NumVoc;
}
