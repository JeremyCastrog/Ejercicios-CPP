// 5- Crear un programa que reciba un arreglo de números y sumarlos todos y sacar el promedio

#include <iostream>
#include<conio.h>

using namespace std;

int main(){
    int num;
    float sum = 0, prome;
    
    cout<<"Ingrese la cantidad de numeros que quiere sumar: ";
    cin>> num;
    
    float arre[num];
    for(int i = 0; i < num; i++) {
        cout << "\nIngrese el numero: " << i + 1 << ": ";
        cin >> arre[i];
        sum += arre[i];
    }
    prome = sum / num;
    	cout << "\nLa suma de los numeros es: " << sum << endl;
    	cout << "El promedio es: " << prome << endl;
    	
    getch();	
    return 0;
}
