///tp2__3
#include<iostream>
using namespace std;
 
struct infanteria{
	int curso,sexo;	
 	};

int leer_cantidad();
int leer_curso();
int leer_sexo();
void leer_infanteria(infanteria v[50],int n);
void ceros(int a[4][2],int f,int c);
void conteo(infanteria v[50],int n);

int main(){
infanteria v[50];
int n = leer_cantidad();
leer_infanteria(v,n);
conteo(v,n);


 		
system("pause");
return 0;
 }
 
 int leer_cantidad(){
	int c;
	do{
		cout<<"Cantidad de reclutas: "<< endl;
		cin >> c;
		if(c<=0)cout<<"Se pedia mayor a 0..."<<endl;
		}
	while(c<=0);
	return c;	
}
int leer_curso(){
	int c;
	do{
		cout<<"Tipo de curso(0 Paracaidismo-1 Piloto-2 Soldado-3 Francotirador):";
		cin >>c;
		if(c<0||c>3)cout<<"Se pedia 0,1,2,3..."<< endl;
		}
		while(c<0||c>3);
		return c;
}
int leer_sexo(){
	int c;
	do{
		cout<<"Sexo del recluta: (0.mujer,1.hombre) "<< endl;
		cin >> c;
		if(c>=2)cout<<"Se pedia 0 o 1..."<<endl;
		}
	while(c>=2);
	return c;	
}
void leer_infanteria(infanteria v[50],int n){
	cout <<"Ingrese los datos de los reclutas "<<endl;
	for(int i=0;i<n;i++){
		v[i].curso=leer_curso();
		v[i].sexo=leer_sexo();
		
	}
}
void ceros(int a[4][2],int f,int c){
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			a[i][j]=0;
		}
	}
}
void mostrar_matriz(int a[4][2],int f,int c){
	cout<< endl<<endl<< "Los resultados del conteo son:";
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
		cout<<endl<<"Curso" << i << "\tSexo:"<< j <<"\tCantidad:" <<a[i][j];
		}
	}
}
void conteo(infanteria v[50],int n){
	int a[4][2];
	ceros(a,4,2);
	for(int i=0;i<n;i++){
		int f=v[i].curso;
		int c=v[i].sexo;
		a[f][c]++;
	}
	mostrar_matriz(a,4,2);
}
