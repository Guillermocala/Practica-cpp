/*
*guillermo cala; 26/ feb/ 19
*do while loop
*/
#include "iostream"
using namespace std;

int main(int argc, char const *argv[])
{
   int sw = 1;
   do
   {
      system("clear");
      cout << "###############################" << endl;
      cout << "####           e.e         ####" << endl;
      cout << "###############################" << endl;
      cout << "####     1- say hello      ####" << endl;
      cout << "####     2- say goodbye    ####" << endl;
      cout << "####     3- exit           ####" << endl;
      cout << "###############################" << endl;
      do
      {
         int opt;
         cout << "input an option: ";
         cin >> opt;
      }
      switch (opt)
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
         default:
         cout << "u input a wrong option" << endl;
         cin.get();
         break;
      }
      while();
   }
   while(sw != 0);
   cin.get();
   return 0;
}
