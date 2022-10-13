/*
    Implementacion de cuentas de banco en forma básica: solamente
    nombre y cantidad.
    Se implementa una estructura estática(array) y un sistema de
    menu simple, usando metodos para simplificar el codigo.

    El proposito gral de este ejercicio es separar la implementacion
    y definicion de la(s) clases en archivos apartes.
*/
#include <iostream>
#include <conio.h>
#include "Class.h"

#define CANT_CUENTAS 20

using namespace std;

int menu();
string getName();
double getAmount();
void waitForUser();
void showAccounts(Cuenta cuentas[CANT_CUENTAS], int index);
int foundIndex(Cuenta cuentas[CANT_CUENTAS], int index, string nombre);

int main(int argc, char* argv[]) {
    
    Cuenta cuentas[CANT_CUENTAS];
    int index = 0, result;
    string nombre, temp;
    double cantidad;

    bool activador = true;
    do {
        switch (menu()) {
            case 1:
                /*insertar cuenta*/
                cout << "\tInsertar cuenta" << endl;
                if(index <= CANT_CUENTAS){
                    nombre = getName();
                    cantidad = getAmount();
                    cuentas[index] = Cuenta(nombre, cantidad);
                    index++;
                }
                else{
                    cout << "Ha alcanzado el limite de cuentas..." << endl;
                }
                waitForUser();
                break;
            case 2:
                /*buscar cuenta*/
                cout << "\tBuscar cuenta" << endl;
                nombre = getName();
                result = foundIndex(cuentas, index, nombre);
                if(result != -1){
                    cout << cuentas[result].toString() << endl;
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
                result = foundIndex(cuentas, index, nombre);
                if(result != -1){
                    cout << "Ingrese el nuevo nombre del titular: ";
                    getline(cin >> ws, nombre);
                    cuentas[result].setTitular(nombre);
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
                result = foundIndex(cuentas, index, nombre);
                if(result != -1){
                    cuentas[result].setTitular("DELETED");
                    cuentas[result].setCantidad(-999999);
                }
                else{
                    cout << "No encontrado!" << endl;
                }
                waitForUser();
                break;
            case 5:
                /*mostrar cuentas*/
                cout << "\tMostrar cuenta" << endl;
                if(index == 0){
                    cout << "No hay cuentas para mostrar!" << endl;
                }
                else{
                    showAccounts(cuentas, index);
                }
                waitForUser();
                break;
            case 6:
                /*ingresar en cuenta*/
                cout << "\tIngresar en cuenta" << endl;
                nombre = getName();
                result = foundIndex(cuentas, index, nombre);
                if(result != -1){
                    cantidad = getAmount();
                    cuentas[result].ingresar(cantidad);
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
                result = foundIndex(cuentas, index, nombre);
                if(result != -1){
                    cantidad = getAmount();
                    cuentas[result].retirar(cantidad);
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

void showAccounts(Cuenta cuentas[CANT_CUENTAS], int index){
    for(int i = 0; i < index; i++){
        cout << cuentas[i].toString() << endl;
    }
}

int foundIndex(Cuenta cuentas[CANT_CUENTAS], int index, string nombre){
    for(int i = 0; i < index; i++){
        if(cuentas[i].getTitular().compare(nombre) == 0){
            return i;
        }
    }
    return -1;
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