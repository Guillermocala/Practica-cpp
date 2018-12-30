/*
*guillermo cala; dec/ 22 /18; actualizacion: dec/ 24/ 18
*repaso de matrices con diagonal principal y secundario en caso de que la misma sea cuadrada con menu
*/
#include <iostream>
using namespace std;

int main()
{
	int CFilas, CColumnas, Opcion;
	const int NFilas = 50;
	const int NColumnas = 50;
	int Matriz[NFilas][NColumnas];
	void LeerMatriz(int NumFilas, int NumColumnas, int Tabla[NFilas][NColumnas]);
	void ImprimeMatriz(int NumFilas, int NumColumnas, int Tabla[NFilas][NColumnas]);
	void DiagonalPrincipal(int NumFilas, int NumColumnas, int Tabla[NFilas][NColumnas]);
	void DiagonalSecundaria(int NumFilas, int NumColumnas, int Tabla[NFilas][NColumnas]);
	void RecibirMatriz(int *NFilas, int *NColumnas, int Tabla[][50]);
	cout << "\tPROCESADOR DE MATRICES(dimension limite 50)\n1 - Proceso de matriz de dimensiones iguales\n2 - Proceso de matriz de dimensiones distintas\n3 - salir\n-Si ingresa una opcion invalida el programa terminara" << endl;
	cout << "Ingrese una opcion: ";
	cin >> Opcion;
	switch (Opcion)
	{
		case 1 :
			cout << "1 - Operacion con 1 matriz\n2 - Operacion con 2 matrices" << endl;
			cout << "ingrese una opcion: ";
			cin >> Opcion;
			switch (Opcion)
			{
				case 1 :
					cout << "1 - Diagonal principal\n2 - Diagonal Secundaria\n3 - Matriz transpuesta\n4 - Multiplicacion de 1 escalar" << endl;
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
							/*unexpected function*/
							break;
						case 3 :
							/*unexpected function*/
							break;
						case 4 :
							/*unexpected function*/
							break;
						default :
							cout << "Usted ha ingresado un valor invalido!" << endl;
							break;
					}
					break;
				case 2 :
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
		case 2 :
			cout << "1 - Operacion con 1 matriz\n2 - Operacion con 2 matrices" << endl;
			cout << "ingrese una opcion: ";
			cin >> Opcion;
			switch (Opcion)
			{
				case 1 :
					cout << "1 - Matriz transpuesta\n2 - Multiplicacion de 1 escalar" << endl;
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
	/*
	ImprimeMatriz(CFilas, CColumnas, Matriz);
	cout << "La diagonal principal es: ";
	DiagonalPrincipal(CFilas, CColumnas, Matriz);
	cout << "\nLa diagonal secundaria es: ";
	DiagonalSecundaria(CFilas, CColumnas, Matriz);
	cout << "\nLa matriz transpuesta es: " << endl;
	int Matriz2[NFilas][NColumnas];
	for (int i = 0; i < CFilas; i++)
	{
		for (int j = 0; j < CColumnas; j++)
		{
			Matriz2[j][i] = Matriz[i][j];
		}
	}
	ImprimeMatriz(CFilas, CColumnas, Matriz2);
	cout << endl;
	*/
	system("pause");
	return 0;
}
void LeerMatriz(int *NumFilas, int *NumColumnas, int Tabla[][50])
{
	for (int i = 0; i < *NumFilas; i++) /*PARA LEER MATRIZ*/
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
	for (int i = 0; i < NumFilas; i++) /*PARA IMPRIMIR MATRIZ*/
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
	cout << "Ingrese el numero de filas: ";
	cin >> *NFilas;
	cout << "Ingrese el numero de columnas: ";
	cin >> *NColumnas;
	LeerMatriz(NFilas, NColumnas, Tabla);
}