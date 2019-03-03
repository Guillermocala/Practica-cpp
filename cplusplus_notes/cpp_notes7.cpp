/*
*Guillermo cala; 20/ feb/ 19
*input methods
*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
   int IntNumber;
   string phrase, SNumber;
   cout << "enter any sentence: ";
   getline (cin, phrase);
   cout << "the sentence is..." << endl;
   cout << phrase << endl;
   cout << "converter any numerical string to int..." << endl;
   cout << "enter a serial number: ";
   getline(cin, SNumber);
   stringstream(SNumber) >> IntNumber;
   cout << "the int number is: " << IntNumber << endl;
   cin.get();
   return 0;
}
