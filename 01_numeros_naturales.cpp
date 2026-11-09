#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int A[n];

    for(i=0;i<n;i++)
    {
        A[i]=i+1;
    }

    for(i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}