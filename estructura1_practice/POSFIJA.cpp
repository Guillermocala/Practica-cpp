/*
  1: PAR�NTESIS Y CORCHETES
  2: MAY�SCULAS
  3: OPERANDOS REPETIDOS
  4: EVALUACI�N

*/
#include<iostream>
#include<string.h>
#include<math.h>
#include<conio.h>
using namespace std;
typedef char Tdato;
typedef double Tdato2;
typedef struct P{
	Tdato *v;
	int cima;
	int tam;

	void Crear_Pila(int n){
		tam = n;
		cima = -1;
		v = new Tdato[n];
	}
	bool vacia(){
		return cima==-1;
	}
	bool llena(){
		return cima==tam-1;
	}
	void insertar(Tdato d){
		if(!llena())
			v[++cima]= d;
		else
			cout<<"Overflow";
	}
	Tdato Cima_Pila(){
		if(!vacia())
			return v[cima];
		return NULL;
	}
	Tdato Quitar(){
		if(!vacia()){
			cima--;
			return v[cima+1];
		}
		else
			cout<<"Underflow";
	}
	void mostrar(){
		for(int i=0; i<=cima; i++)
			cout<<"["<<v[i]<<"]"<<endl;
	}
}Pila;

typedef struct P2{
	Tdato2 *v;
	int cima;
	int tam;

	void Crear_Pila(int n){
		tam = n;
		cima = -1;
		v = new Tdato2[n];
	}
	bool vacia(){
		return cima==-1;
	}
	bool llena(){
		return cima==tam-1;
	}
	void insertar(double d){
		if(!llena())
			v[++cima]= d;
		else
			cout<<"Overflow";
	}
	double Cima_Pila(){
		if(!vacia())
			return v[cima];
		return NULL;
	}
	double Quitar(){
		if(!vacia()){
			cima--;
			return v[cima+1];
		}
		else
			cout<<"Underflow";
	}
	void mostrar(){
		for(int i=0; i<=cima; i++)
			cout<<"["<<v[i]<<"]"<<endl;
	}
}Pila2;

int Fuera_Pila(char c){
	switch(c){
		case '^':
			return 4;
		case '*':
			return 2;
		case '/':
			return 2;
		case '+':
			return 1;
		case '-':
			return 1;
		case '(':
			return 5;
	}
}
int Dentro_Pila(char c){
	switch(c){
		case '^':
			return 3;
		case '*':
			return 2;
		case '/':
			return 2;
		case '+':
			return 1;
		case '-':
			return 1;
		case '(':
			return 0;
	}
}

bool Parentesis(char exp[100]){
	int tam = strlen(exp); int p_derecho=0, p_izquierdo=0, cor_derecho=0, cor_izquierdo=0;
	for(int i=0; i<tam; i++){
		if(exp[i]=='(')
			p_derecho++;
		else if(exp[i]==')')
			p_izquierdo++;
		else if(exp[i]=='[')
			cor_izquierdo++;
		else if(exp[i]==']')
			cor_derecho++;
	}
	if((p_derecho==p_izquierdo) and (cor_izquierdo==cor_derecho))
		return true;
	return false;
}

Tdato *Posfija(Tdato exp[100]){
	Tdato posf[100]; int tam,j=0; Pila p;
	tam = strlen(exp); p.Crear_Pila(tam);
	for(int i=0; i<tam; i++){
		if((exp[i]>='a' && exp[i]<='z') || (exp[i]>='A' && exp[i]<='Z')){
			posf[j]=exp[i];
			j++;
		}
		else{
			if(exp[i]=='^' or exp[i]=='*' or exp[i]=='/' or exp[i]=='+' or exp[i]=='-' or exp[i]=='('){
				while(true){
					if(p.vacia()){
						p.insertar(exp[i]);
						break;
					}
					else{
						if(Fuera_Pila(exp[i])>Dentro_Pila(p.Cima_Pila())){
							p.insertar(exp[i]);
							break;
						}
						else{
							posf[j]=p.Quitar();
							j++;
						}
					}
				}
			}
			else{
				if(exp[i]==')'){
					while(p.Cima_Pila()!='('){
						posf[j]=p.Quitar();
						j++;
					}
					p.Quitar();
				}
			}
		}
	}
	while(!p.vacia()){
		posf[j]=p.Quitar();
		j++;
	}
	posf[j]='\0';
	return posf;
}
void Operando(Tdato exp[100], Tdato2 v[54]){
	int pos;
	int tam=strlen(exp);
	for(int i=0; i<tam; i++){
		if((exp[i]>='a' && exp[i]<='z') ||(exp[i]>='A' && exp[i]<='Z')){
			if((int)exp[i]>=65 and (int)exp[i]<=90){
				cout<<"Dato: "<<exp[i]<<"= ";
				pos=exp[i]-'A';
				cin>>v[pos];
			}
			else{
				cout<<"Dato: "<<exp[i]<<"= ";
				pos=exp[i]-'a';
				cin>>v[pos];
			}
		}
	}
	/*for(int i=0; i<54; i++){
		cout<<"["<<v[i]<<"]"<<endl;
	}*/
}

int pos_Operador(char c){
	if((c>='a' && c<='z') ||(c>='A' && c<='Z')){
		if((int)c>=65 and c<=90){
			return (int)c-'A';
		}
		else{
			return (int)c-'a';
		}
	}
}

void Evaluar(Tdato exp[100], Tdato2 v2[54]){
	int tam=strlen(exp); Tdato2 a,b, resultado;
	Pila2 p; p.Crear_Pila(tam);
	for(int i=0; i<tam; i++){
		if((exp[i]>='a' && exp[i]<='z') ||(exp[i]>='A' && exp[i]<='Z')){
			p.insertar(v2[pos_Operador(exp[i])]);
		}
		else{
			b = p.Quitar();
			a = p.Quitar();
			switch(exp[i]){
				case '+':{
					resultado = a+b;
					break;
				}
				case '-':{
					resultado = a-b;
					break;
				}
				case '*':{
					resultado = a*b;
					break;
				}
				case '/':{
					resultado = a/b;
					break;
				}
				case '^':{
					resultado = pow(a,b);
					break;
				}
			}
			p.insertar(resultado);
		}
	}
	cout<<"El resultado es: "<<p.Cima_Pila();
}

main(){
	char exp[100], pos[100]; bool par=false; double v[54];
	cout<<"Ingrese la Ecuacion:\n";
	cin>>exp;
	par=Parentesis(exp);
	if(par==true){
		strcpy(pos,Posfija(exp));
		cout<<pos<<"\n\n";
		Operando(exp,v);
		Evaluar(pos,v);
	}
	else{
		cout<<"\nSyntax ERROR";
	}
	getch();
}
