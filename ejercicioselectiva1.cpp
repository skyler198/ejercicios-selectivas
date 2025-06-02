#include <iostream>
using namespace std;

bool esNotaValida(double nota) {
    return nota >= 0 && nota <= 100;
}

int main()
{
    double Nota1, Nota2, Nota3, Promedio;
	int opcion;
    cout << "BIENVENIDO A MI PROGRAMA" <<endl;
    do {
    	cout << endl;
		cout << "----- MENU-----" << endl;
		cout << "1. Calcular el promedio de notas" << endl;
		cout << "2. Salir" << endl;
		cout << endl;
		cout << "seleccione una opcion:" << endl;
		cin >> opcion;
		
		if (opcion == 1){
			do {
    			cout << "Ingrese la primera nota:" << endl;
        		cin >> Nota1;
        		if (!esNotaValida(Nota1))  {
            		cout << "Nota invalida. Ingrese una nota entre 0 y 100" << endl;
        		}
    		} while (Nota1 < 0 || Nota1 > 100);
    
			do{
				cout << "Ingrese la segunda nota:" << endl;
        		cin >> Nota2;
        		if (!esNotaValida(Nota2))  {
            		cout << "Nota invalida. Ingrese una nota entre 0 y 100" << endl;
       			}
    		} while (Nota2 < 0 || Nota2 > 100 );
		
			do {
				cout << "Ingrese la tercera nota: " << endl;
        		cin >> Nota3;
       			 if (!esNotaValida(Nota3))  {
            		cout << "Nota invalida. Ingrese una nota entre 0 y 100" << endl;
       			 }
    		} while (Nota3 < 0 || Nota3 > 100 );
	
			Promedio = (Nota1 + Nota2 + Nota3) / 3;
	
			cout <<"Tu promedio es: "<< Promedio << endl;
			if (Promedio >= 70) {
				cout <<"Alumno APROBADO." << endl;
			} else {
				cout <<"Alumno REPROBADO."<< endl;
			}
			
		} else if ( opcion == 2){
			cout << "GRACIAS POR USAR MI PROGRAMA <3" << endl;
		} else {
			cout << "Opcion invalida, intente de nuevo." << endl;
		}
	} while (opcion !=2);
	
    return 0;
}
