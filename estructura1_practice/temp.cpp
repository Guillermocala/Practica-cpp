#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    


    int i = 5;
    decltype(i) a;
    cout << typeid(a) << endl;
    return 0;
}