/*
*pointer to functions
*/
#include <iostream>
using namespace std;
int Add(int a, int b);
int Sub(int a, int b);
float Div(float a, float b);
int Mult(int a, int b);
template <class Tipo>
Tipo Operation(Tipo x, Tipo y, Tipo (*op)(Tipo, Tipo));
int main()
{
   float num1, num2, temp;
   cout << "Input two numbers: ";
   cin >> num1 >> num2;
   temp = Operation<int>(num1, num2, Add);
   cout << "\nThe sum: " << temp;
   temp = Operation<int>(num1, num2, Sub);
   cout << "\nThe subtraction: " << temp;
   temp = Operation<float>(num1, num2, Div);
   cout << "\nThe division: " << temp;
   temp = Operation<int>(num1, num2, Mult);
   cout << "\nThe multiplication: " << temp << endl;
   system("pause");
   return 0;
}
int Add(int a, int b)
{
   return(a + b);
}
int Sub(int a, int b)
{
   return(a - b);
}
float Div(float a, float b)
{
   return(a / b);
}
int Mult(int a, int b)
{
   return(a * b);
}
template <class Tipo>
Tipo Operation(Tipo x, Tipo y, Tipo (*op)(Tipo, Tipo))
{
   Tipo p;
   p = (*op)(x, y);
   return p;
}
