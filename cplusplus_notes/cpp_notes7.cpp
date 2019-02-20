/*
*Guillermo cala; 20/ feb/ 19
*input methods
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string phrase;
   cout << "enter any sentence: ";
   getline (cin, phrase);
   cout << "the sentence is..." << endl;
   cout << phrase << endl;
   cin.get();
   return 0;
}
