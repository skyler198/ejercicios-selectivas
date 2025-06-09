#include <iostream>
using namespace std;

// Funcion para validar si la nota esta en el rango de 0 a 100
bool esNotaValida(double nota) {
    return nota >= 0 && nota <= 100;
}

int main() {
    double Nota1, Nota2, Nota3, Promedio;
    int opcion;

    cout << "===================================" << endl;
    cout << "     BIENVENIDO A MI PROGRAMA      " << endl;
    cout << "===================================" << endl;

    do {
        // Mostrar el menu
        cout << endl;
        cout << "------------ MENU ------------" << endl;
        cout << "1. Calcular el promedio de notas" << endl;
        cout << "2. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            // Ingresar primera nota con validacion
            do {
                cout << "Ingrese la primera nota (0 - 100): ";
                cin >> Nota1;
                if (!esNotaValida(Nota1)) {
                    cout << "Nota invalida. Intente de nuevo." << endl;
                }
            } while (!esNotaValida(Nota1));

            // Ingresar segunda nota con validacion
            do {
                cout << "Ingrese la segunda nota (0 - 100): ";
                cin >> Nota2;
                if (!esNotaValida(Nota2)) {
                    cout << "Nota invalida. Intente de nuevo." << endl;
                }
            } while (!esNotaValida(Nota2));

            // Ingresar tercera nota con validacion
            do {
                cout << "Ingrese la tercera nota (0 - 100): ";
                cin >> Nota3;
                if (!esNotaValida(Nota3)) {
                    cout << "Nota invalida. Intente de nuevo." << endl;
                }
            } while (!esNotaValida(Nota3));

            // Calcular promedio
            Promedio = (Nota1 + Nota2 + Nota3) / 3;

            // Mostrar resultado
            cout << "\n------------------------------" << endl;
            cout << "Tu promedio es: " << Promedio << endl;

            if (Promedio >= 70) {
                cout << "Resultado: Alumno APROBADO." << endl;
            } else {
                cout << "Resultado: Alumno REPROBADO." << endl;
            }
            cout << "------------------------------" << endl;

        } else if (opcion == 2) {
            // Mensaje de despedida
            cout << "\nGracias por usar mi programa. ¡Hasta luego! <3" << endl;
        } else {
            // Opcion invalida
            cout << "Opcion invalida. Intente de nuevo." << endl;
        }

    } while (opcion != 2);

    return 0;
}
