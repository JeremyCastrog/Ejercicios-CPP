/*3- Crear un programa que reciba las notas de un estudiante(naturales, sociales, matemáticas y lenguaje) y saque el promedio.
	hint: n+n+n+n/4
*/


#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){

char estudiante [35];
float naturales=0, sociales=0, matematicas=0, lenguaje=0, promedio=0;


cout<<"Ingrese Nombre del Estudiante:  "; cin>>estudiante;
cout<<"Ingrese la nota de naturales:  "; cin>> naturales;
cout<<"Ingrese la nota de sociales:  "; cin>> sociales;
cout<<"Ingrese la nota de matematicas:  "; cin>> matematicas;
cout<<"Ingrese la nota de lenguaje:  "; cin>> lenguaje;


promedio = (naturales + sociales + matematicas + lenguaje)/ 4;

cout<<"\nEl Estudiante: "<<estudiante<<endl;
cout<< "El Promedio del Estudiante es:  "<<promedio<<endl;

system("pause");
return 0;
}
