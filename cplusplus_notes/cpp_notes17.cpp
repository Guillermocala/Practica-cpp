/*
*pointers++
*/
#include <iostream>
using namespace std;

int main ()
{
   /*
   *Notice that there are expressions with pointers p1 and p2, both with and without the dereference operator (*).
   *The meaning of an expression using the dereference operator (*) is very different from one that does not.
   *When this operator precedes the pointer name, the expression refers to the value being pointed, while when a pointer
   *name appears without this operator, it refers to the value of the pointer itself (i.e., the address of what the pointer is pointing to).
   */
   int firstvalue = 5, secondvalue = 15;
   int * p1, * p2;
   p1 = &firstvalue;  // p1 = address of firstvalue
   p2 = &secondvalue; // p2 = address of secondvalue
   *p1 = 10;          // value pointed to by p1 = 10
   *p2 = *p1;         // value pointed to by p2 = value pointed to by p1
   p1 = p2;           // p1 = p2 (value of pointer is copied)
   *p1 = 20;          // value pointed to by p1 = 20
   cout << "firstvalue is " << firstvalue << '\n';
   cout << "secondvalue is " << secondvalue << '\n';
   system("pause");
   system("cls");
   return 0;
}
