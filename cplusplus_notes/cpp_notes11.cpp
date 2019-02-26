/*
*guillermo cala; 26/ feb/ 19
*recursivity functions
*/
#include "iostream"
using namespace std;
void loop(int a, int b);

int main(int argc, char const *argv[])
{
   int lim, init;
   cout << "the start of secuence must be less than or equal to the limit..." << endl;
   cout << "enter the start of sequence: ";
   cin >> init;
   cout << "enter the limit of the sequence: ";
   cin >> lim;
   loop(init, lim);
   cout << endl;
   cin.get();
   return 0;
}
void loop(int a,int b)
{
   if(a <= b)
   {
      cout << "["<< a << "]";
      a++;
      loop(a, b);
   }
   else
   {
      /*cout << "you have entered incorrect data, the program will close..." << endl;*/
   }
}
