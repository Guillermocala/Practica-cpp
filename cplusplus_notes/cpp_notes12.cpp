/*
*guillermo cala; 27/ feb/ 19
*goto statement
*/
#include "iostream"
using namespace std;

int main(int argc, char const *argv[])
{
   int init = 1, limit;
   cout << "this program will count to the number you enter..." << endl;
   cout << "input the limit: ";
   cin >> limit;
label:
   if (init <= limit)
   {
      cout << "[" << init << "]";
      init++;
      goto label;
   }
   cout << endl;
   cin.get();
   return 0;
}
