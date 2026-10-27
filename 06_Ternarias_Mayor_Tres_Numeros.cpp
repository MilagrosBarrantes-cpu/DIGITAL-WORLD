#include <iostream>
using namespace std;

int main()
{
    int a=101,b=50,c=26,g;

    c=(a>b && a>c) ? a : ((b>a && b>c) ? b : c);
    cout<<"El número mayor es "<<c;
    return 0;
}