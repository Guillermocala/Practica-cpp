/*
*Guillermo Cala; 26/ march/ 19
*algoritmo con bucles que realice dibuje un triangulo isosceles
*/
#include "iostream"
using namespace std;

int main(int argc, char const *argv[])
{
   system("clear");
   int alt;
   cout << "\t\tTriangulo isoceles" << endl;
   cout << "Ingrese la altura: ";
   cin >> alt;
   alt++;
   for(int i = 0; i < alt; i++)
   {
      for(int j = alt - i; j > 0; j--)
      {
         cout << " ";
      }
      for(int k = 1; k < (2 * i) ; k++)
      {
         cout << "*";
      }
      cout << endl;
   }
   cout << endl;
   return 0;
}
