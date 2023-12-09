//9- Crear un programa que verifique si un  número es primo o no


#include <iostream>
#include <cmath>
#include<stdlib.h>

using namespace std;

bool primo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    
    cout << "Ingrese un numero: ";
    cin >> n;
    
    if (primo(n)) {
        cout << n << " Es un numero primo mio." << endl;
    } else {
        cout << n << " No es un numero primo mio." << endl;
    }
    
    system("pause");
    return 0;
}
