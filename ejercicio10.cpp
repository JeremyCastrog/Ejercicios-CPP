/*10- Escriba un programa en C++ que permita realizar lo siguiente (usando matrices):
	a) Almacene números aleatorios (menores o iguales a 10) en una matriz de 5 * 6.
	b) Recorra la matriz: mostrando sus elementos
	c) Imprima la suma de los números almacenados en la matriz.
	d) Imprima la suma de los números pares almacenados en la matriz
	e) Imprima la suma de los números impares almacenados en la matriz
	f) Imprima la suma de cada columnas
	g) Imprima la suma de cada fila
	h) Imprima la suma de los elementos de la diagonal principal

*/


#include <iostream>
#include <cstdlib> // Para rand y srand
#include <ctime>   // Para time
#include <stdlib.h>

using namespace std;

const int FILAS = 5;
const int COLUMNAS = 6;

int main() {
    int matriz[FILAS][COLUMNAS];
    int sumaTotal = 0;
    int sumaPares = 0;
    int sumaImpares = 0;
    int sumaColumnas[COLUMNAS] = {0};
    int sumaFilas[FILAS] = {0};
    int sumaDiagonal = 0;

  
    srand(time(nullptr));

   
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            matriz[i][j] = rand() % 10 + 1;
            sumaTotal += matriz[i][j];
            sumaColumnas[j] += matriz[i][j];
            sumaFilas[i] += matriz[i][j];
            if (i == j) {
                sumaDiagonal += matriz[i][j];
            }
            if (matriz[i][j] % 2 == 0) {
                sumaPares += matriz[i][j];
            } else {
                sumaImpares += matriz[i][j];
            }
        }
    }

    // con esto mostramos la matriz
    cout << "Matriz generada:\n";
    for (int i = 0; i < FILAS; ++i) {
        for (int j = 0; j < COLUMNAS; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    
    cout << "\nResultados:\n";
    cout << "Suma total: " << sumaTotal << endl;
    cout << "Suma de numeros pares: " << sumaPares << endl;
    cout << "Suma de numeros impares: " << sumaImpares << endl;
    cout << "Suma de cada columna:\n";
    for (int j = 0; j < COLUMNAS; ++j) {
        cout << "Columna " << j + 1 << ": " << sumaColumnas[j] << endl;
    }
    cout << "Suma de cada fila:\n";
    for (int i = 0; i < FILAS; ++i) {
        cout << "Fila " << i + 1 << ": " << sumaFilas[i] << endl;
    }
    cout << "Suma de la diagonal principal: " << sumaDiagonal << endl;

	system("pause");
    return 0;
}
