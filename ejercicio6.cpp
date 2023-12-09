// 6- Crear un programa que reciba un arreglo de números y sacar el menor y el mayor

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int num;
    cout << "Ingrese la cantidad de numeros que quieres evaluar: ";
    cin >> num;

    int arre[num];
    cout << "\nIngrese los numeros: ";
    for (int i = 0; i < num; i++) {
        cin >> arre[i];
    }

    int menor = arre[0];
    int mayor = arre[0];
    for (int i = 1; i < num; i++) {
        if (arre[i] < menor) {
            menor = arre[i];
        }
        if (arre[i] > mayor) {
            mayor = arre[i];
        }
    }

    cout<<"\nEl de menor valor es: " << menor <<endl;
	cout<<"El de mayor valor es: " << mayor <<endl;
	
	system("pause");
    return 0;
}

