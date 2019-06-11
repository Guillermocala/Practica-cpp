/*
*Strings and Null-Terminated Character Sequences (NTCS)
*/
#include "iostream"
using namespace std;

int main()
{
   string ans;
   char ans2[80];
   string quest1 = "What is ur name?: ";
   cout << quest1;
   cin >> ans;
   char quest2[] = "Were u from?: ";
   cout << quest2;
   cin >> ans2;
   cout << "Hello, " << ans << " from " << ans2 << endl;
   system("pause");
   system("cls");
   return 0;
}
