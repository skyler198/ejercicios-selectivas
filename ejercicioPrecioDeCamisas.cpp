#include <iostream>
using namespace std;

int main() {
    int cantidad;
    double precioUnitario, montoCompra, montoFinal;
    char R;
    
    cout << "BIENVENIDO A MI PROGRAMA" << endl;
    
    do{
    cout <<"Ingrese el precio de una camisa:" <<endl;
    cin >> precioUnitario;

    cout <<"Ingrese la cantidad de camisas que desea comprar:"<<endl;
    cin >> cantidad;

    montoCompra = precioUnitario * cantidad;

    if (cantidad >= 3) {
        montoFinal = montoCompra * 0.80;
    }
	else {
        montoFinal = montoCompra * 0.90;
    }

    cout <<"Total a pagar: S/. "<< montoFinal << endl;
    cout << "Desea seguir ingresando datos para calcular el precio que debera pagar por las camisas? (s/n): " << endl;
    cin >> R;
   
	} while (R ==  's' || R == 'S');
    
    cout << "GRACIAS POR USAR MI PROGRAMA <3" << endl;

    return 0;
}
