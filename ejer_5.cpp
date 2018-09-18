//TP2__5
#include<iostream>
#include<string.h>
using namespace std;

struct programacion{
	int cedula,edad,telefono;
	char nombre[20],apellido[20],direccion[20],profesion[20],lugar[20];
	
};
int leer_cantidad();
void leer_vector(programacion v[50],int n);
	
void mostrar_vector(programacion v[50],int n);

int main(){
programacion v[50];	
int n= leer_cantidad();	
leer_vector(v,n);
cout<<"-----------------------------"<< endl;
cout<<"Los datos de los alumnos son:"<< endl;
cout<<"-----------------------------"<<endl;
mostrar_vector(v,n);	
	
	
	system("pause");
	return 0;
}

int leer_cantidad(){
	int c;
	do{
		cout<<"Cantidad de alumnos de Programacion lenguaje C: "<< endl;
		cin >> c;
		if(c<=0)cout<<"Se pedia mayor a 0..."<<endl;
		}
	while(c<=0);
	return c;	
}
int leer_cedula(){
	float c;
	do{
		cout<<"Cedula del alumno(mayor a 10000 y menor a 50000):";
		cin>>c;
		if(c<10000 || c>50000)cout<<"se pedia cedula entre 10000 y 50000..."<< endl;
		}
		while(c<=10000 || c>=50000);
		return c;}
int leer_edad(){
	float c;
	do{
		cout<<"Edad (mayor a 0 y menor a 100)"<<endl;
		cin>>c;
		if(c<=0 || c>=100)cout<<"Se pedia edad entre 0 y 100..."<< endl;
		}
		while(c<=0 || c>=100);
		return c;}
int leer_telefono(){
	float c;
	cout<<"Telefono():";
	cin>>c;
	return c;}
void leer_vector(programacion v[50],int n){
	cout <<"Ingrese los datos de los alumnos:"<<endl;
	for(int i=0;i<n;i++){
		fflush(stdin);
		v[i].cedula=leer_cedula();
		cout<<"Nombre:";
		cin>> v[i].nombre;
		cout<<"Apellido:";
		cin>>v[i].apellido;
		v[i].edad=leer_edad();
		cout<<"Profesion:";
		cin>>v[i].profesion;
		cout<<"Lugar de nacimiento:";
		cin>>v[i].lugar;
		cout<<"Direccion:";
		cin>>v[i].direccion;
		cout<<"Telefono:";
		v[i].telefono=leer_telefono();
	}
}
void mostrar_vector(programacion v[50],int n){
	for(int i=0;i<n;i++){
		fflush(stdin);
		
		cout<<"Cedula:"<<(v[i].cedula)<<endl;
		cout<<"Nombre: " <<(v[i].nombre)<<endl;
		cout <<"Apellido "<<v[i].apellido<< endl;
		cout <<"Edad: "<<v[i].edad<<endl;
		cout <<"Profesion : "<<v[i].profesion<<endl;
		cout <<"Lugar de nacimiento: "<<v[i].lugar<<endl;
		cout<<"Direccion: "<<v[i].direccion<<endl;
		cout<<"Telefono:"<<v[i].telefono<<endl;
		cout<<"------------------------"<< endl;
}
}
