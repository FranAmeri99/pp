//Ejercicio_15
#include <iostream>
#include <string.h>
#include <sstream>
using namespace std;

string palabra1;
string palabra2;
string palabra3;
int i;
void mayuscula();
void mostrar();

int main(){
	
	
cout <<"Por favor ingrese los caracteres de la primer cadena\n";
getline(cin,palabra1); 
cout <<"Por favor ingrese los caracteres de la segunda cadena\n";
getline(cin,palabra2); 
cout <<"Por favor ingrese los caracteres de la tercer cadena\n";
getline(cin,palabra3); 
mayuscula();
cout << "La cadena es: "<< endl;
cout << palabra2 << " ";
mostrar();

cout <<"Longitud de la tercer cadena: " << palabra3.length()<<"\n";
	system("pause");
	return 0;
}

void mayuscula(){
	for(i=0;i<palabra1.length();i++){
		palabra1[i]=towupper (palabra1[i]);
	}
}

void mostrar(){
		for(i=0;i<palabra1.length();i++){
	cout << palabra1[i];
}cout << endl;
}
