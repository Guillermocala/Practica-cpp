/*
*Guillermo cala; 31/ jan/ 19
*size of value types
*/
##include <iostream>
using namespace std;

int int main()
{
   /*char, char16_t, char32_t, wchar_t type. all of them are equal since in cpp all char occupy the same space, but is essential to use only 'char'*/
   char genre = 'M';
   /*signed occupies negative and positive values, instead unsiged only positive values*/
   short int SmallInt; /* -32768 / 32767 */
   int NormalInt; /* -2147483648 / 2147483647 */
   long int BiggerInt; /* -9223372036854775808 / 9223372036854775807 */
   long long int BBiggerInt; /* same than long int */
   float NormalFloat; /* save six values including the point anywhere it */
   double NormalDouble; /* same than float */
   long double BiggerFloat; /* same than float */
   return 0;
}
