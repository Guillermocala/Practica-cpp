/*
*guillermo cala; 1/ feb/ 19
*auto and decltype
*/
#include <iostream>
using namespace std;

int main()
{
   int num1;
   decltype(num1) num2; /*decltype when var is not initialized*/
   num1 = 5;
   cout << num2 << endl;
   auto num3 = num1; /*auto when var is initialized*/
   cout << num3 << endl;
   return 0;
}
