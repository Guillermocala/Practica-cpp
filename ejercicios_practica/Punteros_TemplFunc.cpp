/*
*more pointers xd
*i wanted to work with bool type, but it only works if the input is 0
*/
#include <iostream>
using namespace std;
template <class SomeType>
SomeType FillData(SomeType * x);
template <class AnyType>
AnyType Increase(AnyType * x, const int * limit);
int main()
{
   int data1, Cant;
   float data2;
   char data3;
   bool data4;
   cout << "Input a Integer: ";
   FillData<int>(&data1);
   cout << "Input a Float: ";
   FillData<float>(&data2);
   cout << "Input a Char: ";
   FillData<char>(&data3);
   //cout << "Input a Bool: ";
   //FillData<bool>(&data4);
   cout << "\nHow many times do you want to increase?: ";
   cin >> Cant;
   Increase<int>(&data1, &Cant);
   Increase<float>(&data2, &Cant);
   Increase<char>(&data3, &Cant);
   //Increase<bool>(&data4, &Cant);
   cout << "\nInteger: " << data1 << "\nFloat: " << data2 << "\nChar: " << data3 << "\n";
   /*data4 ? cout << "True\n" : cout << "False\n";*/
   system("pause");
   return 0;
}
template <class SomeType>
SomeType FillData(SomeType * x)
{
   cin >> *x;
}
template <class AnyType>
AnyType Increase(AnyType * x, const int * limit)
{
   for(int i = 0; i < *limit; i++)
   {
      (*x)++;
   }
}
