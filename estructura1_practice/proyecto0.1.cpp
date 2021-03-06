#include<iostream>
#include<conio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct nodoa{
	long int cedula;
	char nombre[30];
	int fechaNac[3];
	int departamento;
	nodoa *sig;
};

struct nodob{
	long int CC;
	int sueldo;
	int concepto;
	float valorCpt;
	nodob *next;
};

nodoa* ptra=NULL, *l,*k,*num,*y;
nodob* ptrb=NULL, *m;

int rep=0;
float acumulado=0;


nodoa* insertarcedula(nodoa *p,long int numero);
nodoa* insertarnombre(nodoa *p,char name[]);
nodoa* nacimiento(nodoa*p, int nac[]);
nodoa* insertardepart(nodoa*p, int dpta);

nodob *CopiarCed(nodob *q, long int c);
nodob* InsertarCpt(nodob *q, long int c);
nodob *ValorCpt(nodob*q, long int c);

nodob *Devengacion();

void  Mostrar (nodob *ptrb);
void *AcumularNominas(long int c);
void VerInfoFinan(long int c);
void AcumuladoxDpt(int dp);

void insertarinfo(nodoa*p);
void mostrarinfo(nodoa *p);
long int EsUnNumero(char numero[12]);

int menu(void);

int main(int argc,char*argv[])
{
	system("CLS");
	int sw=1;
	int n,j,i;
	long int cd;
	long int opcion,num;
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
			case 3:
				int dpto;
				cout<<"Elija un departamento"<<endl;
				cout<<"1-> Direccion general.\n2-> Auxiliar administrativo \n3-> Recursos humanos"<<endl;
				cout<<"4-> Finanzas y contabilidad \n5-> Publicidad y mercadotecnia \n 6-> Informatica"<<endl;
				cout<<"Elija una opciion: ";
				cin>>dpto;
				while(dpto<1||dpto>6){
					cout<<"Error. Va de nuevo: ";
					cin>>dpto;
				}
				switch(dpto){
					case 1:
						dpto=3000000;
						break;
					case 2:
						dpto=1500000;
						break;
					case 3:
						dpto=1700000;
						break;
					case 4:
						dpto=1800000;
						break;
					case 5:
						dpto=1200000;
						break;
					case 6:
						dpto=1900000;
						break;
				}
				AcumuladoxDpt(dpto);
				system("pause");
				break;
			case 4:
				system("cls");
				cout<<"Ingrese la cedula: ";
				cin>>cd;
				ptrb=InsertarCpt(ptrb, cd);
				ptrb=ValorCpt(ptrb, cd);
				break;
	    case 5:
	    	cout<<"Ingrese una cedula para acumular: ";
	    	cin>>cd;
	    	AcumularNominas(cd);
	    	cout<<"Acumulado: "<<acumulado<<endl;
	    	getch();
				break;
	    case 6:
	    	cout<<"Ingrese la cedula: ";
	    	cin>>cd;
	    	VerInfoFinan(cd);
				break;
			case 0:
				system("CLS");
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
	cout<<"\t\t\t? 3-> Revision por dpto.         ?\n";
	cout<<"\t\t\t?                                ?\n";
	cout<<"\t\t\t? 4-> Ingresar concepto.         ?\n";
	cout<<"\t\t\t?                                ?\n";
	cout<<"\t\t\t? 5-> Acumular nominas.          ?\n";
	cout<<"\t\t\t?                                ?\n";
	cout<<"\t\t\t? 6-> Ver inf financiera         ?\n";
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
   		}
		else{
    		cout<<"\n se debe ingresar un entero entre 1-9\n";
		}
    }while(sw);

	opcion=opcion-48;
	return opcion;
}

void insertarinfo(nodoa*p)
{
	int d;
	char name[30];
	int fecha[3], dpt;
	long int num;
	char c[12];
	rep=0;
	cout<<"ingrese la cedula: ";
	fflush(stdin);
	cin.getline(c, 12, '\n');
	num=EsUnNumero(c);
	if(num>0){
		ptra=insertarcedula(ptra,num);
	}
	if(rep==1)
	{
		fflush(stdin);
		cout<<"ingrese el nombre: ";
		cin.getline(name,30,'\n');
		ptra=insertarnombre(ptra,name);
		cout<<"Ingrese la fecha de nacimento: "<<endl;
		cout<<"Dia: ";
		cin>>fecha[1];
		while(fecha[1]<0||fecha[1]>31){
			cin>>fecha[1];
		}
		cout<<"Numero del Mes: ";
		cin>>fecha[2];
		while(fecha[2]<0||fecha[2]>12){
			cin>>fecha[2];
		}
		cout<<"Anho: ";
		cin>>fecha[3];
		while(fecha[3]<1983||fecha[3]>2002){
			cin>>fecha[3];
		}
		ptra=nacimiento(ptra,fecha);
		cout<<"Departamento."<<endl;
		cout<<"1-> Direccion general.\n2-> Auxiliar administrativo \n3-> Recursos humanos"<<endl;
		cout<<"4-> Finanzas y contabilidad \n5-> Publicidad y mercadotecnia \n 6-> Informatica"<<endl;
		cout<<"Elija una opciion: ";
		cin>>d;
		while(d<1||d>6){
			cout<<"Error en el ingreso. Intentelo de nuevo: ";
			cin>>d;
		}
		switch(d){
			case 1:
				d=3000000;
				break;
			case 2:
				d=1500000;
				break;
			case 3:
				d=1700000;
				break;
			case 4:
				d=1800000;
				break;
			case 5:
				d=1200000;
				break;
			case 6:
				d=1900000;
				break;
		}
	    ptra=insertardepart(ptra,d);
		ptrb=CopiarCed(ptrb, num);
	}
}

nodoa* insertarcedula(nodoa *p,long int numero)
{
	p=(struct nodoa*) malloc(sizeof (nodoa));
	p->cedula=numero;
	if(ptra==NULL)
	{
		ptra=p;
		ptra->sig=NULL;
		rep=1;
	}
	else
	{
		l=ptra;
		while(l->sig!=NULL or l->cedula==p->cedula)
		{
			if(l->cedula==p->cedula)
			{
				cout<<"Este numero de cedula ya fue ingresado"<<endl;
				getch();
				return ptra;
			}
			else
			{
				rep=1;
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
		cout<<"Departamento--------> ";
		switch(y->departamento){
			case 4000000:
				cout<<" Dir. General."<<endl;
				break;
			case 3000000:
				cout<<" Aux. Administrativo"<<endl;
				break;
			case  2500000:
				break;
			case 1500000:
				cout<<" Aux. Administrativo"<<endl;
				break;
			case 1700000:
				cout<<" Admin. y recursos hum."<<endl;
				break;
			case 1800000:
				cout<<" Finanzas y contabilidad."<<endl;
				break;
			case 1200000:
				cout<<" Publicidad y mercadotecnia."<<endl;
				break;
			case 1900000:
				cout<<" Informatica."<<endl;
				break;
			default:
				cout<<" Desconocido";
				break;
		}
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

nodoa* insertardepart(nodoa*p,int d)
{
	p=(struct nodoa*)malloc (sizeof (nodoa));
	p->departamento=d;
	l=ptra;
	while(l->sig!=NULL)
	{
		l=l->sig;
	}
	l->sig=p;
	p->sig=NULL;
	return ptra;
}

long int EsUnNumero(char numero[12]){
	char number[12];
	strcpy(number, numero);
	int ent=1;
	long int r;
	while(strlen(number)==0){
		cout<<"El esta vacio. Intentelo de nuevo: ";
		cin.getline(number, 12, '\n');
	}
	for(int i=0;i<strlen(number);i++){
		if(!(isdigit(number[i]))){
			ent=0;
			break;
		}
	}
	if(ent==0){
		cout<<"No es un numero entero";
		getch();
		r=-1;
	}
	else{
		r=atoi(number);
	}
	return r;
}

nodob *CopiarCed(nodob *q, long int c){
	q=(struct nodob *)malloc(sizeof (nodob));
	q->CC=c;
	if(ptrb==NULL){
		ptrb=q;
		q->next=NULL;
	}
	else{
		m=ptrb;
		while(m->next!=NULL){
			m=m->next;
		}
		m->next=q;
		q->next=NULL;
	}
	return ptrb;
}

void Mostrar (nodob *ptrb){
    system ("CLS");
    m=ptrb;
    while(m!=NULL){
      	cout<<"Cedula ----> "<<m->CC<<endl;
    	m=m->next;
    	cout<<"Concepto---> ";
    	if(m->concepto=1){
    		cout<<"Devengacion.";
		}
		else{
			cout<<" Deduccion.";
		}
		m=m->next;
		cout<<"\nValor cpt----> "<<m->valorCpt<<endl;
		m=m->next;
	}
	cout<<"\n";
	cout<<"\nNULL";
	getch();
}

nodob* InsertarCpt(nodob *q, long int c){
	nodob *aux;
	aux=ptrb;
	int xcpt;
	while(aux!=NULL && aux->CC!=c){
		aux=aux->next;
	}
	if(aux==NULL){
		cout<<"Esta cedula no esta inscrita"<<endl
		;
		return ptrb
	}
	else{
		nodoa *aux2;
		aux2 = ptra;
		while(aux2!=NULL && aux2->cedula!=c)
		{
			aux2=aux2->sig;
		}
		q=(struct nodob*)malloc(sizeof (nodob));
		cout << "El concepto se le aplicara a: " << aux2->sig->nombre << endl ;
		cout<<"Ingrese el tipo de concepto.\n1-> Devengacion\n2-> Deduccion.\n3->Salir"<<endl;
		cout<<"Ingrese la opcion: ";
		cin>>xcpt;
		while(xcpt<1||xcpt>3){
			cin>>xcpt;
		}
		switch (xcpt)
		{
			case 1:
				cout << "1-> Vacaciones\n2-> Vales de despensa\n3-> Bono por productividad\n4-> Aguinaldo" << endl;
				break;
			case 2:
				cout << "1-> Seguro medico\n2-> Fondo de ahorro\n3-> Impuesto sobre renta(ISR)\n4-> Prestaciones" << endl;
				break;
			case 3:

				break;
		}
		q->concepto=xcpt;
		q->next=aux->next;
		aux->next=q;
	}
	return ptrb;
}
nodob *ValorCpt(nodob*q, long int c)
{
	float v;
	nodob *aux, *a;
	a=ptrb;
	q=(struct nodob*)malloc(sizeof(nodob));

	while(a!=NULL && a->CC!=c){
		a=a->next;
	}
	a=a->next;
	cout<<"Ingrese el valor del concepto asociado: ";
	cin>>v;
	q->valorCpt=v;
	q->next=NULL;
	aux=a;
	q->next=aux->next;
	aux->next=q;
	return ptrb;
}
void *AcumularNominas(long int c)
{
	long int aux;
	nodob *b;
	nodoa *a, *aux1;

	a=ptra;
	b=ptrb;

	while(b!=NULL && b->CC!=c){
		b=b->next;
	}
	if(b==NULL){
		system("cls");
		cout<<"Esta cedula no esta inscrita"<<endl;
		getch();
	}
	else{
		b=b->next;
		aux=b->concepto;
		b=b->next;

		while(a!=NULL && a->cedula!=c){
			a=a->sig;
		}
		a=a->sig;
		a=a->sig;
		aux1=a->sig;

		if(aux==1){
			acumulado+=(b->valorCpt+aux1->departamento);
		}
		else{
			acumulado+=(aux1->departamento-b->valorCpt);
		}
	}
}
void VerInfoFinan(long int c){
	float total;
	nodoa *aux;
	nodob *aux1;
	aux=ptra;
	aux1=ptrb;
	while(aux!=NULL && aux->cedula!=c){
		aux=aux->sig;
	}
	if(aux==NULL){
		system("cls");
		cout<<"Cedula no suscrita.";
		getch();
	}
	else{
		system("cls");
		aux=aux->sig;
		aux=aux->sig;
		aux=aux->sig;
		while(aux1!=NULL && aux1->CC!=c){
			aux1=aux1->next;
		}
		aux1=aux1->next;
		cout<<"\nTrabajador: "<<c<<endl;
		cout<<"Ganado: "<<aux->departamento<<endl;
		cout<<"Concepto: ";
		if(aux1->concepto==1){
			cout<<"Devengacion"<<endl;
			aux1=aux1->next;
			cout<<"Valor cpt: "<<aux1->valorCpt<<endl;

			cout<<"Total a pagar: "<<aux->departamento<<" + "<<aux1->valorCpt<<endl;

			getch();
		}
		else{
			cout<<"Deduccion"<<endl;
			aux1=aux1->next;
			cout<<"Valor cpt: "<<aux1->valorCpt<<endl;
			cout<<"Total a pagar: "<<aux->departamento<<" - "<<aux1->valorCpt<<endl;
		}
	}
}

void AcumuladoxDpt(int dp)
{
	int acum=0;
	nodob *q;
	q=ptrb;
	nodoa *aux, *aux1;
	aux=ptra;
	while(aux!=NULL){
		aux1=aux;
		if(aux->departamento==dp){
			cout<<"Cedula ----> "<<aux1->cedula<<endl;
			while(q!=NULL && q->CC!=aux1->cedula){
				q=q->next;
			}
			cout<<"Deduccion tipo ";
			if(q->concepto==1){
				cout<<"Devengado: ";
				q=q->next;
				cout<<q->valorCpt<<endl;
			}
			else{
				cout<<"Deducico: ";
				q=q->next;
				cout<<q->valorCpt<<endl;
			}
		}
		acum+=aux1->departamento;
		aux=aux->sig;
	}
	cout<<"Total por departamento: "<<acum<<endl;
}
