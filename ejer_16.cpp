//TP2__16
#include<iostream>
#include<math.h>
using namespace std;

struct curso {
	float nota1;
	char nombre[20];
};
int leer_cantidad();
void leer_vector(curso v[50],int n);
void mostrar_vector(curso v[50],int n);
void promedio(curso v[50],int n);
void minmax(curso v[50],int n);
float acumulador=0;
float promayor=0;
float promenor=11;
float prom=0;

int main(){

curso v[50];	
int n = leer_cantidad();
leer_vector(v,n);
mostrar_vector(v,n);	
cout << "El promedio del curso es: " << prom<<endl;	
minmax(v,n); 
	
	
	
	
	
	
	system("pause");
	return 0;
}

int leer_cantidad(){
	int c;
	do{
		cout<<"Cantidad de alumnos del curso: "<< endl;
		cin >> c;
		if(c<=0)cout<<"Se pedia mayor a 0..."<<endl;
		}
	while(c<=0);
	return c;	
}
float leer_nota1(){
	float c;
	do{
		cout<<"Nota del alumno: "<<endl;
		cin>>c;
		if(c<1 || c>10)cout<<"Se pedia nota entre 1 y 10..."<< endl;
		}
		while(c<1 || c>10);
		return c;}
	
void leer_vector(curso v[50],int n){
	cout <<"Ingrese la nota de los alumnos: "<<endl;
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"Nombre:";
		cin>> v[i].nombre;
		v[i].nota1=leer_nota1();
	
		}
		
		}
void mostrar_vector(curso v[50],int n){
	cout<<"Las notas de los alumnos son: "<<endl;
	for(int i=0;i<n;i++){
		cout<<"Nombre: " <<(v[i].nombre)<<endl;
		cout<<"Nota: "<<(v[i].nota1)<<endl;
		acumulador=v[i].nota1+acumulador;
	}
	prom=(acumulador)/n;
}
void minmax(curso v[50],int n){
	for(int i=0;i<n;i++){
		
	if(v[i].nota1>promayor){
		promayor=v[i].nota1;}
		else{
			promayor=promayor;
		}
	if(v[i].nota1<promenor){
		promenor=v[i].nota1;}
		else{
			promenor=promenor;
		}	
	}
	cout<<"La nota minima del curso es: "<<promenor<<endl;
	cout <<"La nota maxima del curso es: " <<promayor<<endl;
	}
		
		
