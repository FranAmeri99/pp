///tp2__9
#include<iostream>
using namespace std;

struct estudiantes{
	char name[20];
	int edad,calificaciones,coeficiente;
};
int leer_edad();
int leer_calificaciones();
int leer_coeficiente();
void leer_vector(estudiantes v[50],int n);
void mostrar_vector(estudiantes v[50],int n);
int main(){

int n = 2;
estudiantes v[50];
leer_vector(v,n);
cout <<"Los datos de los 10 alumnos son: "<< endl,
mostrar_vector(v,n);




system ("pause");
return 0;
}

int leer_edad(){
	float c;
	do{
		cout<<"Edad (mayor a 0 y menor a 100)"<< endl;
		cin>>c;
		if(c<=0 || c>=100)cout<<"Se pedia edad entre 0 y 100..."<< endl;
		}
		while(c<=0 || c>=100);
		return c;}
int leer_calificaciones(){
	float c;
	do{
		cout<<"Calificaciones (De 1 a 10)"<<endl;
		cin>>c;
		if(c<=0 || c>10)cout<<"Se pedia calificacion de 1 a 10..."<< endl;
		}
		while(c<=0 || c>10);
		return c;}
int leer_coeficiente(){
	float c;
	do{
		cout<<"Coeficiente intelectual (De 0 a 200)"<< endl;
		cin>>c;
		if(c<0 || c>200)cout<<"Se pedia coeficiente de 0 a 200..."<< endl;
		}
		while(c<0 || c>200);
		return c;}
void leer_vector(estudiantes v[50],int n){
	cout <<"Ingrese datos de los 10 alumnos: "<<endl;
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"Nombre:";
		cin>> v[i].name;
		v[i].edad=leer_edad();
		v[i].calificaciones=leer_calificaciones();
		v[i].coeficiente=leer_coeficiente();
		
	}
}	
void mostrar_vector(estudiantes v[50],int n){
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"Nombre: " <<(v[i].name)<<endl;
		cout<<"Edad: "<<(v[i].edad)<<endl;
		cout <<"Calificaciones: "<<(v[i].calificaciones)<<endl;
		cout<<"Coeficiente Intelectual: "<<(v[i].coeficiente)<<endl;
		cout<<endl;
	}
}		
