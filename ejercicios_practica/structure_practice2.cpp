/*
el unico propósito era arreglar el string no procesado, y 
aqui la respuesta...
Don't use malloc: the constructor for std::string will not be 
called and so the object created will be in an undefined state.

Use new instead. The C++ runtime will then call the default 
constructor for the std::string member. Don't forget to match 
the new with a delete.
*/

#include <iostream>
#include <string>

using namespace std;

struct perro{
    int edad;
    string nombre;
    perro* sig;
    void mostrar(){
        cout << "Edad: " << edad << endl;
        cout << "Nombre: " << nombre << endl;
    }
};

perro* inserta(perro* ptr, int edad, string nombre);
void listar(perro* ptr);
int main() {

    perro* cabecera = NULL;
    cabecera = inserta(cabecera, 15, "perrito 1");
    cabecera = inserta(cabecera, 22, "perrito 2");
    cabecera = inserta(cabecera, 48, "perrito 3");
    listar(cabecera);
    
    return 0;
}

perro* inserta(perro* ptr, int edad, string nombre){
    perro* nuevo = new perro();
    nuevo->edad = edad;
    nuevo->nombre = nombre;
    if (ptr == NULL){
        nuevo->sig = NULL;
        ptr = nuevo;
    }
    else{
        nuevo->sig = ptr;
        ptr = nuevo;
    }
    return ptr;
}

void listar(perro* ptr){
    perro* aux = ptr;
    while (aux != NULL){
        aux->mostrar();
        aux = aux->sig;
    }
}