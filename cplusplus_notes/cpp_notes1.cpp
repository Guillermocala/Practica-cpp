/*
*guillermo cala; jan/ 9/ 19
*algoritmo para ver el tomaño de los typos de datos fundamentales
*/
#include <iostream>
using namespace std;

int main()
{
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of char16 : " << sizeof(char16_t) << endl;
    cout << "Size of char32 : " << sizeof(char32_t) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of long long int : " << sizeof(long long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of long double : " << sizeof(long double) << endl;
    cout << "Size of bool : " << sizeof(bool) << endl;
	cin.get();
	return 0;
}
