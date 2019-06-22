/*
*Guillermo Cala; nov/ 30/ 2018
*elaborar un algoritmo que pinte un tablero de ajedrez, los peones con la letra P, las torres con T, los caballos con C, los alfiles con A, el rey con R y la reina con M.
*	| T | C | A | M | R | A | C | T |
*	| P | P | P | P | P | P | P | P |
*	|	|	|	|	|	|	|	|	|
*	|	|	|	|	|	|	|	|	|
*	|	|	|	|	|	|	|	|	|
*	|	|	|	|	|	|	|	|	|
*	| P | P | P | P | P | P | P | P |
*	| T | C | A | R | M | A | C | T |
*/
#include <iostream>
using namespace std;
void Chess(const int * Limit);
int main()
{
	cout << "\tTABLERO DE AJEDREZ" << endl;
	int Dimensiones = 8;
	cout << "\nREY = R\nREINA = M\nALFILES = A\nCABALLOS = C\nTORRES = T\nPEONES = P\n" << endl;
	Chess(&Dimensiones);
	cout << endl;
	system("pause");
	return 0;
}
void Chess(const int * limit)
{
	for(int i = 0; i < *limit; i++)
	{
		for(int j = 0; j < *limit; j++)
		{
			if(i == 1 || i == 6)
			{
				cout << "| P "; /* PEONES */
			}
			else if( (i == 0 && j == 0) || (i == 0 && j == 7) || (i == 7 && j == 0) || (i == 7 && j == 7) )
			{
				cout << "| T "; /* TORRES */
			}
			else if( (i == 0 && j == 1) || (i == 0 && j == 6) || (i == 7 && j == 1) || (i == 7 && j == 6) )
			{
				cout << "| C "; /* CABALLOS */
			}
			else if( (i == 0 && j == 2) || (i == 0 && j == 5) || (i == 7 && j == 2) || (i == 7 && j == 5) )
			{
				cout << "| A "; /* ALFILES */
			}
			else if( (i == 0 && j == 4) || (i == 7 && j == 3) )
			{
				cout << "| R "; /* REY */
			}
			else if( (i == 0 && j == 3) || (i == 7 && j == 4) )
			{
				cout << "| M "; /* REINA */
			}
			else
			{
				cout << "|   ";
			}
		}
		cout << "|";
		cout << endl;
	}
}
