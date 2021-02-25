#include<iostream>
using namespace std;
int main()
{
    int n,i,v;
    cout<<"enter the number of elements:";
    cin>>n;
    cout<<"enter the elements:";
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        int v=a[i];
        a[v]=i;
    }
    for ( i = 0; i < n; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    return 0;
    
}