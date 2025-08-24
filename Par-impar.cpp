// Número par o impar

#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "Ingrese un numero";
    cin >> numero;

    if (numero % 2 == 0)
    {
        cout << "El numero es par como una pareja feliz";
    }
    else
    {
        cout << "El numero es impar como yo que programo solo";
    }
    
}
