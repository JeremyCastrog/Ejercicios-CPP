/* 4- Crear un programa que reciba todos los atributos/características de un vehículo e imprima una ficha técnica divertida con los datos introducidos.
	hint: int, bool, char, float*/
	
	#include<iostream>
	#include<stdlib.h>
	
	using namespace std;
	
	int main(){
		
		int numerodepuertas;
		char matricula[10],marca[30],modelo[20],color[20],tipodecombustible[20];
		
		cout<<"Ingrese la matricula: "; cin>>matricula;
		cout<<"Ingrese la marca: "; cin>>marca;
		cout<<"Ingrese el modelo: "; cin>>modelo;
		cout<<"Ingrese el color: "; cin>>color;
		cout<<"Ingrese el numero de puertas: "; cin>>numerodepuertas;
		cout<<"Ingrese el tipo de combustible: "; cin>>tipodecombustible;
		
		cout<<"\nFicha tecnica";
		cout<<"\nLa matricula es: "<<matricula<<endl;
		cout<<"La marca es: "<<marca<<endl;
		cout<<"El modelo es: "<<modelo<<endl;
		cout<<"El color es: "<<color<<endl;
		cout<<"El numero de puertas es: "<<numerodepuertas<<endl;
		cout<<"El tipo de combustible es: "<<tipodecombustible<<endl;
		
		system("pause");
		return 0;
	}
