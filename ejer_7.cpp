///tp2__7
#include<iostream>
using namespace std;

struct promedios{
	char name[20];
	int calificaciones;
};
int leer_calificaciones();
int leer_cantidad();
void leer_vector(promedios v[50],int n);
void resultado(promedios v[50],int n,float &apr,float &des);
float apr,des;
int main(){
promedios v[50];	
int n = leer_cantidad();	
leer_vector(v,n);
resultado(v,n,apr,des);	
cout <<"El porcentaje de aprobados es: " << "%" << apr <<endl;	
cout <<"El porcentaje de desaprobados es: "<< "%" << des <<endl;		
	
	system ("pause");
	return 0;
}
int leer_cantidad(){
	int c;
	do{
		cout<<"Cantidad de alumnos en materia Algebra: "<< endl;
		cin >> c;
		if(c<=0)cout<<"Se pedia mayor a 0..."<<endl;
		}
	while(c<=0);
	return c;	
}

int leer_calificaciones(){
	float c;
	do{
		cout<<"Calificaciones (De 1 a 10)"<<endl;
		cin>>c;
		if(c<=0 || c>10)cout<<"Se pedia calificacion de 1 a 10..."<< endl;
		}
		while(c<=0 || c>10);
		return c;}
		
void leer_vector(promedios v[50],int n){
	cout <<"Ingrese datos de los alumnos: "<<endl;
	cout <<endl;
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"Nombre:";
		cin>> v[i].name;
		v[i].calificaciones=leer_calificaciones();
		
	}
}
void resultado(promedios v[50],int n,float &apr,float &des){
	float a1 = 0, a2 = 0;
	for (int i=0;i<n;i++){
		if(v[i].calificaciones>=4)a1++;
		else{
			a2++;
		}
	}
	apr = (a1*100)/n;
	des = (a2*100)/n;
}			

