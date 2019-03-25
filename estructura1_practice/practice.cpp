#include <iostream>
using namespace std;
struct nodoa {
   int info;
   nodoa *sig;
};
nodoa *ptr=NULL;
nodoa *Insertar(nodoa *p, int xinfo);
nodoa *ordenarDesc(nodoa *p);
nodoa *ordenarAsc(nodoa *ptr);
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
				ptr = Insertar(ptr, i);
            cin.get();
				break;
			case 2:
				mostrar(ptr);
            cin.get();
				break;
			case 3:
            int opt;
            cout << "1-Ordenar Descendente\n2-Ordenar Ascendente" << endl;
            cout << "Ingrese una opcion: ";
            cin >> opt;
            switch(opt)
            {
               case 1:
                  ptr = ordenarDesc(ptr);
                  break;
               case 2:
                  ptr = ordenarAsc(ptr);
                  break;
               default:
                  cout << "Valor invalido!" << endl;
                  break;
            }
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
	return 0;
}

nodoa *Insertar(nodoa *ptr, int xinfo)
{
   nodoa *p;
   p = (struct nodoa *) malloc (sizeof (nodoa));
	p->info=xinfo;
	if(ptr==NULL){
  		ptr=p;
  		p->sig=NULL;
	}
  	else{
  		p->sig=ptr;
		ptr=p;
  	}
	return ptr;
}
void mostrar(nodoa *ptr)
{
   nodoa *r;
	system ("clear");
   r=ptr;
   cout << "PTR ";
	while(r!=NULL)
   {
    	cout<<"["<<r->info<<"]->";
    	r=r->sig;
	}
	cout<<" NULL";
	cin.get();
}
nodoa *ordenarDesc(nodoa *ptr)
{
   nodoa *p, *q, *aux, *aux2;
   p = ptr;
   if(ptr == NULL)
   {
      cout << "la lista esta vacia" << endl;
   }
   else if(p == ptr && p->sig == NULL)
   {
      cout << "la lista solo tiene un elemento" << endl;
   }
   else
   {
      aux = ptr;
      while(aux != NULL)
      {
         p = ptr;
         while(p != NULL)
         {
            if(p->sig != NULL && p->info < p->sig->info)
            {
               q = p->sig;
               if(p == ptr)
               {
                  p->sig = q->sig;
                  q->sig = p;
                  ptr = q;
               }
               else
               {
                  if(q->sig != NULL)
                  {
                     aux2 = ptr;
                     while(aux2->sig != p)
                     {
                        aux2 = aux2->sig;
                     }
                     p->sig = q->sig;
                     q->sig = p;
                     aux2->sig = q;
                  }
                  else
                  {
                     aux2 = ptr;
                     while(aux2->sig != p)
                     {
                        aux2 = aux2->sig;
                     }
                     p->sig = NULL;
                     aux2->sig = q;
                     q->sig = p;
                  }
               }
               if(p == aux)
               {
                  aux = q;
               }
            }
            else
            {
               p = p->sig;
            }
         }
         aux = aux->sig;
      }
   }
   cin.get();
   return ptr;
}
nodoa *ordenarAsc(nodoa *ptr)
{
   nodoa *p, *q, *aux, *aux2;
   p = ptr;
   if(ptr == NULL)
   {
      cout << "la lista esta vacia" << endl;
   }
   else if(p == ptr && p->sig == NULL)
   {
      cout << "la lista solo tiene un elemento" << endl;
   }
   else
   {
      aux = ptr;
      while(aux != NULL)
      {
         p = ptr;
         while(p != NULL)
         {
            if(p->sig != NULL && p->info > p->sig->info)
            {
               q = p->sig;
               if(p == ptr)
               {
                  p->sig = q->sig;
                  q->sig = p;
                  ptr = q;
               }
               else
               {
                  if(q->sig != NULL)
                  {
                     aux2 = ptr;
                     while(aux2->sig != p)
                     {
                        aux2 = aux2->sig;
                     }
                     p->sig = q->sig;
                     q->sig = p;
                     aux2->sig = q;
                  }
                  else
                  {
                     aux2 = ptr;
                     while(aux2->sig != p)
                     {
                        aux2 = aux2->sig;
                     }
                     p->sig = NULL;
                     aux2->sig = q;
                     q->sig = p;
                  }
               }
               if(p == aux)
               {
                  aux = q;
               }
            }
            else
            {
               p = p->sig;
            }
         }
         aux = aux->sig;
      }
   }
   cin.get();
   return ptr;
}
