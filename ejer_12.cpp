
#include <iostream>
#include <sstream>
#include <string>

using namespace std;
char a[1];
char b[1];
char c[1];
char d[1];
char e[1];

int n=20;
char name[20];
char materia[6][25];
struct colegio{
	char alumno[25];
	char calificacion[6];
	float promedio_general;
	
};
void bienvenida();
void leer_vector(colegio v[50],char materia[6][25]);
void promedio(colegio v[50],float promedio_general);
	void mostrar_todo(colegio v[50], char materia[6][25]);
int main(){
colegio v[50];
bienvenida();
leer_vector(v,materia);
mostrar_todo(v,materia);
system ("pause");
	return 0;
}
void bienvenida(){
	cout<<" >>>> Bienvenido al sistema para cargar las notas de sus estudiantes. <<<<" << endl;
	cout<<"Podria decirme su nombre por favor: " << endl;
gets(name);
	cout <<"Bueno, " << name << " ,ahora complete la informacion de cada estudiante: " << endl;
}

void leer_vector(colegio v[50], char materia[6][25]){
	for(int i=0; i<6 ; i++){
			fflush(stdin);
			cout << "Ingrese el nombre de la asignatura nº " << (i+1) << ":"<< endl;
			cin>>materia[i];
		}
	cout <<"Ingrese los datos de los estudiantes. "<<endl;
	cout<< "Calificacion (A=10 --- B=8 --- C=6 --- D=4 --- E=2): \n"; 
	for(int i=0;i<n;i++){
			fflush(stdin);
			cout<<"Nombre del estudiante:" << (i+1) << endl;
			gets(v[i].alumno);
			 	int cont=0;
				v[i].promedio_general = 0;
			for (int j = 0; j<6; j++){
	
				cout << "Ingrese la nota correspondiente a la asignatura "<<materia[j]<< " \n ";
				cout<< "Calificacion (A=10 --- B=8 --- C=6 --- D=4 --- E=2): \n "; 	
				cin>>v[i].calificacion[j];
				switch(v[i].calificacion[j]){
					case 'a' : 
					case 'A' :
					cont = cont + 10;
 					break;
					
					case 'b' : 
					case 'B' :
					cont = cont + 8;
 					break;
 					
 					case 'c' : 
					case 'C' :
					cont = cont + 6;
 					break;
 					
 					case 'd' : 
					case 'D' :
					cont = cont + 4;
 					break;
 					
 					case 'e' : 
					case 'E' :
					cont = cont + 2;
 					break;
					
				}
				
				 }
				 v[i].promedio_general=cont/6;
				cout<<"promedio: "<<v[i].promedio_general<<"\n";
				}	
			}

	void mostrar_todo(colegio v[50],char materia[6][25]){
		cout << "Promedio de los estudiantes \n";
		cout << "Nombre ";
		for(int i=0; i<6; i++){
			for(int j=0; j<10; j++){
			cout << materia[i][j];
		}
		
		}
		cout <<"Promedio General \n";
		
		for(int i=0; i<n; i++){
			cout << v[i].alumno<<"      | ";
			for(int j=0; j<6; j++){
			cout << v[i].calificacion[j]<< "      | ";
		}
		cout<< v[i].promedio_general;
		cout<<"\n";
		
		
	}

}
