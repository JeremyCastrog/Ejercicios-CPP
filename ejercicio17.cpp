/*17- Escriba un programa que lea números por teclado hasta que se introduzca el cero. 
En ese momento deberá representar el número de introducciones efectuadas, y la mayor 
secuencia de números consecutivos iguales, indicando cuál fue el número que se repitió
 y cuántas veces seguidas apareció.
Ejemplo: Si se introduce 8 8 8 4 5 6 6 6 7 7 7 7 2 0, el resultado a mostrar será. 
‘El número más repetido es el 7 y se ha escrito 4 veces’.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int numero, anterior = -1, contador = 0;
    int maxRepeticiones = 0, numeroRepetido = 0;
    int introducciones = 0;

    cout << "Introduce numeros (termina con 0):" << endl;

    while (true) {
        cin >> numero;
        if (numero == 0) {
            break;
        }

        introducciones++;

        if (numero == anterior) {
            contador++;
        } else {
            contador = 1;
        }

        if (contador > maxRepeticiones) {
            maxRepeticiones = contador;
            numeroRepetido = numero;
        }

        anterior = numero;
    }

    cout << "Numero de introducciones: " << introducciones << endl;
    cout << "El numero mas repetido es el " << numeroRepetido << " y se ha escrito " << maxRepeticiones << " veces." << endl;

	system("pause");
    return 0;
}
