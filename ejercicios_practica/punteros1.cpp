/*
*
*/
#include <iostream>
using namespace std;
void inserLista(int lista[]);

int main ()
{
   int lis[4], p;
   int * ptr;
   ptr = lis;
   inserLista(lis);
   cout << "Ingrese el elemento que desee ver: ";
   cin >> p;
   if(p > 0 && p < 5)
   {
      for(int i = 0; i < 4; i++)
      {
         if(i + 1 == p)
         {
            cout << "el numero es: " << *ptr << endl;
         }
         else
         {
            /*UNEXPECTED FUNCTION*/
         }
         *ptr++;
      }
   }
   else
   {
      cout << "Valor incorrecto..." << endl;
   }
   system("pause");
   system("cls");
   return 0;
}
void inserLista(int lista[])
{
   for(int i = 0; i < 4; i++)
   {
      cout << "ingrese el elem " << i + 1 << " : ";
      cin >> *(lista + i);
   }
}
