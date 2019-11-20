/*
*tenemos una piscina o tablero en el cual cada franja tiene un 0 y al pisarla se convierte en 1, si se pisa de nuevo
*esta regresa a 0, llenar todas las casillas de 1, otorgando una posicion aleatoria al personaje que va a recorrer dicho espacio
*/
#include <iostream>
#define LIMIT 10
using namespace std;

void ShowPool(int list[][LIMIT], int row, int col);
void FillPool(int list[][LIMIT], int row, int col);
void PositionInit(int list[][LIMIT], int row, int col);
void TheProblem(int list[][LIMIT], int row, int col, int posX, int posY);
void toTheFirst(int list[][LIMIT], int row, int col, int *posX, int *posY);

int main()
{
   int tabla[LIMIT][LIMIT];
   int i, j, k, l;
   cout << "row: ";
   cin >> i;
   cout << "col: ";
   cin >> j;
   FillPool(tabla, i, j);
   ShowPool(tabla, i, j);
   cout << "input the position: ";
   cin >> k >> l;
   while ((k < 0 && k > i) || (l < 0 && l > j))
   {
      cout << "valores erroneos. verifique!" << endl;
      cout << "input the position: ";
      cin >> k >> l;
   }
   PositionInit(tabla, k, l);
   ShowPool(tabla, i, j);
   toTheFirst(tabla, i, j, &k ,&l);
   //TheProblem(tabla, i, j, k, l);
   ShowPool(tabla, i, j);
   system("pause");
   return 0;
}
void ShowPool(int list[][LIMIT], int row, int col)
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
void FillPool(int list[][LIMIT], int row, int col)
{
   for(int i = 0; i < col; i++)
   {
      for(int j = 0; j < row; j++)
      {
         list[i][j] = 0;
      }
   }
}
void PositionInit(int list[][LIMIT], int row, int col)
{
   row -= 1;
   col -= 1;
   list[row][col] = 2;
}
void toTheFirst(int list[][LIMIT], int row, int col, int *posX, int *posY)
{
   int pivot = row/2, aux;
   row--;
   col--;
   *posX -= 1;
   *posY -= 1;
   cout << *posX << " " << *posY << endl;
   if (*posX <= pivot) {
      if (*posY <= pivot) {
         /*cuadrante 1*/
         aux = *posX;
         for (*posX; *posX >= 0; *posX -= 1) {
            if (list[aux][*posX] != 2) {
               list[aux][*posX] = 1;
            }
         }
         *posX += 1;
         cout << *posX << " " << *posY << endl;
         for (*posY; *posY >= 0; *posY -= 1) {
            list[*posY][*posX] = 1;
         }
         *posY += 1;
         cout << *posX << " " << *posY << endl;
      }
      else
      {
         /* Cuadrante 2*/
      }
   }
   else
   {
      if (*posY <= pivot) {
         /* cuadrante 3*/
      }
      else
      {
         /* Cuadrante 4*/
      }
   }
}
void TheProblem(int list[][LIMIT], int row, int col, int posX, int posY)
{
   if((posX == row && posY == col) || (posX == 1 && posY == 1) || (posX == row && posY == 1) || (posX == 1 && posY == col))
   {
      cout << "en esquina" << endl;
   }
   else
   {

   }
}
