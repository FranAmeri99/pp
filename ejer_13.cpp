//TP2__13
#include<iostream>
#include<string.h>
using namespace std;

struct biblioteca{
	int referencia,clase,edicion,publicacion;
	string titulo,nombre,editorial,revista;
};
void bienvenida();
int leer_cantidad();		
int leer_referencia();
int leer_clase();
int leer_edicion(biblioteca v[50],int c);
int leer_publicacion(biblioteca v[50],int c);
void leer_vector(biblioteca v[50],int n);
void mostrar_vector(biblioteca v[50],int n);
char name[20];
int main(){
	
biblioteca v[50];
bienvenida();	
int n= leer_cantidad();		
leer_vector(v,n);	
mostrar_vector(v,n);	
	
	
	system("pause");
	return 0;
}
void bienvenida(){
	
	cout<<"Bienvenido al programa de registro de libros y revistas cientificas"<<endl;
	cout<<"Podria decirme su nombre por favor..."<<endl;
	cin >>name;
	cout<<"Bueno, "<<name<< " ,ahora ingrese los datos de su biblioteca... "<<endl;
	cout<<endl;
	}
int leer_cantidad(){
	int c;
	do{
		cout<<"Cantidad de libros y revistas en biblioteca: "<< endl;
		cin >> c;
		if(c<=0)cout<<"Se pedia mayor a 0..."<<endl;
		}
	while(c<=0);
	return c;	
}

int leer_referencia(){
	float c;
	do{
		cout<<"Numero de referencia de la revista o libro (mayor a 0 y menor a 5000):"<<endl;;
		cin>>c;
		if(c<=0 || c>5000)cout<<"se pedia numero entre 0 y 5000..."<< endl;
		}
		while(c<=0 || c>=5000);
		return c;}
int leer_clase(){
	int c;
	do{
		cout<<"Clase: (0.Libro,1.Revista) "<< endl;
		cin >> c;
		if(c>=2)cout<<"Se pedia 0 o 1..."<<endl;
		}
	while(c>=2);
	return c;	
}
int leer_edicion(){
		int c;
		cout <<"Ingrese numero de edicion del libro: "<< endl;
		cin>>c;
	
return c;	
}
int leer_publicacion(){
	int c;
	do{
		cout<<"Anio de publicacion: (1900 a 2018...)"<< endl;
		cin >> c;
		if(c>2018 || c<1900)cout<<"Se pedia de 1900 a 2018..."<<endl;
		}
	while (c>2018 || c<1900);
	return c;	
}
		

void leer_vector(biblioteca v[50],int n){
	cout <<"Ingrese los datos de los libros y revistas de su biblioteca:"<<endl;
	for(int i=0;i<n;i++){
		v[i].referencia=leer_referencia();
		
		cout<<"Titulo: "<<endl;
		fflush(stdin);
		getline(cin,v[i].titulo);
		
		cout<<"Nombre de autor: "<<endl;
		fflush(stdin);
		getline(cin,v[i].nombre);
		
		cout<<"Editorial: "<<endl;
		fflush(stdin);
		getline(cin,v[i].editorial);
		
		v[i].clase=leer_clase();
		if (v[i].clase==0){
			leer_edicion();
			leer_publicacion();
			cout<<"------------------------"<<endl;
			}
		if (v[i].clase==1){
		cout <<"Nombre de la revista:"<<endl;
		fflush(stdin);
		getline(cin,v[i].revista);
		cout<<"---------------------------"<<endl;			
	}
}
}
void mostrar_vector(biblioteca v[50],int n){
	cout<<endl<<endl;
	cout <<"Los datos de los libros y revistas de su biblioteca son: " << endl;
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"----------------------------------"<<endl;
		cout<<"Numero de referencia: "<<(v[i].referencia)<<endl;
		cout<<"Titulo: "<<(v[i].titulo)<<endl;
		cout<<"Nombre de autor: "<<(v[i].nombre)<<endl;
		cout<<"Editorial: "<<(v[i].editorial)<<endl;
		cout<<"Clase: "<<(v[i].clase)<<endl;
		if (v[i].clase==0){
		cout<<"Numero de edicion: "<<(v[i].edicion)<<endl;
		cout<<"Anio de publicacion: "<<(v[i].publicacion)<<endl;
			}
		if (v[i].clase==1){
		cout <<"Nombre de la revista:"<<endl;
		cout<<v[i].revista<<endl;	
		
	}
}
}
