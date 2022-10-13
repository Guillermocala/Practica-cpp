#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
    vector<int> numeros;

    for(auto item: numeros){
        cout << item << endl;
    }
    numeros.push_back(4);
    numeros.push_back(43);
    numeros.push_back(411);
    for(auto item: numeros){
        cout << item << endl;
    }
    return 0;
}