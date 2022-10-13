#include <iostream>
#include "MyClass.h"

using namespace std;

Persona::Persona(int nit, string nombre, int edad){
    this->nit = nit;
    this->nombre = nombre;
    this->edad = edad;
}
void Persona::showData(){
    cout << "nit: " << this->nit << endl;
    cout << "nombre: " << this->nombre << endl;
    cout << "edad: " << this->edad << endl;
}
