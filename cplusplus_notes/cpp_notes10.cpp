/*
*guillermo cala; 26/ feb/ 19; mod 27/ feb/ 19
*do while loop
*/
#include "iostream"
using namespace std;

int main(int argc, char const *argv[])
{
   int sw = 1, option;
   do
   {
      cout << "###############################" << endl;
      cout << "####           e.e         ####" << endl;
      cout << "###############################" << endl;
      cout << "####     1- say hello      ####" << endl;
      cout << "####     2- say goodbye    ####" << endl;
      cout << "####     3- exit           ####" << endl;
      cout << "###############################" << endl;
      cout << "input a option: ";
      cin >> option;
      if (option >= 1 && option <=3)
      {
         switch (option)
         {
            case 1:
            cout << "hello n.n/" << endl;
            cin.get();
            break;
            case 2:
            cout << "goodbye :P" << endl;
            cin.get();
            break;
            case 3:
            cout << "your'e out" << endl;
            cin.get();
            sw = 0;
            break;
         }
      }
      else
      {
         cout << "you have entered incorrect data, the program will close..." << endl;
         sw = 0;
      }
   }
   while(sw != 0);
   cin.get();
   return 0;
}
