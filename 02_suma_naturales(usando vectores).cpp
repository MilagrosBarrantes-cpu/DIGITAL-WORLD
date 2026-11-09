#include <iostream>
using namespace std;

int main()
{
    int n,i,suma=0;
    cin>>n;
    int A[n];

    for(i=0;i<n;i++)
    {
        A[i]=i+1;
        suma=suma+A[i];
    }

    cout<<"Suma: "<<suma;

    return 0;
}