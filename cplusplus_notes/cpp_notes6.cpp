/*
*Guillermo cala; 14/ feb/ 19
*conditional ternary operator(?)
*/
#include <iostream>
using namespace std;

int main()
{
   int num;
   cout << "\tValidacion de numeros pares(digite 0 para salir)" << endl;
   cout << "ingrese un numero: ";
   cin >> num;
   while (num != 0)
   {
      /*syntax==> condition ? result1(true) : result2(false)*/
      (num % 2 == 0) == true ? cout << "Par" << endl : cout << "Impar" << endl;
      cout << "ingrese un numero: ";
      cin >> num;
   }
   return 0;
}
