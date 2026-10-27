#include <iostream>
using namespace std;

int main() {
    int i,j,n=10;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<i<<"x"<<j<<"="<<i*j<<endl;
        }
    }

    return 0;
}