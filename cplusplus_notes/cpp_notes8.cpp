/*
*guillermo cala; 25/ feb/ 19
*range-based for loop
*/
#include "iostream"
#include "string"
using namespace std;

int main(int argc, char const *argv[])
{
   string myPhrase;
   cout << "enter any sentence: ";
   getline(cin, myPhrase);
   cout << "the sentence is: " << myPhrase;
   cout << "\nin characters are..." << endl;
   for (auto c : myPhrase)
   {
      cout << "[" << c << "]";
   }
   cin.get();
   return 0;
}
