#include "iostream"
using namespace std;
int main(void)
{
    int num;
    cout << "¿Tu numero es positivo, negativo o cero?" << endl;
    cout << "Ingrese el numero a Evaluar" << endl;
    cin >> num;
    if ( num < 0 )
    {
        cout << "El numero es negativo" << endl;
    }
    else if (num > 0)
    {
        cout << "El numero es positivo" << endl;
    }
    else
    {
        cout << "El numero es cero" << endl;
    }
    return 0;
}