/*
*pointers++++
*/
#include <iostream>
using namespace std;

int main ()
{
   int nums[5];
   int * ptr;
   ptr = nums;
   for(int i = 0; i < 5; i++)
   {
      *ptr = (i * 2);
      ptr++;
   }
   for(int i = 0; i < 5; i++)
   {
      cout << nums[i] << " ";
   }
   cout << endl;
   system("pause");
   system("cls");
   return 0;
}
