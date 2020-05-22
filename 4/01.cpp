#include "iostream"
using namespace std;
int main ()
{
    int a, b, x;
    cout << "Ingrese solo numeros por favor" << endl;
    cout << "Ingrese a:";
    cin >> a;
    cout << "Ingrese b:";
    cin >> b;
    x= (a/b);

    if (a/b >= 0)
    {
        cout << "Los numeros son divisibles." << endl;
    }
    else
    {
        cout << "los numeros no son divisibles." << endl;
    }
    cout << "El resultado es: " << x << endl;
    return 0;
}