//TP2__16
#include<iostream>
#include<math.h>
using namespace std;

struct curso {
	float i1,i2,t1,t2,examen;
	char nombre[20];
};
int leer_cantidad();
float leer_examen();
void leer_vector(curso v[50],int n);
void mostrar_vector(curso v[50],int n);
float np=0;
float nf=0;
float nmasf=0;
float promcurso=0;
int main(){

curso v[50];	
int n = leer_cantidad();	
leer_vector(v,n);
mostrar_vector(v,n);	
	
	
	
	
	system("pause");
	return 0;
}

int leer_cantidad(){
	int c;
	do{
		cout<<"Cantidad de alumnos en el curso: "<< endl;
		cin >> c;
		if(c<=0)cout<<"Se pedia mayor a 0..."<<endl;
		}
	while(c<=0);
	return c;	
}
float leer_examen(){
	float c;
	do{
		cin>>c;
		if(c<1 || c>10)cout<<"Se pedia nota entre 1 y 10..."<< endl;
		}
		while(c<1 || c>10);
		return c;}
void leer_vector(curso v[50],int n){
	cout <<"Ingrese las notas de los alumnos: "<<endl;
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"Nombre:";
		cin>> v[i].nombre;
		cout<<"Parcial I1: "<<endl;
		v[i].i1=leer_examen();
		cout<<"Parcial I2: "<<endl;
		v[i].i2=leer_examen();
		cout<<"Parcial T1: "<<endl;
		v[i].t1=leer_examen();
		cout<<"Parcial T2: "<<endl;
		v[i].t2=leer_examen();
		cout<<"Examen: "<<endl;
		v[i].examen=leer_examen();
		}}	
void mostrar_vector(curso v[50],int n){
	cout<<"Las notas de los alumnos son: "<<endl;
	for(int i=0;i<n;i++){
		cout<<"Nombre: " <<(v[i].nombre)<<endl;
		cout<<"Nota I1: "<<(v[i].i1)<<endl;
		cout <<"Nota I2: "<<v[i].i2<< endl;
		cout <<"Nota T2: "<<v[i].t1<< endl;
		cout <<"Nota T2: "<<v[i].t2<< endl;
		cout <<"Nota Examen: "<<v[i].examen<< endl;
		np=((v[i].i1+v[i].i2+v[i].t1+v[i].t2)/4);
		nf=(0.7*np)+(0.3*v[i].examen);
		nmasf=nf+nmasf;
		cout<<"Nota final: "<<nf<<endl;
		cout<<"-----------------------"<<endl;
		}
		promcurso=(nmasf/n);
		cout<<"El promedio final del curso es: "<<promcurso<<endl;
		
}
			
