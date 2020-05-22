#include "iostream"
#include "string.h"
using namespace std;
int main(void)
{
    char palabra[50] ;
    int calculo;
    cout << "Ingrese una Palabra" << endl;
    cin >> palabra;
    calculo = strlen(palabra);
    if (calculo > 10 )
    {
        cout << "La palabra es mayor de 10 letras y tiene " << calculo << " letras ";
    }
    else 
    {
        cout << "La palabra es menos de 10 letras y tiene " << calculo << " letras ";
    }
    if (calculo / 2 == 0)
    {
        cout << "es par" << endl;
    }
    else 
    {
        cout << "es impar" << endl;
    }
    return 0;
}