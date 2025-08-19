// Desarrollar un Hola Mundo

#include <iostream>
#include <Windows.h>
#include <algorithm>
#include <string>

using namespace std;

void printSlow(const string& text, int delay = 50) 
{
    // Recorrer el texto letra por letra
    for(char c : text)
    {
        cout << c << flush;
    }
    cout << endl; 
}

int main() 
{
    SetConsoleOutputCP(CP_UTF8);
    // Texto que se mostrara en el marco
    string mensaje = "Hola, terrícola. Soy tu primer programa. Prepárate para sufrir errores"; 

    // Marco
    string top =    "+" + string(mensaje.size() + 2, '-') + "+";
    string middle = "|" + mensaje + "    |";
    string bottom = "+" + string(mensaje.size() + 2, '-') + "+";

    // Animación linea por linea
    printSlow(top, 10);
    printSlow(middle, 10);
    printSlow(bottom, 10);

    return 0;
}
