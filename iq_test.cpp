#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<=n;i++)
    {
        if(a[i]%2!=0)
        {
            cout<<i++<<endl;
            return 0;
        }
    }
 
  
}