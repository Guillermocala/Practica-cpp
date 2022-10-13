#include <string>
#include "Class.h"

using namespace std;

Cuenta::Cuenta(){}

Cuenta::Cuenta(string titular){
    this->titular = titular;
}

Cuenta::Cuenta(string titular, double cantidad){
    this->titular = titular;
    this->cantidad = cantidad;
}

void Cuenta::ingresar(double cantidad){
    if(cantidad > 0){
        this->cantidad += cantidad;
    }
}

void Cuenta::retirar(double cantidad){
    if(cantidad > 0){
        if(cantidad > this->cantidad){
            this->cantidad = 0;
        }
        else{
            this->cantidad -= cantidad;
        }
    }
}

string Cuenta::getTitular(){
    return this->titular;
}

void Cuenta::setTitular(string titular){
    this->titular = titular;
}

double Cuenta::getCantidad(){
    return this->cantidad;
}

void Cuenta::setCantidad(double cantidad){
    this->cantidad = cantidad;
}

string Cuenta::toString(){
    return "\nTitular: " + this->titular + "\nCantidad: " + to_string(this->cantidad);
}
