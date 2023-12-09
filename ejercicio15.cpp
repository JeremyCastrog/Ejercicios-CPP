/*15- Imprimir y guardar en matriz 8 nombres aleatorios y que no se repitan 
en las siguientes dos corridas. Los nombres y los apellidos deben 
estar en dos arreglos diferentes.
*/

#include <iostream>
#include <string>
#include <ctime> 
#include <cstdlib>
#include <stdlib.h>


using namespace std;

const int NUM_NOMBRES = 8;
const string nombres[] = {"Juan", "Maria", "Carlos", "Ana", "Pedro", "Laura", "Diego", "Sofia"};
const string apellidos[] = {"Garcia", "Rodriguez", "Perez", "Lopez", "Martinez", "Fernandez", "Gonzalez", "Hernandez"};

int main() {
    srand(time(nullptr));

    string matrizNombres[NUM_NOMBRES];
    bool nombreUsado[NUM_NOMBRES] = {false}; // Para evitar repeticiones

    // Generar nombres aleatorios sin repetir
    for (int i = 0; i < NUM_NOMBRES; ++i) {
        int indiceAleatorio;
        do {
            indiceAleatorio = rand() % NUM_NOMBRES;
        } while (nombreUsado[indiceAleatorio]);

        matrizNombres[i] = nombres[indiceAleatorio] + " " + apellidos[indiceAleatorio];
        nombreUsado[indiceAleatorio] = true;
    }

    // Imprimir la matriz de nombres
    cout << "Nombres generados:\n";
    for (int i = 0; i < NUM_NOMBRES; ++i) {
        cout << matrizNombres[i] << endl;
    }

	system("pause");
    return 0;
}

