/*
*Guillermo Cala; 9/ april/ 19
*Non-type template arguments
*/
#include "iostream"
using namespace std;
template <class id, int Num>
id suma (id a);
int main(int argc, char const *argv[])
{
   int Num1;
   cout << "El numero sera multiplicado por 5: ";
   cin >> Num1;
   /*the template parameter is determined on compile-time*/
   cout << suma<int, 5>(Num1) << endl;
}
template <class id, int Num>
id suma (id a)
{
   id result = a * Num;
   return result;
}
