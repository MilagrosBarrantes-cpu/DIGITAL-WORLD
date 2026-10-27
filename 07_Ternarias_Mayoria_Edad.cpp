#include <iostream>
#include <string>
using namespace std;

int main() {
    int edad = 20;
    string categoria = (edad >= 18) ? "adulto" : "menor de edad";

    cout << "La persona es " << categoria << endl;
    return 0;
}