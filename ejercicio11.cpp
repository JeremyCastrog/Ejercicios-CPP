//11.Recibir una cadena por teclado y organizar en orden alfabético las letras introducidas

#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main()
{
    string cadena;

    cout << "Introduce una cadena: ";
    getline(cin, cadena);

    sort(cadena.begin(), cadena.end());

    cout << "La cadena ordenada es: " << cadena << endl;
	
	system("pause");
    return 0;
}
