//TP2__6
#include<iostream>
#include<string.h>
using namespace std;

struct amigos{
	int sexo,edad,telefono;
	char nombre[20],apellido[20],direccion[20];
	};
int leer_telefono();
int leer_sexo();
int leer_edad();
void leer_vector(amigos v[50],int n);
void mostrar_vector(amigos v[50],int n);
int n = 5;
 
 int main(){
amigos v[50];	
leer_vector(v,n);
cout<<"Los datos de tus 5 amigos son: " << endl<<endl;	
mostrar_vector(v,n); 	
 	
 	
 	
 	system("pause");
 	return 0;
 }
 
int leer_edad(){
	float c;
	do{
		cout<<"Edad (mayor a 0 y menor a 100)";
		cin>>c;
		if(c<=0 || c>=100)cout<<"Se pedia edad entre 0 y 100..."<< endl;
		}
		while(c<=0 || c>=100);
		return c;} 
int leer_sexo(){
	int c;
	do{
		cout<<"Sexo: (0.mujer,1.hombre) "<< endl;
		cin >> c;
		if(c>=2)cout<<"Se pedia 0 o 1..."<<endl;
		}
	while(c>=2);
	return c;	
}		
		
int leer_telefono(){
		float c;
		cout<<"Telefono():";
		cin>>c;
		return c;}
		
void leer_vector(amigos v[50],int n){
	cout <<"Ingrese los datos de los amigos:"<<endl;
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"Nombre:";
		cin>> v[i].nombre;
		cout<<"Apellido:";
		cin>>v[i].apellido;
		v[i].edad=leer_edad();
		v[i].sexo=leer_sexo();
		cout<<"Direccion:";
		cin>>v[i].direccion;
		v[i].telefono=leer_telefono();
	}
}
void mostrar_vector(amigos v[50],int n){
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"---------------------------"<< endl;
		cout<<"Nombre: " <<(v[i].nombre)<<endl;
		cout <<"Apellido "<<v[i].apellido<< endl;
		cout <<"Edad: "<<v[i].edad<<endl;
		cout<<"Sexo: "<<v[i].sexo<<endl;
		cout<<"Direccion: "<<v[i].direccion<<endl;
		cout<<"Telefono:"<<v[i].telefono<<endl;
		cout<<"---------------------------"<< endl;
		
}
}
