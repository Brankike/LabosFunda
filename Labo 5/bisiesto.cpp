#include "iostream"
using namespace std;
bool bisiesto (int anio){
    return ((anio %4 == 0 && anio %100!=0) || anio %400 == 0);
}
int main()
{
    int anio;
    cout << "Anios bisiesto" << endl;
    cout << "Ingresa el anio" << endl;
    cin >> anio;
    cout << "El anio " << anio << (bisiesto(anio) ? "" : " no") << " es bisiesto" <<endl;
    return 0;
}



