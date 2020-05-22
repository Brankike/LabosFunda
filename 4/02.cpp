#include "iostream"
using namespace std;
int main(void)
{
    int numero;
    cout << "Ingrese un numero para saber si es par o impar" << endl;
    cin >> numero;
    if (numero % 2 == 0)
    {
        cout << "El numero es par" << endl;
    }
    else
    {
        cout << "El numero es impar"<< endl;
    }
    return 0;
}
