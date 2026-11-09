#include <iostream>
using namespace std;

int main() {
    int opcion;

    do {
        cout << "========== Menú ==========" << endl;
        cout << "1. Opción 1" << endl;
        cout << "2. Opción 2" << endl;
        cout << "3. Opción 3" << endl;
        cout << "4. Salir" << endl;
        cout << "==========================" << endl;

        cout << "Selecciona una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Has seleccionado la opción 1." << endl;
                break;

            case 2:
                cout << "Has seleccionado la opción 2." << endl;
                break;

            case 3:
                cout << "Has seleccionado la opción 3." << endl;
                break;

            case 4:
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opción no válida." << endl;
                break;
        }

        cout << endl;

    } while (opcion != 4);

    return 0;
}