

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int c=a%b;
        int d=b-c;
        if(a%b==0)
        {
            cout<<c<<endl;
        }
        else
        {
            cout<<d<<endl;
        }
    }
        
        
        return 0;

    
}