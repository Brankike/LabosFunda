#include "iostream"
using namespace std;
int main ()
{
    char palabra[50];
    int i=0;
    cout << "Ingrese una palabra" << endl;
    cin >> palabra;
    for (i=0; 1<palabra[i]; i++){
    }
    cout << palabra [0] << "=" << palabra [i-1] << endl;
    if(palabra [0] == palabra [i-1])
    {
        cout << "La primera letra es igual a la ultima" << endl;
    }
    else 
    {
        cout << "La primera letra no es igual a la ultima" << endl;
    }
    return 0;
}