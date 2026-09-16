#include <iostream>
using namespace std;

int main() {
    int A = 7, B = 3, C;

    C = ++A + B--;

    cout << A << B << C;

    return 0;
}