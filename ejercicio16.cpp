/*16-Escribir un programa en C++ que escriba los números comprendidos 
entre 1 y 1000. El programa escribirá en la pantalla los números en 
grupos de 20, solicitando al usuario si quiere o no continuar visualizando 
el siguiente grupo de números.
Generalizar el programa para que escriba los números comprendidos entre dos 
valores que introduzca el usuario, y sea éste también quien decida el tamaño 
del grupo a visualizar por pantalla.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int i = 1;
    while (i <= 1000) {
        cout << i << " ";
        if (i % 20 == 0) {
            cout << endl;
            cout << "Desea continuar (s/n): ";
            char c;
            cin >> c;
            if (c == 'n') {
                break;
            }
        }
        i++;
    }
    
    system("pause");
    return 0;
}
