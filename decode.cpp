#include<iostream>
using namespace std;

int main()
{
    int n,i;
    int ans[n+1];
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        ans[i+1]=ans[i]^a[i];
    }
    for(i=0;i<n+1;i++)
    cout<<ans[i];
    return 0;
    
}