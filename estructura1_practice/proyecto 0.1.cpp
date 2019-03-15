#include<iostream>
#include<conio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct nodoa{
	long cedula;
	char nombre[30];
	int fechaNac[3];
	char departamento[20];
	nodoa *sig;
};
struct nodob{
	long cedula;
	
	nodob *sig;
};
nodoa* ptra=NULL, *l,*k,*r,*m,*num,*y;
nodob* ptrb=NULL;
int rep=0;
nodoa* insertarcedula(nodoa *p,long numero);
nodoa* insertarnombre(nodoa *p,char name[]);
nodoa* nacimiento(nodoa*p, int nac[]);
nodoa* insertardepart(nodoa*p,char dpta[]);
void insertarinfo(nodoa*p);
void mostrarinfo(nodoa *p);
int menu(void);

int main(int argc,char*argv[])
{
	system("CLS");
	int sw=1;
	int n,j,i;

	long opcion,num;
	do
	{
		switch (menu())						
		{
			case 1:
				system("CLS");
				insertarinfo(ptra);
	            break;
			case 2:
				system("cls");
				mostrarinfo(ptra);
				getch();
				break;
								
		    case 0:
       	        system ("CLS");
                cout<<"Press any key to exit...";
                sw=0;
                break;
            
			default:
				system("cls");
                cout<<"opcion no valida...por favor intente nuevamente\n";
                getch();
                break;    
		}
	}while(sw);

	getch();
}
int menu (void){
int opcion;
system("CLS");
system ("color 0B");
   
cout<<"\t\t\t??????????????????????????????????\n";
cout<<"\t\t\t?             NOMINA             ?\n";
cout<<"\t\t\t??????????????????????????????????\n";
cout<<"\t\t\t?                                ?\n";
cout<<"\t\t\t? 1-> Ingrese informacion        ?\n";
cout<<"\t\t\t?                                ?\n";
cout<<"\t\t\t? 2-> Mostrar informacion        ?\n";
cout<<"\t\t\t?                                ?\n";
cout<<"\t\t\t?                                ?\n";
cout<<"\t\t\t?                                ?\n";
cout<<"\t\t\t?                                ?\n";
cout<<"\t\t\t? 0-> Salir                      ?\n";
cout<<"\t\t\t??????????????????????????????????\n";
cout<<"\t\t\t?       Elija una opcion...      ?\n";
cout<<"\t\t\t??????????????????????????????????\n";
int sw=1;
    do {
    opcion=getch();
       if (opcion>=48 && opcion <=57){
       sw=0;
       }else
        cout<<"\n se debe ingresar un entero entre 1-9\n";
    
    }while(sw);
    opcion=opcion-48;

   return opcion;
   } 
nodoa* insertarcedula(nodoa *p,long numero)
{
	p=(struct nodoa*) malloc(sizeof (nodoa));
	p->cedula=numero;
	if(ptra==NULL)
	{
		ptra=p;
		ptra->sig=NULL;
	}
	else
	{
		l=ptra;
		while(l->sig!=NULL or l->cedula==p->cedula)
		{
			if(l->cedula==p->cedula)
			{
				cout<<"Este numero de cedula ya fue ingresado"<<endl;
				rep=1;
				getch();
				return ptra;
			}
			else
			{
				l=l->sig;
			}
		}
		l->sig=p;
		p->sig=NULL;
		
	}
	return ptra;
}
nodoa* insertarnombre(nodoa*p,char name[])
{
	p=(struct nodoa*) malloc(sizeof (nodoa));
	strcpy(p->nombre,name);
	if(ptra==NULL)
	{
		ptra=p;
		ptra->sig=NULL;
	}
	else
	{
		l=ptra;
		while(l->sig!=NULL)
		{
			l=l->sig;
		}
		l->sig=p;
		p->sig=NULL;
	}
	return ptra;
}

void mostrarinfo(nodoa *p)
{
	y=ptra;
	int i=1;
	while(y!=NULL)
	{
		cout<<"Datos del trabajador N."<<i<<endl;   
		cout<<"Cedula--------------> "<<y->cedula<<endl;
		y=y->sig;
		cout<<"Nombre--------------> "<<y->nombre<<endl;
		y=y->sig;
	    cout<<"Fecha de nacimiento-> ";
	    cout<<y->fechaNac[1]<<"/"<<y->fechaNac[2]<<"/"<<y->fechaNac[3]<<endl;
	    y=y->sig;
		cout<<"Departamento--------> "<<y->departamento<<endl;
		y=y->sig;
		i++;
		cout<<"\n\n";
	}
}
nodoa* nacimiento(nodoa*p,int nac[])
{
	p=(struct nodoa*) malloc(sizeof (nodoa));
	for(int i=0;i<3;i++)
	{
		p->fechaNac[i+1]=nac[i+1];
	}
	l=ptra;
	while(l->sig!=NULL)
	{
	l=l->sig;
	}
	l->sig=p;
	p->sig=NULL;
	return ptra;
}
nodoa* insertardepart(nodoa*p,char dpta[])
{
	p=(struct nodoa*)malloc (sizeof (nodoa));
	strcpy(p->departamento,dpta);
	l=ptra;
	while(l->sig!=NULL)
	{
		l=l->sig;
	}
	l->sig=p;
	p->sig=NULL;
	return ptra;	
}
void insertarinfo(nodoa*p)
{
	char name[30],dpt[20];
	int fecha[3];
	long num;
	rep=0;
	cout<<"ingrese la cedula: ";
	cin>>num;
	insertarcedula(ptra,num);
	if(rep==0)
	{
		fflush(stdin);
		cout<<"ingrese el nombre: ";
		cin.getline(name,30,'\n');
		insertarnombre(ptra,name);
		cout<<"Ingrese la fecha de nacimento: "<<endl;
		cout<<"Dia: ";
		cin>>fecha[1];
		cout<<"Numero del Mes: ";
		cin>>fecha[2];
		cout<<"Anho: ";
		cin>>fecha[3];
		nacimiento(ptra,fecha);
		fflush(stdin);
		cout<<"ingrese departamento: ";
		cin.getline(dpt,20,'\n');
	    insertardepart(ptra,dpt);								    
	}
}
