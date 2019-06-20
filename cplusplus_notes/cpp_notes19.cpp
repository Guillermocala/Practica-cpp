/*
*arrays without offset operator
*/
#include <iostream>
using namespace std;

int main ()
{
   int nums[5];
   for(int i = 0; i < 5; i++)
   {
      /*the offset operator is the common form, but it is another valid form*/
      *(nums + i) = (i * 2);
   }
   for(int i = 0; i < 5; i++)
   {
      cout << *(nums + i) << " ";
   }
   cout << endl;
   system("pause");
   system("cls");
   return 0;
}
