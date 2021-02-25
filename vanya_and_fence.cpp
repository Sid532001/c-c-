#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int a[n];
    int i;
    int count=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=h)
        {
            count++;
        }
        else if(a[i]>h)
        {
            count=count+2;
        }
    }
    cout<<count<<endl;
    return 0;

}