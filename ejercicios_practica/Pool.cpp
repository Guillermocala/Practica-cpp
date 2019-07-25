/*
*tenemos una piscina o tablero en el cual cada franja tiene un 0 y al pisarla se convierte en 1, si se pisa de nuevo
*esta regresa a 0, llenar todas las casillas de 1, otorgando una posicion aleatoria al personaje que va a recorrer dicho espacio
*/
#include <iostream>
using namespace std;
bool ShowPool(int list[][20], int row, int col);
bool FillPool(int list[][20], int row, int col);
bool PositionInit(int list[][20], int row, int col);
bool TheProblem(int list[][20], int row, int col, int x, int y);
int main()
{
   int tabla[20][20];
   int i, j, k, l;
   cout << "row: ";
   cin >> i;
   cout << "col: ";
   cin >> j;
   FillPool(tabla, i, j);
   ShowPool(tabla, i, j);
   cout << "input the position: ";
   cin >> k >> l;
   PositionInit(tabla, k, l);
   ShowPool(tabla, i, j);
   TheProblem(tabla, i, j, k, l);
   ShowPool(tabla, i, j);
   system("pause");
   return 0;
}
bool ShowPool(int list[][20], int row, int col)
{
   for(int i = 0; i < row; i++)
   {
      cout << "____";
   }
   cout << endl;
   for(int i = 0; i < col; i++)
   {
      cout << "|";
      for(int j = 0; j < row; j++)
      {
         cout << " " << list[i][j] << " ";
      }
      cout << "|\n";
   }
   for(int i = 0; i < row; i++)
   {
      cout << "^^^^";
   }
   cout << endl;
}
bool FillPool(int list[][20], int row, int col)
{
   for(int i = 0; i < col; i++)
   {
      for(int j = 0; j < row; j++)
      {
         list[i][j] = 0;
      }
   }
}
bool PositionInit(int list[][20], int row, int col)
{
   row -= 1;
   col -= 1;
   for(int i = 0; i < 20; i++)
   {
      for(int j = 0; j < 20; j++)
      {
         if(i == col && j == row)
         {
            list[j][i] = 2;
         }
      }
   }
}
bool TheProblem(int list[][20], int row, int col, int x, int y)
{
   if((x == row && y == col) || (x == 1 && y == 1) || (x == row && y == 1) || (x == 1 && y == col))
   {
      cout << "en esquina" << endl;
   }
   else
   {
      if((x == 1) || (y == 1))
      {
         cout << "linea 1" << endl;
         if(y == 1)
         {
            for(int i = (x - 2); i >= 0 ; i--)
            {
               list[i][y - 1] = 1;
            }
         }
         else
         {
            for(int i = (y - 2); i >= 0 ; i--)
            {
               list[x - 1][i] = 1;
            }
         }
      }
      else if((x == row) || (y == col))
      {
         cout << "linea 2" << endl;
      }
      else
      {
         cout << "no esta en linea o esquina" << endl;
      }
   }
}
