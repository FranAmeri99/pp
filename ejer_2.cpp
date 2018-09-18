#include <iostream>
#include <sstream>

using namespace std;
int m,n,x,y;
float A[20][20];
float B[20][20];
float C[20][20];
int filas_1();
int columnas_1();
int filas_2();
int columnas_2();
void llenar_matriz_1(float matriz[20][20],int m,int n);
void llenar_matriz_2(float matriz_1[20][20],int x, int y);
void multiplicar(float matriz[20][20],int m,int y);
void resultado(float matriz[20][20],int m,int y);

int main(){
	float matriz[20][20];
	int m = filas_1();
	int n = columnas_1();
	int x = filas_2();
	int y = columnas_2();
	llenar_matriz_1(matriz,m,n);
	llenar_matriz_2(matriz,x,y);
	multiplicar(matriz,m,y);
	resultado(matriz,m,y);
	system("pause");
	return 0;
}


int filas_1(){
	int m=0;
	string numero;
	cout <<"Ingrese las filas de la primer matriz(Numeros naturales)." << endl;
	do{
		do{
			cin>>numero;
			stringstream(numero) >> m;
			if(m==0)
				cout<<"Por favor, ingrese numeros naturales, no se admiten signos ni caracteres..."<<endl;
				if(m<0){
					cout << "Se pedian numeros naturales..." << endl;
				}
			}while(m<0);
	}while(m==0);
	return m;
}

int columnas_1(){
	int n=0;
	string numero;
	cout <<"Ingrese las columnas de la primer matriz(Numeros naturales)." << endl;
	do{
		do{
			cin>>numero;
			stringstream(numero) >> n;
			if(n==0)
				cout<<"Por favor, ingrese numeros naturales, no se admiten signos ni caracteres..."<<endl;
				if(n<0){
					cout << "Se pedian numeros naturales..." << endl;
				}
			}while(n<0);
	}while(n==0);
	return n;
}

int filas_2(){
	int x=0;
	string numero;
	cout <<"Ingrese las filas de la segunda matriz(Numeros naturales)." << endl;
	do{
		do{
			cin>>numero;
			stringstream(numero) >> x;
			if(x==0)
				cout<<"Por favor, ingrese numeros naturales, no se admiten signos ni caracteres..."<<endl;
				if(x<0){
					cout << "Se pedian numeros naturales..." << endl;
				}
			}while(x<0);
	}while(x==0);
	return x;
}

int columnas_2(){
	int y=0;
	string numero;
	cout <<"Ingrese las columnas de la segunda matriz(Numeros naturales)." << endl;
	do{
		do{
			cin>>numero;
			stringstream(numero) >> y;
			if(y==0)
				cout<<"Por favor, ingrese numeros naturales, no se admiten signos ni caracteres..."<<endl;
				if(y<0){
					cout << "Se pedian numeros naturales..." << endl;
				}
			}while(y<0);
	}while(y==0);
	return y;
}

void llenar_matriz_1(float matriz[20][20],int m, int n){
	cout <<"Rellene la primer matriz" << endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout << "Fila " << i << " Columna " << j << ": "<< endl;
			cin >> A[i][j];
		}
	}
}

void llenar_matriz_2(float matriz[20][20],int x, int y){
	cout <<"Rellene la segunda matriz" << endl;
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			cout << "Fila " << i << " Columna " << j << ": "<< endl;
			cin >> B[i][j];
		}
	}
}

void multiplicar(float matriz[20][20],int m,int y){
		for(int i=0; i<m; i++){
             for(int j=0; j<y; j++){
					C[i][j]=0;
             	for(int k=0; k<y; k++){
             		C[i][j]+=A[i][k]*B[k][j];
				 }
             }
         }
	}
	
void resultado(float matriz[20][20],int m,int y){
	cout << "La matriz es :" << endl;
for(int i=0; i<m; i++){
             for(int j=0; j<y; j++){
             	
					cout << C[i][j] << "  ";
		}
		cout<<"\n";
	}
}
