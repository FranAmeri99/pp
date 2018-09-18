//TP2__8
#include<iostream>
#include<string.h>
using namespace std;

struct videoclub{
	char titulo[50];
	float longitud,precio;
	int clasificacion,fecha;
};
int n = 3;
float leer_longitud();
int leer_clasificacion();
float leer_precio();
int leer_fecha();
void leer_vector(videoclub v[50],int n);

int main(){
videoclub v[50];
leer_vector(v,n);	
	
	
system("pause");
return 0;	
	
}
float leer_longitud(){
	int c;
	do{
		cout<<"Longitud de la pelicula(en minutos):"<< endl;
		cin>>c;
		if(c<=0)cout<<"Se pedia mayor a 0: "<<endl;
	}
	while(c<=0);
	return c;
}
int leer_clasificacion(){
	int c;
	do{
		cout<<"Clasificacion de pelicula(0 Terror-1 Suspenso-2 Drama-3 Accion-4 Comica-5 Romantica):"<< endl;
		cin >>c;
		if(c<0||c>5)cout<<"Se pedia 0,1,2,3,4,5..."<< endl;
		}
		while(c<0||c>5);
		return c;
}
float leer_precio(){
	int c;
	do{
		cout<<"Precio de la pelicula: ";
		cin>>c;
		if(c<=0)cout<<"Se pedia mayor a 0: "<<endl;
	}
	while(c<=0);
	return c;
}
int leer_fecha(){
		int c;
		cout<<"Ingrese fecha(dia**- mes**- anio**): "<<endl;
		cin>> c;
		return c;

}
void leer_vector(videoclub v[50],int n){
	cout <<"Ingrese los datos de las peliculas en stock:"<<endl;
	for(int i=0;i<n;i++){
		cout<<"Titulo de la pelicula: "<<endl;
		cin>>v[i].titulo;
		v[i].longitud=leer_longitud();
		v[i].precio=leer_precio();
		v[i].fecha=leer_fecha();	
		v[i].clasificacion=leer_clasificacion();
}
}
