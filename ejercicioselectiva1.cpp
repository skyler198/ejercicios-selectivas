#include <iostream>
using namespace std;

int main()
{
    double N1, N2, N3, P;

    cout << Ingrese la primera nota: <<endl;
    cin >> N1;

    cout << Ingrese la segunda nota: <<endl;
    cin >> N2;

    cout << Ingrese la tercera nota: <<endl;
    cin >> N3;

    P = (N1 + N2 + N3) / 3;

    cout << Tu promedio es:  << P << endl;

    if (P >= 70) {
        cout << Alumno APROBADO. << endl;
    } else {
        cout << Alumno REPROBADO. << endl;
    }

    return 0;
}
