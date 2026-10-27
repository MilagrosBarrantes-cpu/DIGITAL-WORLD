#include <iostream>
using namespace std;

int main()
{
    double s = 0;
    int num = 1, deno = 2;
    int n, sw = 0;

    cout << "Ingrese cantidad de terminos: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (sw == 0)
        {
            s = s + (double)num / deno;
            sw = 1;
        }
        else
        {
            s = s - (double)num / deno;
            sw = 0;
        }

        num = num + 2;
        deno = deno + 2;
    }

    cout << "El resultado es: " << s;
    return 0;
}