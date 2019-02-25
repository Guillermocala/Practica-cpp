/*
*guillermo cala; 23/ feb/ 19
*considerations and const references
*/
#include "iostream"
using namespace std;
int addition(const int &a, const int &b);
int main(int argc, char const *argv[])
{
   int num1 = 4, num2 = 6, r;
   cout << "the sum of: " << num1 << " and "
   << num2 << " is: "<< addition(num1, num2) << endl;
   cout << "input two numbers(separates with space o tab): ";
   cin >> num1 >> num2;
   cout << "the sum of the new values are: " << addition(num1, num2) << endl;
   cin.get();
   return 0;
}
int addition(const int &a, const int &b)
{
   return a + b;
}
