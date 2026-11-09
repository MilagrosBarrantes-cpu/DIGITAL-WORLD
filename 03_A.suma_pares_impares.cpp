#include <iostream>
using namespace std;

int main()
{
    int n,i,sumap=0,sumai=0;
    cin>>n;
    int A[n];

    for(i=0;i<n;i++)
    {
        A[i]=i+1;

        if(A[i]%2==0)
        {
            sumap=sumap+A[i];
        }
        else
        {
            sumai=sumai+A[i];
        }
    }

    cout<<"Suma de pares: "<<sumap<<endl;
    cout<<"Suma de impares: "<<sumai;

    return 0;
}