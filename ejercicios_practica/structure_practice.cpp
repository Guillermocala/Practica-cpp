#include <iostream>

using namespace std;

struct persona{
    int edad;
    string nombre;
}primo3;


int main() {

    persona hijo1;
    hijo1.edad = 12;
    hijo1.nombre = "Guillermo";
    cout << "hijo..." << endl;
    cout << "el nombre es: " << hijo1.nombre << endl;
    cout << "la edad es: " << hijo1.edad << endl;
    cout << "primo..." << endl;
    primo3.edad = 5;
    primo3.nombre = "Carlos";
    cout << "el nombre es: " << primo3.nombre << endl;
    cout << "la edad es: " << primo3.edad << endl;

    return 0;
}