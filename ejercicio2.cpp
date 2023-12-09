 /* 2- Crear un programa que reciba 2 números por teclado y haga todas las operaciones (suma, resta, multiplicacion y division)
	hint: int, *,/,-,+
*/
 

 #include<iostream>
 
 using namespace std;
 
 int main(){
 	int n1,n2, suma = 0, resta = 0, multiplicacion = 0, division = 0; 
 	
 	cout<<"Digite el primer numero: "; cin>>n1;  
 	cout<<"Digite el segundo numero: "; cin>>n2;
 	
 	suma = n1 + n2;      
 	resta = n1 - n2;
 	multiplicacion = n1 * n2;
 	division = n1 / n2;
 	
 	cout<<"\nLa suma es: "<<suma<<endl; 
 	cout<<"La resta es: "<<resta<<endl;
 	cout<<"la multiplicacion es "<<multiplicacion<<endl;
 	cout<<":La division es: "<<division<<endl;
 	
 	return 0;
 }