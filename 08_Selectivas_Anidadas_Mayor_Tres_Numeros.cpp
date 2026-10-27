#include <iostream>
using namespace std;

int main() {
    int A, B, C, maxNum;
    cin >> A >> B >> C;

    if (A > B) {
        // Estructura Anidada Interior 1
        if (A > C) {
            maxNum = A;
        } else {
            maxNum = C;
        }
    } else {
        // Estructura Anidada Interior 2
        if (B > C) {
            maxNum = B;
        } else {
            maxNum = C;
        }
    }

    cout << maxNum << endl;
    return 0;
}