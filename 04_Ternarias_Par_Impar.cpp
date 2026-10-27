#include <iostream>
#include <string>
using namespace std;

int main() {
    int numero = 11;
    string resultado = (numero % 2 == 0) ? "par" : "impar";
    cout << "El numero es " << resultado << endl;
    return 0;
}