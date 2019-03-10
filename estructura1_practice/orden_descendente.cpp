/*LLenar una lista en orden descendente*/
#include<iostream>
#include <stdlib.h>
using namespace std;
struct nodoa {
     int info;
     nodoa *sig;
     nodoa *ant;
};
nodoa *ptr=NULL, *p,*r, *s, *j, *q;
nodoa *Insertar(nodoa *p, int xinfo);
void ordenar(nodoa *p);
void mostrar(nodoa *p);


int main(int argc, char *argv[])
{
	int sw=1, opt, i;
	do{
		system("clear");
		cout<<"1. Ingresar datos.\n2. Mostrar \n3. Ordenar\n4. Salir"<<endl;
      cout << "ingrese una opcion: ";
		cin>>opt;
		switch(opt){
			case 1:
				cout<<"Ingrese el dato: ";
				cin>>i;
				s=Insertar(ptr, i);
            cin.get();
				break;
			case 2:
				mostrar(ptr);
            cin.get();
				break;
			case 3:
				ordenar(ptr);
            cin.ignore();
				break;
         case 4:
            sw=0;
            break;
			default:
				cout<<"Opcion invalida"<<endl;
				cin.get();
				break;
		}

	}while(sw!=0);
	system("pause");
	return 0;
}

nodoa *Insertar(nodoa *p, int xinfo)
{
	p= (struct nodoa *) malloc (sizeof (nodoa));
	p->info=xinfo;
	if(ptr==NULL){
  		ptr=p;
  		p->sig=NULL;
  		p->ant=NULL;
	}
  	else{
  		p->sig=ptr;
		ptr->ant=p;
		p->ant=NULL;
		ptr=p;
  	}
	return ptr;
}
void mostrar(nodoa *p)
{
	system ("clear");
   r=ptr;
	while(r!=NULL)
   {
    	cout<<"["<<r->info<<"]->";
    	r=r->sig;
	}
	cout<<" NULL";
	cin.get();
}
void ordenar(nodoa* p)
{
   j = ptr;
   if(ptr==NULL)
   {
      cout << "la lista esta vacia" << endl;
   }
   else if(j->sig == NULL && j->ant == NULL)
   {
      cout << "la lista solo tiene un elemento" << endl;
   }
   else
   {

   }



   cin.get();
}

/*q=ptr;
nodoa* aux=NULL;
while(q!=NULL)
{
   j=q->sig;
   while(j!=NULL)
   {
      if(q->info<j->info)
      {
         aux=j;                  //Aquí es
         j->sig=q;              // donde me embolato
         q->ant=j;               // help :(
            q=aux;
         }
         j=j->sig;
      }
      q=q->sig;
   }
   */
