/*
*more pointers xd
*/
#include <iostream>
using namespace std;

int main()
{
   int num = 10;
   const int * p = &num; /*allows to modify only the address*/
   int * const q = &num; /*allows to modify only the value*/
   cout << num << " " << p << endl;
   *(++p); /*increment the addresss*/
   ++(*q); /*increment the value*/
   cout << num << " " << p << endl;
   system("pause");
   return 0;
}
