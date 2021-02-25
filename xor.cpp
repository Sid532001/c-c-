#include<iostream>
using namespace std;

int main()
{
    int n,i,xorr=0;
    int xorrr;
    cin>>n;
    cin>>xorrr;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=xorrr;i<n;i++)
    {
        xorr=xorr^a[i];
    }
    cout<<xorr;
    return 0;

}
