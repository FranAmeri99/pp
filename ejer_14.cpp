///tp2__14
#include<iostream>
using namespace std;

int enteros[10];
int leer_cantidad();
void leer_enteros(int enteros[10],int n,int &neg);
int main(){
int n = leer_cantidad();
int neg,cm;
leer_enteros(enteros,n,neg);
cout <<"La cantidad de numeros negativos son: " << neg <<endl;	
	
	
	system ("pause");
	return 0;
}

int leer_cantidad(){
	cout << "Cantidad de numeros a evaluar: " << endl;
	int n;
	do{
	cin>>n;
	if(n<=0){
		cout << "Se pedia mayor a 0..." << endl;
	}
	}while(n<=0);
	return n;
}
	
void leer_enteros(int enteros[10],int n,int &neg){
	int cm = 0;
	for (int i=0;i<n;i++){
		cout <<"Ingrese valor " << i << endl;
		cin>>enteros[i];
			
}

cout <<"Numero negativo detectado: ";
for(int i=0; i<n; i++){
if(enteros[i]<0)cm++;
//	cout<< enteros[i];	
}
neg= cm*1;
}



	
