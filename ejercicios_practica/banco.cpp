#include "iostream"
#include "conio.h"
#include "string"
#include "iomanip"
using namespace std;
int menu();
int menuTransaccion();
struct Nodo{
	string nombre_usuario;
	int tipo_Trans;
	float cant_dinero;
	Nodo *sig;
};
Nodo *ptrRegis = NULL;
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
void mostrarRegistro(){
	Nodo *p = ptrRegis;
	if(p == NULL){
		cout << "Lista de registro vacia!" << endl;
	}
	else
	{
		while(p!=NULL){
			cout << "\tNombre: " << p->nombre_usuario << endl;
			cout << "Tipo de transaccion: " << p->tipo_Trans << endl;
			cout << "Valor: " << setprecision(15) << p->cant_dinero << endl;
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
Nodo *insertaRegistro(Nodo *ptrAux, int x, float y, string z){
	if(ptrAux==NULL){
		ptrAux = new Nodo;
		ptrAux->tipo_Trans = x;
		ptrAux->cant_dinero = y;
		ptrAux->nombre_usuario = z;
		ptrAux->sig=NULL;
	}
	else{
		Nodo *p = ptrAux;
		while(p->sig!=NULL){
			p=p->sig;
		}
		Nodo *nuevo= new Nodo;
		nuevo->tipo_Trans = x;
		nuevo->cant_dinero = y;
		nuevo->nombre_usuario = z;
		nuevo->sig=NULL;
		p->sig=nuevo;
	}
	return ptrAux;
}
Nodo colacaja::eliminar(){
	if(!colavacia()){
		Nodo *aux_borrar = ptr;
		ptr=ptr->sig;
		delete aux_borrar;
	}
   return *ptr;
}
void contDinero(Nodo *ptrAux)
{
	float totalRetirado = 0, totalMovido = 0;
	Nodo *aux = ptrAux;
	if(ptrAux == NULL)
	{
		cout << "4- No se han hecho operaciones en el banco..." << endl;
	}
	else
	{
		while(aux != NULL)
		{
			if(aux->tipo_Trans == 1){
				totalRetirado += aux->cant_dinero;
			}
			totalMovido += aux->cant_dinero;
			aux = aux->sig;
		}
		cout << "4- Total dinero retirado: " << setprecision(15) << totalRetirado << endl;
		cout << "5- Total dinero que se movio: " << setprecision(15) << totalMovido << endl;
	}
}
int main()
{
   colacaja caja1;
   colacaja caja2;
   colacaja caja3;
	float contClientes=0, contRetiro=0, contConsignacion=0, contTransferencia=0;
   int sw = 1, sw2 = 1, opt, temp;
	int contCaja1 = 0, contCaja2 = 0, contCaja3 = 0;
	string name;
	float valor, porcentaje;
   do{
      switch(menu())
      {
         case 1:
            //LLEGA CLIENTE
            system("CLS");
            cout << "\tOPCION - llega cliente" << endl;
				if((caja1.tamano() < 3) || (caja2.tamano() < 3) || (caja3.tamano() < 3))
				{
					if(caja1.tamano() <= caja2.tamano() && caja1.tamano() <= caja3.tamano())
					{
						opt = menuTransaccion();
						cin.ignore();
						cout << "Ingrese el nombre: ";
						getline(cin, name);
						cout << "Ingrese el valor: ";
						cin >> valor;
						while (valor <= 0){
							cout << "Ha ingresado un valor erroneo..." << endl;
							cout << "Ingrese el valor: ";
							cin >> valor;
						}
						caja1.insertar(opt, valor);
						ptrRegis = insertaRegistro(ptrRegis, opt, valor, name);
						if (opt == 1){
							contRetiro++;
						}
						else if(opt == 2){
							contTransferencia++;
						}
						else{
							contConsignacion++;
						}
						contCaja1++;
					}
					else if(caja2.tamano() <= caja1.tamano() && caja2.tamano() <= caja3.tamano())
					{
						opt = menuTransaccion();
						cin.ignore();
						cout << "Ingrese el nombre: ";
						getline(cin, name);
						cout << "Ingrese el valor: ";
						cin >> valor;
						while (valor <= 0){
							cout << "Ha ingresado un valor erroneo..." << endl;
							cout << "Ingrese el valor: ";
							cin >> valor;
						}
						caja2.insertar(opt, valor);
						ptrRegis = insertaRegistro(ptrRegis, opt, valor, name);
						if (opt == 1){
							contRetiro++;
						}
						else if(opt == 2){
							contTransferencia++;
						}
						else{
							contConsignacion++;
						}
						contCaja2++;
					}
					else
					{
						opt = menuTransaccion();
						cin.ignore();
						cout << "Ingrese el nombre: ";
						getline(cin, name);
						cout << "Ingrese el valor: ";
						cin >> valor;
						while (valor <= 0){
							cout << "Ha ingresado un valor erroneo..." << endl;
							cout << "Ingrese el valor: ";
							cin >> valor;
						}
						caja3.insertar(opt, valor);
						ptrRegis = insertaRegistro(ptrRegis, opt, valor, name);
						if (opt == 1){
							contRetiro++;
						}
						else if(opt == 2){
							contTransferencia++;
						}
						else{
							contConsignacion++;
						}
						contCaja3++;
					}
				}
				else
				{
					contClientes++;
				}
            break;
         case 2:
            //SE VA CLIENTE
            system("CLS");
            cout << "\tOPCION - se va cliente" << endl;
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
            cout << "\tOPCION - mostrar colas" << endl;
				cout << "cola 1" << endl;
				caja1.mostrar();
				cout << "\ncola 2" << endl;
				caja2.mostrar();
				cout << "\ncola 3" << endl;
				caja3.mostrar();
            getch();
            break;
			case 4:
				//MOSTRAR REGISTRO
				system("CLS");
				cout << "\tOPCION - mostrar registro" << endl;
				mostrarRegistro();
				getch();
				break;
         case 0:
            sw = 0;
				system("CLS");
            cout << "\tEstadisticas Generales del Banco" << endl;
				cout << "1- Personas que se fueron: " << contClientes << endl;
				if(contCaja1 > contCaja2 && contCaja1 > contCaja3){
					cout << "2- La caja que mas atendio fue la caja 1" << endl;
				}
				else if(contCaja2 > contCaja1 && contCaja2 > contCaja3){
					cout << "2- La caja que mas atendio fue la caja 2" << endl;
				}
				else if(contCaja3 > contCaja1 && contCaja3 > contCaja2){
					cout << "2- La caja que mas atendio fue la caja 3" << endl;
				}
				else{
					cout << "2- Las cajas atendieron igual numero de clientes" << endl;
				}
				porcentaje = (contConsignacion/(contRetiro+contConsignacion+contTransferencia) * 100);
				cout << "3- EL porcentaje de consignacion en todo el banco fue de: " << setprecision(5) << porcentaje << "%" << endl;
				contDinero(ptrRegis);
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
   cout << "\n\n";
   cout << "\t\t\t##################################\n";
   cout << "\t\t\t#            BANK                #\n";
   cout << "\t\t\t##################################\n";
   cout << "\t\t\t#                                #\n";
   cout << "\t\t\t# 1  ->  Llega Cliente           #\n";
   cout << "\t\t\t#                                #\n";
   cout << "\t\t\t# 2  ->  Se va Cliente           #\n";
   cout << "\t\t\t#                                #\n";
   cout << "\t\t\t# 3  ->  Mostrar Colas           #\n";
   cout << "\t\t\t#                                #\n";
	cout << "\t\t\t# 4  ->  Mostrar Registro        #\n";
	cout << "\t\t\t#                                #\n";
   cout << "\t\t\t# 0  ->  Salir                   #\n";
   cout << "\t\t\t#                                #\n";
   cout << "\t\t\t##################################\n";
   cout << "\t\t\t#    Elija una opcion...         #\n";
   cout << "\t\t\t##################################\n";
   int sw = 1;
   /*se valida mediante el codigo ASCII de el caracter ingresado*/
   do{
      opcion = getch();
      if(opcion >= 48 && opcion <= 52)
      {
         sw = 0;
      }
      else
      cout << "Se debe ingresar un entero entre 0-4" << endl;
   }while(sw);
   opcion = opcion-48;
   return opcion;
}
int menuTransaccion()
{
   int opcion;
   system("CLS");
   cout << "\n\n";
   cout << "\t\t\t##################################\n";
   cout << "\t\t\t#       TIPO DE TRANSACCION      #\n";
   cout << "\t\t\t##################################\n";
   cout << "\t\t\t#                                #\n";
   cout << "\t\t\t# 1  ->  Retiro                  #\n";
   cout << "\t\t\t#                                #\n";
   cout << "\t\t\t# 2  ->  Transferencia           #\n";
   cout << "\t\t\t#                                #\n";
   cout << "\t\t\t# 3  ->  Consignacion            #\n";
   cout << "\t\t\t#                                #\n";
   cout << "\t\t\t##################################\n";
   cout << "\t\t\t#    Elija una opcion...         #\n";
   cout << "\t\t\t##################################\n";
   int sw = 1;
   /*se valida mediante el codigo ASCII de el caracter ingresado*/
   do{
      opcion = getch();
      if(opcion >= 49 && opcion <= 51)
      {
         sw = 0;
      }
      else
      cout << "Se debe ingresar un entero entre 1-3" << endl;
   }while(sw);
   opcion = opcion-48;
   return opcion;
}
