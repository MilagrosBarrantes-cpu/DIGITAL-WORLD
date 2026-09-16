#include <iostream>
using namespace std;

int main() {
    int x = 5, y;

    ++x;
    y = x * x;
    x--;

    cout << x << " " << y;

    return 0;
}