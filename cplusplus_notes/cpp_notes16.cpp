/*
*Pointers and dereference operator
*/
#include "iostream"
using namespace std;

int main()
{
   string coder = "Guillermo";
   string user;
   string * another;
   cout << "The coder is " << coder << " and u are?: ";
   cin >> user;
   if(user != coder)
   {
      another = &coder;
      *another = user;
      cout << "Now the coder is " << coder << endl;
   }
   else
   {
      cout << "U are the coder :o" << endl;
   }
   system("pause");
   system("cls");
   return 0;
}
