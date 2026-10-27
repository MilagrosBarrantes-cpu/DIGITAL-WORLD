#include <iostream>
using namespace std;

int main()
{
    int s = 0;
    int exponente = 5;
    int potencia;
    int sw = 0;

    for (int i = 1; i <= 5 && sw == 0; i++)
    {
        potencia = 1;

        for (int j = 1; j <= exponente; j++)
        {
            potencia = potencia * i;
        }

        s = s + potencia;
        exponente = exponente - 1;

        if (i == 5)
        {
            sw = 1;
        }
    }

    cout << "El resultado es: " << s;
    return 0;
}