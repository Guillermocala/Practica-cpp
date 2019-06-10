/*
*Guillermo Cala; 10/ 06/ 19
*Arrays multidimensionales operados como array simple
*/
#include "iostream"
using namespace std;
void InsertData(int tabla[], int tope, int tope2);
void ShowInfo(int tabla[], int tope, int tope2);
int main()
{
   int Rows, Cols, Dim2;
   cout << "Ingrese las filas: ";
   cin >> Rows;
   cout << "Ingrese las columnas: ";
   cin >> Cols;
   int numeros[Rows * Cols];
   InsertData(numeros, Rows, Cols);
   ShowInfo(numeros, Rows, Cols);
   system("pause");
   system("cls");
   return 0;
}
void InsertData(int tabla[], int tope, int tope2)
{
   for(int i = 0; i < tope; i++)
   {
      for(int j = 0; j < tope2; j++)
      {
         cout << "Ingrese el dato: ";
         cin >> tabla[i * tope2 + j];
      }
   }
}
void ShowInfo(int tabla[], int tope, int tope2)
{
   for(int i = 0; i < tope; i++)
   {
      for(int j = 0; j < tope2; j++)
      {
         cout << tabla[i * tope2 + j] << " ";
      }
      cout << endl;
   }
}
