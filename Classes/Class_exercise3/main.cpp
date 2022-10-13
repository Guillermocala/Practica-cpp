/*
    Implementacion de cuentas de banco en forma básica: solamente
    nombre y cantidad.
    Se implementa una estructura dinamica(vector) y un sistema de
    menu simple, usando metodos para simplificar el codigo.

    El proposito gral de este ejercicio es separar la implementacion
    y definicion de la(s) clases en archivos apartes.
*/
#include <iostream>
#include <conio.h>
#include <vector>
#include "Class.h"

#define CANT_CUENTAS 20

using namespace std;

int menu();
string getName();
double getAmount();
void waitForUser();
void showAccounts(vector<Cuenta> cuentas);
int foundIndex(vector<Cuenta> cuentas, string nombre);
void eraseItem(vector<Cuenta>& cuentas, int index);

int main(int argc, char* argv[]) {
    vector<Cuenta> cuentas;
    int index;
    string nombre;
    double cantidad;

    bool activador = true;
    do {
        switch (menu()) {
            case 1:
                /*insertar cuenta*/
                cout << "\tInsertar cuenta" << endl;
                nombre = getName();
                cantidad = getAmount();
                cuentas.push_back(Cuenta(nombre, cantidad));
                waitForUser();
                break;
            case 2:
                /*buscar cuenta*/
                cout << "\tBuscar cuenta" << endl;
                nombre = getName();
                index = foundIndex(cuentas, nombre);
                if(index != -1){
                    cout << cuentas[index].toString() << endl;
                }
                else{
                    cout << "No encontrado!" << endl;
                }
                waitForUser();
                break;
            case 3:
                /*modificar cuenta*/
                cout << "\tModificar cuenta" << endl;
                nombre = getName();
                index = foundIndex(cuentas, nombre);
                if(index != -1){
                    cout << "Ingrese el nuevo nombre del titular: ";
                    getline(cin >> ws, nombre);
                    cuentas[index].setTitular(nombre);
                }
                else{
                    cout << "No encontrado!" << endl;
                }
                waitForUser();
                break;
            case 4:
                /*eliminar cuenta*/
                cout << "\tEliminar cuenta" << endl;
                nombre = getName();
                index = foundIndex(cuentas, nombre);
                if(index != -1){
                    eraseItem(cuentas, index);
                }
                else{
                    cout << "No encontrado!" << endl;
                }
                waitForUser();
                break;
            case 5:
                /*mostrar cuentas*/
                cout << "\tMostrar cuenta" << endl;
                if(cuentas.empty()){
                    cout << "No hay cuentas para mostrar!" << endl;
                }
                else{
                    showAccounts(cuentas);
                }
                waitForUser();
                break;
            case 6:
                /*ingresar en cuenta*/
                cout << "\tIngresar en cuenta" << endl;
                nombre = getName();
                index = foundIndex(cuentas, nombre);
                if(index != -1){
                    cantidad = getAmount();
                    cuentas[index].ingresar(cantidad);
                    cout << "Usted ha ingresado " << cantidad << ", Exitosamente!" << endl;
                }
                else{
                    cout << "No encontrado!" << endl;
                }
                waitForUser();
                break;
            case 7:
                /*retirar de cuenta*/
                cout << "\tRetirar de cuenta" << endl;
                index = foundIndex(cuentas, nombre);
                if(index != -1){
                    cantidad = getAmount();
                    cuentas[index].retirar(cantidad);
                    cout << "Usted ha retirado " << cantidad << ", Exitosamente!" << endl;
                }
                else{
                    cout << "No encontrado!" << endl;
                }
                waitForUser();
                break;
            case 0:
                /*salir*/
                cout << "El programa se cerrara!" << endl;
                activador = false;
                waitForUser();
                break;
            default:
                /*unexpected function*/
                break;
        }
    } while(activador);
    return 0;
}

string getName(){
    string nombre;
    cout << "Ingrese el nombre del titular: ";
    getline(cin >> ws, nombre);
    return nombre;
}

double getAmount(){
    double cantidad;
    cout << "Ingrese la cantidad: ";
    cin >> cantidad;
    return cantidad;
}

void waitForUser(){
    cout << "Pulse una tecla para continuar" << endl;
    getch();
}

void showAccounts(vector<Cuenta> cuentas){
    for(auto item: cuentas){
        cout << item.toString() << endl;
    }
}

int foundIndex(vector<Cuenta> cuentas, string nombre){
    for(int i = 0; i < cuentas.size(); i++){
        if(cuentas[i].getTitular().compare(nombre) == 0){
            return i;
        }
    }
    return -1;
}

/*
    por defecto el vector se pasa por valor y no realiza el cambio
    por ende hay que agregarle el operador de referencia (&)
*/
void eraseItem(vector<Cuenta>& cuentas, int index){
    cuentas.erase(cuentas.begin() + index);
    cout << "Eliminado exitosamente! " << endl;
}

int menu(){
    int option;
    system("cls");
    cout << "\t\t\t##############################" << endl;
    cout << "\t\t\t      Cuentas bancarias       " << endl;
    cout << "\t\t\t##############################" << endl;
    cout << "\t\t\t                              " << endl;
    cout << "\t\t\t     1 - Insertar             " << endl;
    cout << "\t\t\t                              " << endl;
    cout << "\t\t\t     2 - Buscar               " << endl;
    cout << "\t\t\t                              " << endl;
    cout << "\t\t\t     3 - Modificar            " << endl;
    cout << "\t\t\t                              " << endl;
    cout << "\t\t\t     4 - Eliminar             " << endl;
    cout << "\t\t\t                              " << endl;
    cout << "\t\t\t     5 - Mostrar              " << endl;
    cout << "\t\t\t                              " << endl;
    cout << "\t\t\t     6 - Ingresar en cuenta   " << endl;
    cout << "\t\t\t                              " << endl;
    cout << "\t\t\t     7 - Retirar de cuenta    " << endl;
    cout << "\t\t\t                              " << endl;
    cout << "\t\t\t     0 - Salir                " << endl;
    cout << "\t\t\t                              " << endl;
    cout << "\t\t\t##############################" << endl;
    
    bool activador = true;
    do {
        cout << "Ingrese una opcion: ";
        cin >> option;
        if(option >= 0 && option <= 7) {
            activador = false;
        }
        else{
            cout << "Se debe ingresar un numero entre 1 y 7" << endl;
        }
    } while(activador);
    return option;
}