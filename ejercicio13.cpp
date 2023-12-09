/*Calcular el sueldo neto de una persona a partir del sueldo bruto.
Cálculos:
Si el sueldo es menor que 20,000
1.3% ARS
1.0% AFP

Si el sueldo es menor a 50,000
1.1% ARS
0.9% AFP


Todos los demás
1% ARS
0.8% AFP


En todos los casos calcular el  ISR (investigar la tabla de pagos)

1% Infotep

*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    double sueldoBruto, sueldoNeto, ars, afp, isr, infotep;

    cout << "Ingrese el sueldo bruto: ";
    cin >> sueldoBruto;

    if (sueldoBruto < 20000) {
        ars = sueldoBruto * 0.013;
        afp = sueldoBruto * 0.01;
    } else if (sueldoBruto < 50000) {
        ars = sueldoBruto * 0.011;
        afp = sueldoBruto * 0.009;
    } else {
        ars = sueldoBruto * 0.01;
        afp = sueldoBruto * 0.008;
    }

    // Calculamos el ISR (impuesto sobre la renta) según la tabla de pagos
    // (Puedes investigar la tabla de pagos y ajustar los valores aquí)
    // Por ahora, asumiremos un 10% de ISR
    isr = sueldoBruto * 0.1;

    // Infotep (1%)
    infotep = sueldoBruto * 0.01;

    // Calculamos el sueldo neto
    sueldoNeto = sueldoBruto - ars - afp - isr - infotep;

    cout << "Deducciones:\n";
    cout << "ARS: " << ars << endl;
    cout << "AFP: " << afp << endl;
    cout << "ISR: " << isr << endl;
    cout << "Infotep: " << infotep << endl;
    cout << "Sueldo neto: " << sueldoNeto << endl;

	system("pause");
    return 0;
}
