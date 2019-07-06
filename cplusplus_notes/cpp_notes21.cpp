/*
*more pointers xd
*
*/
#include <iostream>
using namespace std;

int main()
{
   int num;
   int * p = NULL; /*0; nullptr; are valid null initializers*/
   cout << "Ingrese el valor: ";
   cin >> num;
   p = &num;
   cout << num << " " << p << endl;
   system("pause");
   return 0;
}
