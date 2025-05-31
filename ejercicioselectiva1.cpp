#include <iostream>
using namespace std;

int main()
{
    double N1, N2, N3, P;
    cout << "BIENVENIDO A MI PROGRAMA" <<endl;

    cout <<"Ingrese la primera nota:" <<endl;
    cin >> N1;

    cout <<"Ingrese la segunda nota:"<<endl;
    cin >> N2;

    cout <<"Ingrese la tercera nota:"<<endl;
    cin >> N3;
    if (N1 < 0 || N2 < 0 || N3 < 0 ){
		cout << "ingrese una nota valida, esta no debe ser negativa." << endl;
	} else {
		P = (N1 + N2 + N3) / 3;
		cout <<"Tu promedio es: "<< P << endl;
		if (P >= 70) {
			cout <<"Alumno APROBADO." << endl;
		} else {
        	cout <<"Alumno REPROBADO."<< endl;
		}
	}
	cout << "GRACIAS POR USAR MI PROGRAMA <3" << endl;

    return 0;
}
