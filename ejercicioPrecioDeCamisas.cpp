#include <iostream>
using namespace std;

int main() {
    int cantidad;
    double PU, C, MC, MF;

    cout << Ingrese el precio de una camisa: <<endl;
    cin >> PU;

    cout << Ingrese la cantidad de camisas que desea comprar: <<endl;
    cin >> C;

    MC = PU * C;

    if (C >= 3) {
        MF = MC * 0.80;
    }
	else {
        MF = MC * 0.90;
    }

    cout << Total a pagar: S/.  << MF << endl;

    return 0;
}
