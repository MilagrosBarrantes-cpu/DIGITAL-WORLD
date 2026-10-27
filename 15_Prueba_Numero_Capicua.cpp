#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c, d;

    cout << "Ingrese un numero de 4 digitos: ";
    cin >> n;

    if (n >= 1000 && n <= 9999)
    {
        a = n / 1000;
        b = (n / 100) % 10;
        c = (n / 10) % 10;
        d = n % 10;

        if (a == d && b == c)
        {
            cout << "El numero es capicua" << endl;
        }
        else
        {
            cout << "El numero no es capicua" << endl;
        }
    }
    else
    {
        cout << "Ingrese un numero de 4 digitos" << endl;
    }

    return 0;
}