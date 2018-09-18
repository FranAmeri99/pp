//tp_18
#include <iostream>
using namespace std;

float A[2][3];
float C;
void llenar_matriz(float matriz[2][3]);
void suma(float matriz[2][3]);
void mostrar_suma(float matriz[2][3]);
int main(){
	float matriz[2][3];
	llenar_matriz(matriz);
	suma(matriz);
	mostrar_suma(matriz);
	system("pause");
	return 0;
}

void llenar_matriz(float matriz[2][3]){
	cout <<"Rellene la matriz" << endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			cout << "Fila " << i << " Columna " << j << ": "<< endl;
			cin >> A[i][j];
		}
	}
}

void suma(float matriz[2][3]){
	C=0;
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			C+=A[i][j];
		}
	}
}

void mostrar_suma(float matriz[2][3]){
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
		}
	}cout <<"La suma de todos los elementos de la matriz es igual a: " << C << endl;
}
	
	
	
