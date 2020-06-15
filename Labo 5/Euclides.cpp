#include "iostream"
using namespace std;
int main()
{
    int a, b, c, r;
    cout << "Algoritmo de Euclides para el Maximo Comun Divisor (MCD)" << endl;
    cout << "Ingresa el primer numero:"<< endl;
    cin >> a;
    cout << "Ingresa el segundo numero:"<< endl;
    cin >> b;
    c = a/b;
    r = a%b;
    while(r !=0){
        a=b;
        b=r;
        if(a > b){
            c = a/b;
            r = a%b;
        }
    }
    cout << "El MCD es:" << b << endl;
    return 0;
}