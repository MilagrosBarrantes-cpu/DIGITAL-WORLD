#include <iostream>
using namespace std;
int main() {
    double s = 0;
    double num = 0;
    double deno = 6;
    int sw = 0;

    for (int i = 1; i <= 5; i++) {
        num= num + 1;
        deno= deno -1;

        if (sw == 0) {
            s =s + (num / deno);
            sw = 1;
        } else {
            s = s - (num / deno);
            sw = 0;
        }

        cout <<" termino "<<i<<"("<<num<<"/"<<deno<<") suma parcial: "<<s<<endl;
    }
    cout<<"El resultado es: "<<s;
    return 0;
}