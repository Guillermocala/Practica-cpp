/*ordenar una lista descendentemente*/
#include <iostream>
#include <stdlib.h>
using namespace std;
struct nodoa {
     int info;
     nodoa *sig;
     nodoa *ant;
};
nodoa *ptr=NULL, *p,*r, *s, *j, *q, *k;
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
				ptr=Insertar(ptr, i);
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

nodoa *Insertar(nodoa *ptr, int xinfo)
{
	p= (struct nodoa *) malloc (sizeof (nodoa));
	p->info=xinfo;
	if(ptr==NULL){
  		ptr=p;
  		p->sig=NULL;
  		p->ant=NULL;
	}
  	else{
      p->ant=NULL;
  		p->sig=ptr;
		ptr->ant=NULL;
		ptr=p;
  	}
	return ptr;
}
void mostrar(nodoa *ptr)
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
void ordenar(nodoa *ptr)
{
   p = ptr;
   if(ptr==NULL)
   {
      cout << "la lista esta vacia" << endl;
   }
   else if(p->sig == NULL && p->ant == NULL)
   {
      cout << "la lista solo tiene un elemento" << endl;
   }
   else
   {
      while(p->sig != NULL)
      {
         if(p->info <= p->sig->info)
         {
            k = p->sig;
            p->sig = k->sig;
            k->ant = p->ant;
            k->sig = p;
            p->ant = k;
            while(k != NULL)
            {
               if(k->ant->info <= k->info)
               {
                  p = k->ant;
                  k->ant = p->ant;
                  p->sig = k->sig;
                  k->sig = p;
                  p->ant = k;
               }
               k = k->ant;
            }
         }
         p = p->sig;
      }
   }
   cin.get();
}
