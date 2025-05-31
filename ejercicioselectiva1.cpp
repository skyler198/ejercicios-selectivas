#include <iostream>
using namespace std;

int main()
{
    double N1, N2, N3, P;
    cout << "BIENVENIDO A MI PROGRAMA" <<endl;
	
	do {
    	cout << "Ingrese la primera nota:" << endl;
        cin >> N1;
        if (N1 < 0) {
            cout << "Nota invalida. Ingrese una nota mayor o igual a 0" << endl;
        }
    } while (N1 < 0);
    
	do{
		cout << "Ingrese la segunda nota:" << endl;
        cin >> N2;
        if (N2 < 0) {
            cout << "Nota invalida. Ingrese una nota mayor o igual a 0" << endl;
        }
    } while (N2 < 0);
		
	do {
		cout << "Ingrese la tercera nota: " << endl;
        cin >> N3;
        if (N3 < 0) {
            cout << "Nota invalida. Ingrese una nota mayor o igual a 0" << endl;
        }
    } while (N3 < 0);
	
	P = (N1 + N2 + N3) / 3;
	
	cout <<"Tu promedio es: "<< P << endl;
	if (P >= 70) {
		cout <<"Alumno APROBADO." << endl;
	} else {
		cout <<"Alumno REPROBADO."<< endl;
	}
	
	cout << "GRACIAS POR USAR MI PROGRAMA <3" << endl;

    return 0;
}
