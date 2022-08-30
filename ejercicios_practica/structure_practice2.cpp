/*
el unico propósito de este fichero era arreglar el string no 
procesado, y aqui la respuesta...
Don't use malloc: the constructor for std::string will not be 
called and so the object created will be in an undefined state.

Use new instead. The C++ runtime will then call the default 
constructor for the std::string member. Don't forget to match 
the new with a delete.

--- another problem

No usar array de chars. char nombre[100], porque existen problemas
con el manejo de apuntadores hacia un array de char, para solventar
se usa string y santo remedio. check this out...
class Student {
    char name[20];
    long number;
public:
    Student (char nm[20], long val) : 
         name(nm), number(val) {}
11

Your constructor argument nm is, actually, not an array! Yes, I know 
it looks like one, because you wrote char nm[20]. But, actually, it's 
char* nm. That translation is performed automatically when you write an 
array type in a function parameter list. Yes, it's stupid. Blame C.

So, the error message is telling you that you cannot assign a pointer 
to an array. Fair enough. Doesn't really matter anyway, since the 
language also doesn't let you assign arrays to arrays. Lol.

This is why, since 1998, we've had std::string to fix all these 
terrible problems.

link: https://stackoverflow.com/questions/33804462/error-incompatible-types-in-assignment-of-char-to-char-20
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