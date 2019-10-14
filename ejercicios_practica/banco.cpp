#include "iostream"
#include "conio.h"
using namespace std;
int menu();
int menuTransaccion();
struct Nodo{
	int tipo_Trans;
	float cant_dinero;
	Nodo *sig;
};

class colacaja{
	Nodo *ptr= NULL;
	public:
	int tamano();
	bool colavacia();
	void mostrar();
	void insertar(int x,float y);
	Nodo obtener();
	Nodo eliminar();
};
bool colacaja::colavacia(){
	return(ptr==NULL);
}
int colacaja::tamano(){
	int c=0;
	Nodo *aux= ptr;
	while(aux!=NULL){
		c++;
		aux=aux->sig;
	}
	return c;
}
void colacaja::mostrar(){
	if(!colavacia()){
		Nodo *p =ptr;
		int cont = 1;
		while(p!=NULL){
			cout << cont << endl;
			cont++;
			p=p->sig;
		}
	}
}
Nodo colacaja::obtener(){
	if(!colavacia()){
		return *ptr;
	}
   return *ptr;
}
void colacaja::insertar(int x, float y){
	if(ptr==NULL){
		ptr = new Nodo;
		ptr->tipo_Trans=x;
		ptr->cant_dinero= y;
		ptr->sig=NULL;
	}
	else{
		Nodo *p = ptr;
		while(p->sig!=NULL){
			p=p->sig;
		}
		Nodo *nuevo= new Nodo;
		nuevo->tipo_Trans=x;
		nuevo->cant_dinero=y;
		nuevo->sig=NULL;
		p->sig=nuevo;
	}
}

Nodo colacaja::eliminar(){
	if(!colavacia()){
		Nodo *aux_borrar = ptr;
		ptr=ptr->sig;
		delete aux_borrar;
	}
   return *ptr;
}
int main()
{
   colacaja caja1;
   colacaja caja2;
   colacaja caja3;
	int contclientes=0;
   int sw = 1, sw2 = 1, opt, temp;
	float valor;
   do{
      switch(menu())
      {
         case 1:
            //LLEGA CLIENTE
            system("CLS");
            cout << "opcion - llega cliente" << endl;
				if(caja1.tamano()<=3 && caja2.tamano()<=3 && caja3.tamano()<=3)
				{
					if(caja1.tamano() <= caja2.tamano() && caja1.tamano() <= caja3.tamano())
					{
						opt = menuTransaccion();
						cout << "Ingrese el valor: ";
						cin >> valor;
						caja1.insertar(opt, valor);
					}
					else if(caja2.tamano() <= caja1.tamano() && caja2.tamano() <= caja3.tamano())
					{
						opt = menuTransaccion();
						cout << "Ingrese el valor: ";
						cin >> valor;
						caja2.insertar(opt, valor);
					}
					else
					{
						opt = menuTransaccion();
						cout << "Ingrese el valor: ";
						cin >> valor;
						caja3.insertar(opt, valor);
					}
				}
				else
				{
					contclientes++;
				}
            break;
         case 2:
            //SE VA CLIENTE
            system("CLS");
            cout << "opcion - se va cliente" << endl;
				cout << "Que caja desea avanzar: ";
				cin >> temp;
				switch(temp)
				{
					case 1:
						caja1.eliminar();
						break;
					case 2:
						caja2.eliminar();
						break;
					case 3:
						caja3.eliminar();
						break;
					default:
						cout << "Opcion erronea..." << endl;
						break;
				}
				getch();
            break;
         case 3:
            //MOSTRAR COLAS
            system("CLS");
            cout << "opcion - mostrar colas" << endl;
				cout << "cola 1" << endl;
				caja1.mostrar();
				cout << "cola 2" << endl;
				caja2.mostrar();
				cout << "cola 3" << endl;
				caja3.mostrar();
            getch();
            break;
         case 0:
            sw = 0;
            cout << "El programa se cerrara" << endl;
            system("pause");
            break;
         default:
            /*nunca llega a esta opcion, pero se implementa en caso de que algo se cambie*/
            cout << "Opcion erronea..." << endl;
            break;
      }
   }while(sw);
   return 0;
}
int menu()
{
   int opcion;
   system("CLS");
   printf ("\n\n");
   printf("\t\t\t##################################\n");
   printf("\t\t\t#            BANK                #\n");
   printf("\t\t\t##################################\n");
   printf("\t\t\t#                                #\n");
   printf("\t\t\t# 1  ->  Llega Cliente           #\n");
   printf("\t\t\t#                                #\n");
   printf("\t\t\t# 2  ->  Se va Cliente           #\n");
   printf("\t\t\t#                                #\n");
   printf("\t\t\t# 3  ->  Mostrar Colas           #\n");
   printf("\t\t\t#                                #\n");
   printf("\t\t\t# 0  ->  Salir                   #\n");
   printf("\t\t\t#                                #\n");
   printf("\t\t\t##################################\n");
   printf("\t\t\t#    Elija una opcion...         #\n");
   printf("\t\t\t##################################\n");
   int sw = 1;
   /*se valida mediante el codigo ASCII de el caracter ingresado*/
   do{
      opcion = getch();
      if(opcion >= 48 && opcion <= 51)
      {
         sw = 0;
      }
      else
      cout << "Se debe ingresar un entero entre 0-3" << endl;
   }while(sw);
   opcion = opcion-48;
   return opcion;
}
int menuTransaccion()
{
   int opcion;
   system("CLS");
   printf ("\n\n");
   printf("\t\t\t##################################\n");
   printf("\t\t\t#       TIPO DE TRANSACCION      #\n");
   printf("\t\t\t##################################\n");
   printf("\t\t\t#                                #\n");
   printf("\t\t\t# 1  ->  Retiro                  #\n");
   printf("\t\t\t#                                #\n");
   printf("\t\t\t# 2  ->  Transferencia           #\n");
   printf("\t\t\t#                                #\n");
   printf("\t\t\t# 3  ->  Consignacion            #\n");
   printf("\t\t\t#                                #\n");
   printf("\t\t\t# 0  ->  Salir                   #\n");
   printf("\t\t\t#                                #\n");
   printf("\t\t\t##################################\n");
   printf("\t\t\t#    Elija una opcion...         #\n");
   printf("\t\t\t##################################\n");
   int sw = 1;
   /*se valida mediante el codigo ASCII de el caracter ingresado*/
   do{
      opcion = getch();
      if(opcion >= 48 && opcion <= 51)
      {
         sw = 0;
      }
      else
      cout << "Se debe ingresar un entero entre 0-3" << endl;
   }while(sw);
   opcion = opcion-48;
   return opcion;
}
