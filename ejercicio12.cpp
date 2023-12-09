//12 - Recibir una cadena por teclado y verificar si es palindromo


#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
    string cadena, invertida;

    cout << "Introduce una cadena: ";
    getline(cin, cadena);

    for(int i = cadena.length() - 1; i >= 0; i--)
    {
        invertida += cadena[i];
    }

    if(cadena == invertida)
    {
        cout << "La cadena es un palindromo." << endl;
    }
    else
    {
        cout << "La cadena no es un palindromo." << endl;
    }
	
	system("pause");
    return 0;
}
