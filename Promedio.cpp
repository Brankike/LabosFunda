#include "iostream"2
using namespace std;
int main(void)
{
    int a, b, c, sum, prom;
    cout << "Promedio de tres numeros" << endl;
    cout << "Por favor ingresa solo numero enteros" << endl;
    cout << "Ingrese a:";
    cin >> a;
    cout << "Ingrese b:";
    cin >> b;
    cout << "Ingrese c:";
    cin >> c;
    sum = a+b+c;
    prom = sum/3;
    cout << "El promedio es:" << prom << endl;
    cout << "ADVERTENCIA: El resultado se entrega en numeros enteros" << endl;
    /*Agregue la advertencia por si acaso*/
    return 0;
}