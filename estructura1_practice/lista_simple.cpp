#include<iostream>
#include<stdlib.h>

using namespace std;

typedef struct Nodo{
    int dato;
	struct Nodo* sgt;
}NodoA;

NodoA* crear_nodo(int dato, NodoA* apuntador){
	NodoA* nuevo_nodo = (NodoA*)malloc(sizeof(NodoA));
	nuevo_nodo->dato = dato;
	nuevo_nodo->sgt = apuntador;
	return nuevo_nodo;
}

void insertar_cab(NodoA *&cab, int dato){
	cab = crear_nodo(dato, cab);
}

void imprimir(NodoA* cab){
    NodoA* aux = cab;
    while(aux != NULL){
        cout << aux->dato << endl;
        aux = aux->sgt;
    }
}
int main(){
	NodoA *cab = NULL;
	for(int i = 0; i <= 10; i++){
		insertar_cab(cab, rand()%100);
	}
    imprimir(cab);
	return 0;
}