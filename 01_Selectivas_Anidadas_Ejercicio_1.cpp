#include <iostream>
#include <string>
using namespace std;
int main() {
    int numero = 10;
    string resultado;
    resultado = (numero % 2 == 0) ? "par" : "impar";
    cout << "El número es " << resultado << endl;
    return 0;
}