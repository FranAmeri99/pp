///tp2__11
#include<iostream>
using namespace std;

struct revistas{
	char name[20];
	int cedula,mes,anio;
};
int leer_anio();
int leer_mes();
int leer_cedula();
void leer_vector(revistas v[50],int n);
void mostrar_vector(revistas v[50],int n);
int n;
int main(){
revistas v[20];
cout << " Ingrese cantidad de suscriptores: " << endl;
cin >> n;	
leer_vector(v,n);	
cout<<"---------------------------------------------------------"<< endl;
cout<<	   "Los datos de los suscriptores a la revista son:"<< endl;
cout<<"---------------------------------------------------------"<<endl;		
mostrar_vector(v,n);	
	
	system ("pause");
	return 0;
}
int leer_mes(){
	int c;
	do{
		cout<<"Mes de suscripcion: "<< endl;
		cin >>c;
		if(c<=0||c>12)cout<<"Se pedia numero de Mes..."<< endl;
		}
		while(c<=0||c>12);
		return c;
}
int leer_anio(){
	int c;
	do{
		cout<<"Anio de suscripcion: "<< endl;
		cin >>c;
		if(c<=0 || c>2018)cout<<"Se pedia numero de anio..."<< endl;
		}
		while(c<=0||c>2018);
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
void leer_vector(revistas v[50],int n){
	cout <<"Ingrese los datos de los suscriptores:"<<endl;
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"Nombre:";
		cin>> v[i].name;
		v[i].cedula=leer_cedula();
		v[i].mes=leer_mes();
		v[i].anio=leer_anio();
		
	}
}	
void mostrar_vector(revistas v[50],int n){
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"Nombre: " <<(v[i].name)<<endl;
		cout<<"Cedula:"<<(v[i].cedula)<<endl;
		cout <<"Mes de suscripcion: "<<(v[i].mes)<<endl;
		cout<<"Anio de suscripcion: "<<(v[i].anio)<<endl;
		cout<<endl;
	}
}
