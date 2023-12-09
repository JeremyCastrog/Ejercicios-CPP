/*18- Escriba un programa en C++ que solicite un número y calcule su factorial. 
El factorial de un número n (representado por n!) Es el  producto de todos 
los números naturales desde 1 hasta n.
n! = 1 * 2 * 3 * ... * (n - 1) * n
*/


#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int numero;
    long double factorial = 1; // Usamos long double para manejar numeros grandes

    cout << "Introduce un numero entero positivo: ";
    cin >> numero;

    // Calculamos el factorial
    for (int i = 1; i <= numero; ++i) {
        factorial *= i;
    }

    cout << "El factorial de " << numero << " es: " << factorial << endl;
    
	system("pause");
    return 0;
}
