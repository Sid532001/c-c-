#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int i,n;
    cout<<"enter the number of elements:";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sort(a,a+n);
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}