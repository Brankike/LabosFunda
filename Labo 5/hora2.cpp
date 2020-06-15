#include "iostream"
using namespace std;
int main()
{
    int h, m, s;
    cout << "Sumemos un segunto a la hora" << endl;
    cout << "Ingresa la Hora: ";
    cin >> h;
    if(h > 23){
        cout << "Datos invalidos \n Vuelve a correr el programa" << endl;
        exit (0);
    }
    cout << "Ingresa los minutos: ";
    cin >> m;
    if(m > 60){
        cout << "Datos invalidos \n Vuelve a correr el programa" << endl;
        exit (0);
    }
    cout << "Ingresa los segundos: ";
    cin >> s;
    if(s > 60){
        cout << "Datos invalidos \n Vuelve a correr el programa" << endl;
        exit (0);
    }
    s = s + 1;
    if(s >= 60){
        s = 0;
        m = m + 1;
        if(m >= 60){
            m = 0;
            h = h + 1;
            if(h = 24){
                h = 0;
            }
        }
    }
    cout << "La hora mas un segundo es: " << h << ":" << m << ":" << s << endl;
    return 0;
}