/*14- Una escuela tiene 2 grupos, un grupo tiene 3 alumnos y cada alumno 
cursa 4 materias.Realice un programa que solicite todas las calificaciones 
y calcule e imprima los promedios de cada alumno, de cada grupo
 y el promedio general de la escuela.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

const int NUM_GRUPOS = 2;
const int NUM_ALUMNOS = 3;
const int NUM_MATERIAS = 4;

int main() {
    double calificaciones[NUM_GRUPOS][NUM_ALUMNOS][NUM_MATERIAS];
    double promedioAlumno[NUM_GRUPOS][NUM_ALUMNOS] = {0};
    double promedioGrupo[NUM_GRUPOS] = {0};
    double promedioGeneral = 0;

    // Capturar las calificaciones
    for (int grupo = 0; grupo < NUM_GRUPOS; ++grupo) {
        cout << "Grupo " << grupo + 1 << ":\n";
        for (int alumno = 0; alumno < NUM_ALUMNOS; ++alumno) {
            cout << "Alumno " << alumno + 1 << ":\n";
            for (int materia = 0; materia < NUM_MATERIAS; ++materia) {
                cout << "Ingrese la calificacion de la materia " << materia + 1 << ": ";
                cin >> calificaciones[grupo][alumno][materia];
                promedioAlumno[grupo][alumno] += calificaciones[grupo][alumno][materia];
            }
            promedioAlumno[grupo][alumno] /= NUM_MATERIAS;
            promedioGrupo[grupo] += promedioAlumno[grupo][alumno];
        }
        promedioGrupo[grupo] /= NUM_ALUMNOS;
        promedioGeneral += promedioGrupo[grupo];
    }
    promedioGeneral /= NUM_GRUPOS;

    // Imprimir resultados
    cout << "\nPromedios de cada alumno:\n";
    for (int grupo = 0; grupo < NUM_GRUPOS; ++grupo) {
        cout << "Grupo " << grupo + 1 << ":\n";
        for (int alumno = 0; alumno < NUM_ALUMNOS; ++alumno) {
            cout << "Alumno " << alumno + 1 << ": " << promedioAlumno[grupo][alumno] << endl;
        }
    }

    cout << "\nPromedios de cada grupo:\n";
    for (int grupo = 0; grupo < NUM_GRUPOS; ++grupo) {
        cout << "Grupo " << grupo + 1 << ": " << promedioGrupo[grupo] << endl;
    }

    cout << "\nPromedio general de la escuela: " << promedioGeneral << endl;

	system("pause");
    return 0;
}
