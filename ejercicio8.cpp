//8- Crear un programa que calcule el binomio de Newton 

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){
	float a,b,newton;
	
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	
	newton = pow(a,2)+pow(b,2)+(2*a*b);
	
	cout<<"El resultado es: "<<newton<<endl;
	
	system("pause");
	return 0;
}