/*19- Se quiere averiguar el número mágico de una persona. 
Para calcularlo se suman todos los números de su fecha de 
nacimiento y a continuación se reducen a un solo dígito.

Ejemplo: Fecha de nacimiento: 05/02/1973
5 + 2 + 1973 = 1980 => 1 + 9 + 8 + 0 = 18 =>9
*/

#include <iostream>
using namespace std;

int calcularNumeroMagico(int numero) {
    int sumaDigitos = 0;
    while (numero > 0) {
        sumaDigitos += numero % 10;
        numero /= 10;
    }
    if (sumaDigitos > 9) {
        return calcularNumeroMagico(sumaDigitos);
    }
    return sumaDigitos;
}

int main() {
    int dia, mes, ano;
    cout << "Introduce tu fecha de nacimiento (dd mm aaaa): ";
    cin >> dia >> mes >> ano;

    int sumaTotal = dia + mes + ano;
    int numeroMagico = calcularNumeroMagico(sumaTotal);

    cout << "Tu numero magico es: " << numeroMagico << endl;

    return 0;
}
