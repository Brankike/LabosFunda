#include "iostream"
#include "cmath"
using namespace std;
int main(void)
{
    float a, b, c, x1, x2, raiz, div, pot,resta, r, z1, z2;
    cout << "Formula Cuadratica" << endl;
    cout << "Ingresa a:";
    cin >> a;
    cout << "Ingresa b:";
    cin >> b;
    cout << "Ingresa c:";
    cin >> c;
    pot = pow(b, 2);
    resta = 4*a*c;
    div = 2*a;
    r = pot-resta;
    raiz = sqrt(r);
    z1= -b+raiz;
    z2= -b-raiz; /*no se pueden hacer de una sola*/
    x1= z1/div;
    x2= z2/div;
    /*Hice doble salida por el +-*/
    cout << "x1 es igual a:" << x1<< endl;
    cout << "x2 es igual a:" << x2<< endl;
    return 0;
}