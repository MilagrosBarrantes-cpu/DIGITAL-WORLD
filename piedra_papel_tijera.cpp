#include <iostream>
using namespace std;

int main() {
    int jugador, computadora = 2;

    cout << "PIEDRA, PAPEL O TIJERA" << endl;
    cout << "1. Piedra" << endl;
    cout << "2. Papel" << endl;
    cout << "3. Tijera" << endl;
    cout << "Elige una opcion: ";
    
    cin >> jugador;

    if (jugador < 1 || jugador > 3) {
        cout << "Opcion incorrecta";
    } else if (jugador == computadora) {
        cout << "Empate";
    } else if (jugador == 3) {
        cout << "Ganaste";
    } else {
        cout << "Perdiste";
    }

    return 0;
}