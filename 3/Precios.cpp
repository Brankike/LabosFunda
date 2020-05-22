#include "iostream"
#include "string.h"
using namespace std;
int main()
{
    string compra;
    float precio, cantidad, total;
    cout << "Ingrese Nombre de la Compra" << endl;
    cin >> compra;
    cout << "Ingrese el Precio" << endl;
    cin >> precio;
    cout << "Ingrese la Cantidad" << endl;
    cin >> cantidad;
    total = precio*cantidad;
    cout << "Su compra fue: " << compra << ", y su precio total ha sido:" << total << " dolares" << endl;
    return 0;
}