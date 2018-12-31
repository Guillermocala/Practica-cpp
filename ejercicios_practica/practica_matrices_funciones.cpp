/*
*guillermo cala; dec/ 22 /18; actualizacion: dec/ 24/ 18; actualizacion: dec/ 30/ 18
*repaso de matrices con funciones
*procesador de funciones con capacidad de una o dos matrices y de hasta max 50 dimensiones
*/
#include <iostream>
using namespace std;

int main()
{
	int CFilas, CColumnas, CFilas2, CColumnas2, Opcion;
	const int NFilas = 50;
	const int NColumnas = 50;
	int Matriz[NFilas][NColumnas], Matriz2[NFilas][NColumnas], Matriz3[NFilas][NColumnas];
	void LeerMatriz(int NumFilas, int NumColumnas, int Tabla[NFilas][NColumnas]);
	void ImprimeMatriz(int NumFilas, int NumColumnas, int Tabla[NFilas][NColumnas]);
	void DiagonalPrincipal(int NumFilas, int NumColumnas, int Tabla[NFilas][NColumnas]);
	void DiagonalSecundaria(int NumFilas, int NumColumnas, int Tabla[NFilas][NColumnas]);
	void MatrizTranspuesta(int NFilas, int NColumnas, int Tabla[][50], int Tabla2[][50]);
	void MultiplicacionEscalar(int NFilas, int NColumnas, int Tabla[][50], int Tabla2[][50]);
	void SumaMatrices(int NFilas, int NColumnas, int Tabla[][50], int Tabla2[][50], int Tabla3[][50]);
	void RestaMatrices(int NFilas, int NColumnas, int Tabla[][50], int Tabla2[][50], int Tabla3[][50]);
	void RecibirMatriz(int *NFilas, int *NColumnas, int Tabla[][50]);
	cout << "\tPROCESADOR DE MATRICES(dimension limite 50)\n1 - Proceso de matriz de dimensiones iguales\n2 - Proceso de matriz de dimensiones distintas\n3 - salir\n-Si ingresa una opcion invalida el programa terminara" << endl;
	cout << "Ingrese una opcion: ";
	cin >> Opcion;
	switch (Opcion)
	{
		case 1 :
			cout << "\n1 - Operacion con 1 matriz\n2 - Operacion con 2 matrices" << endl;
			cout << "ingrese una opcion: ";
			cin >> Opcion;
			switch (Opcion)
			{
				case 1 :
					cout << "\n1 - Diagonal principal\n2 - Diagonal Secundaria\n3 - Matriz transpuesta\n4 - Multiplicacion de 1 escalar" << endl;
					cout << "Ingrese una opcion: ";
					cin >> Opcion;
					switch (Opcion)
					{
						case 1 :
							RecibirMatriz(&CFilas, &CColumnas, Matriz);
							ImprimeMatriz(CFilas, CColumnas, Matriz);
							DiagonalPrincipal(CFilas, CColumnas, Matriz);
							cout << endl;
							break;
						case 2 :
							RecibirMatriz(&CFilas, &CColumnas, Matriz);
							ImprimeMatriz(CFilas, CColumnas, Matriz);
							DiagonalSecundaria(CFilas, CColumnas, Matriz);
							cout << endl;
							break;
						case 3 :
							RecibirMatriz(&CFilas, &CColumnas, Matriz);
							ImprimeMatriz(CFilas, CColumnas, Matriz);
							MatrizTranspuesta(CFilas, CColumnas, Matriz, Matriz2);
							cout << endl;
							break;
						case 4 :
							RecibirMatriz(&CFilas, &CColumnas, Matriz);
							ImprimeMatriz(CFilas, CColumnas, Matriz);
							MultiplicacionEscalar(CFilas, CColumnas, Matriz, Matriz2);
							cout << endl;
							break;
						default :
							cout << "Usted ha ingresado un valor invalido!" << endl;
							break;
					}
					break;
				case 2 :
					cout << "\n1 - Suma\n2 - Resta\n3 - Multiplicacion" << endl;
					cout << "Ingrese una opcion: ";
					cin >> Opcion;
					switch (Opcion)
					{
						case 1 :
							cout << "Ingrese la primera matriz";
							RecibirMatriz(&CFilas, &CColumnas, Matriz);
							cout << "Ingrese la segunda matriz";
							RecibirMatriz(&CFilas2, &CColumnas2, Matriz2);
							cout << "la suma de las matrices es: " << endl;
							SumaMatrices(CFilas, CColumnas, Matriz, Matriz2, Matriz3);
							break;
						case 2 :
							cout << "Ingrese la primera matriz";
							RecibirMatriz(&CFilas, &CColumnas, Matriz);
							cout << "Ingrese la segunda matriz";
							RecibirMatriz(&CFilas2, &CColumnas2, Matriz2);
							cout << "la suma de las matrices es: " << endl;
							RestaMatrices(CFilas, CColumnas, Matriz, Matriz2, Matriz3);
							break;
						case 3 :
							/*unexpected function*/
							break;
						default :
							cout << "Usted ha ingresado un valor invalido!" << endl;
							break;
					}
					break;
				default :
					cout << "Usted ha ingresado un valor invalido!" << endl;
					break;
			}
			break;
		case 2 :
			cout << "\n1 - Operacion con 1 matriz\n2 - Operacion con 2 matrices" << endl;
			cout << "ingrese una opcion: ";
			cin >> Opcion;
			switch (Opcion)
			{
				case 1 :
					cout << "\n1 - Matriz transpuesta\n2 - Multiplicacion de 1 escalar" << endl;
					cout << "Ingrese una opcion: ";
					cin >> Opcion;
					switch (Opcion)
					{
						case 1 :
							/*unexpected function*/
							break;
						case 2 :
							/*unexpected function*/
							break;
						default :
							cout << "Usted ha ingresado un valor invalido!" << endl;
							break;
					}
					break;
				case 2 :
					cout << "\nPara la suma y resta deben de tener las mismas dimensiones y para multiplicacion el numero de filas debe coincidir con el numero de columnas de la otra matriz o viceversa" << endl;
					cout << "1 - Suma\n2 - Resta\n3 - Multiplicacion" << endl;
					cout << "Ingrese una opcion: ";
					cin >> Opcion;
					switch (Opcion)
					{
						case 1 :
							/*unexpected function*/
							break;
						case 2 :
							/*unexpected function*/
							break;
						case 3 :
							/*unexpected function*/
							break;
						default :
							cout << "Usted ha ingresado un valor invalido!" << endl;
							break;
					}
					break;
				default :
					cout << "Usted ha ingresado un valor invalido!" << endl;
					break;
			}
			break;	
		default :
			cout << "Usted ha ingresado un valor invalido!" << endl;
			break;
	}
	system("pause");
	return 0;
}
void LeerMatriz(int *NumFilas, int *NumColumnas, int Tabla[][50])
{
	for (int i = 0; i < *NumFilas; i++)
	{
		for (int j = 0; j < *NumColumnas; j++)
		{
			cout << "Ingrese el dato para la posicion [" << i + 1 << "][" << j + 1 << "]: ";
			cin >> Tabla[i][j];
		}
	}
}
void ImprimeMatriz(int NumFilas, int NumColumnas, int Tabla[][50])
{
	cout << endl;
	for (int i = 0; i < NumFilas; i++)
	{
		cout << "[\t";
		for (int j = 0; j < NumColumnas; j++)
		{
			cout << Tabla[i][j] << "\t";  
		}
		cout << "]" << endl;
	}
}
void DiagonalPrincipal(int NumFilas, int NumColumnas, int Tabla[][50])
{
	cout << "\nLa Diagonal Principal es: " << endl;
	for (int i = 0; i < NumFilas; i++)
	{
		for (int j = 0; j < NumColumnas; j++)
		{
			if (i == j)
			{
				cout << Tabla[i][j] << " ";
			}
		}
	}
}
void DiagonalSecundaria(int NumFilas, int NumColumnas, int Tabla[][50])
{
	int DiagSecundaria = NumFilas - 1;
	for (int i = 0; i < NumFilas; i++)
	{
		for (int j = 0; j < NumColumnas; j++)
		{
			if ( (i + j) == DiagSecundaria)
			{
				cout << Tabla[i][j] << " ";
			}
		}
	}
}
void RecibirMatriz(int *NFilas, int *NColumnas, int Tabla[][50])
{
	cout << "\nIngrese el numero de filas: ";
	cin >> *NFilas;
	cout << "Ingrese el numero de columnas: ";
	cin >> *NColumnas;
	LeerMatriz(NFilas, NColumnas, Tabla);
}
void MatrizTranspuesta(int NFilas, int NColumnas, int Tabla[][50], int Tabla2[][50])
{
	cout << "\nLa matriz transpuesta es:" << endl; 
	for (int i = 0; i < NFilas; i++)
	{
		for (int j = 0; j < NColumnas; j++)
		{
			Tabla2[j][i] = Tabla[i][j];
		}
	}
	ImprimeMatriz(NFilas, NColumnas, Tabla2);
}
void MultiplicacionEscalar(int NFilas, int NColumnas, int Tabla[][50], int Tabla2[][50])
{
	int escalar;
	cout << "\nIngrese el muliplicador(escalar): ";
	cin >> escalar;
	for (int i = 0; i < NFilas; i++)
	{
		for (int j = 0; j < NColumnas; j++)
		{
			Tabla2[i][j] = (escalar * Tabla[i][j]);
		}
	}
	ImprimeMatriz(NFilas, NColumnas, Tabla2);
}
void SumaMatrices(int NFilas, int NColumnas, int Tabla[][50], int Tabla2[][50], int Tabla3[][50])
{
	for (int i = 0; i < NFilas; i++)
	{
		for (int j = 0; j < NColumnas; j++)
		{
			Tabla3[i][j] = (Tabla[i][j] + Tabla2[i][j]);
		}
	}
	ImprimeMatriz(NFilas, NColumnas, Tabla3);
}
void RestaMatrices(int NFilas, int NColumnas, int Tabla[][50], int Tabla2[][50], int Tabla3[][50])
{
	for (int i = 0; i < NFilas; i++)
	{
		for (int j = 0; j < NColumnas; j++)
		{
			Tabla3[i][j] = (Tabla[i][j] - Tabla2[i][j]);
		}
	}
	ImprimeMatriz(NFilas, NColumnas, Tabla3);
}
void MultiplicaMatrices(int NFilas, int NColumnas, int Tabla[][50], int Tabla2[][50], int Tabla3[][50])
{
	for (int i = 0; i < NFilas; i++)
	{
		for (int j = 0; j < NColumnas; j++)
		{
			Tabla3[i][j] = 		
		}
	}
}