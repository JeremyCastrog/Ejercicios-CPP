// 7- Crear un programa que detecte palíndromos

#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

int main() {
    string texto;
    int aux = 0, igual = 0;
    
    cout << "Ingrese la palabra a evaluar: ";
    getline(cin >> ws, texto);
    
    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[aux]) {
            igual++;
        }
        aux++;
    }
    
    if(texto.length() == igual) {
        cout << "La palabra ingresada es palindromo " << endl;
    } else {
        cout << "La palabra ingresada no es palindromo" << endl;
    }
    
    system("pause");
    return 0;
}
