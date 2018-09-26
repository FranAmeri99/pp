#include<iostream>
using namespace std;

struct negocio {
	char producto[25];
	float costo,venta;
	int codigo,cantidad;
};


int n=3;
char name[20];
void bienvenida();
float leer_costo();
float leer_venta();
int leer_codigo();
int leer_cantidad();
void leer_vector(negocio v[50],int n);
void leer_ganancia(negocio v[50],int n);

int main(){
negocio v[50];	
bienvenida();	
leer_vector(v,n);	
leer_ganancia(v,n);	
	system("pause");
	return 0;
}

void bienvenida(){
	cout<<" >>>> Bienvenido al sistema contable de ganancias de tiendas particulares <<<<" << endl;
	cout<<"Podria decirme su nombre por favor: " << endl;
	cin >> name;
	cout <<"Bueno, " << name << " ,ahora complete la tabla de productos vendidos en su tienda: " << endl;
}
float leer_costo(){
	float c;
	do{
		cout<<"Precio de costo del producto(mayor a 0):";
		cin>>c;
		if(c<=0)cout<<"se pedia mayor a cero..."<< endl;
		}
		while(c<=0);
		return c;}
float leer_venta(){
	float c;
	do{
		cout<<"Precio de venta del producto(mayor a 0):";
		cin>>c;
		if(c<=0)cout<<"se pedia mayor a cero..."<< endl;
		}
		while(c<=0);
		return c;}
int leer_codigo(){
	float c;
	do{
		cout<<"Codigo del producto(mayor a 1000 y menor a 3000):"<<endl;
		cin>>c;
		if(c<=1000 || c>=3000)cout<<"se pedia codigo entre 1000 y 3000..."<< endl;
		}
		while(c<=1000 || c>=3000);
		return c;}
int leer_cantidad(){
	float c;
	do{
		cout<<"Cantidad de productos vendidos: ";
		cin>>c;
		if(c<=0)cout<<"se pedia mayor a cero..."<< endl;
		}
		while(c<=0);
		return c;}	
void leer_vector(negocio v[50],int n){
	cout <<"Ingrese los datos de los productos de la tienda "<<endl;
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"Nombre del producto:" << (i+1) << endl;
		gets(v[i].producto);
		v[i].costo=leer_costo();
		v[i].venta=leer_venta();
		v[i].codigo=leer_codigo();
		v[i].cantidad=leer_cantidad();
	}
}
void leer_ganancia(negocio v[50],int n){
	float total=0;
	for(int i=0;i<n;i++){
	float profit =((v[i].cantidad)*((v[i].venta)-(v[i].costo)));
	total=profit+total;
}
cout << "La ganancia mensual de su tienda es de: " <<" $ "<<  total  << endl;	
			
}
