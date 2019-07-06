#include "iostream"
using namespace std;
int main()
{
   bool ver = false;
   string name;
   cout << "input ur name: ";
   getline(cin, name);
   /*instead we calculate the lenght of the string, we use a range-based for loop*/
   for(auto i: name)
   {
      if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')
      {
         ver = true;
      }
      else if(i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U')
      {
         ver = true;
      }
      else
      {
         /*UNEXPECTED FUNCTION*/
      }
   }
   if(ver)
   {
      cout << "Ur name contains vowels" << endl;
   }
   else
   {
      cout << "Ur name is without vowels" << endl;
   }
   return 0;
}
