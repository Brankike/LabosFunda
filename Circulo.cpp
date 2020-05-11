#include "iostream"
#include "cmath"
using namespace std;
int main(void)
{
    float r, area, pot, pi, perimetro;
    cout << "Perimetro y Area de un Circulo" << endl;
    cout << "Ingresa el Radio de el circulo:";
    cin >> r;
    pot = pow (r, 2);
    pi = 3.14;
    area = pi*pot;
    perimetro = 2*pi*r;
    cout << "El area del circulo es:" << area << endl;
    cout << "El perimetro del circulo es:" << perimetro << endl;
    return 0;
}