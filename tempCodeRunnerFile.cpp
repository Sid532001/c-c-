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
        cout<<d<<endl;
        return 0;

    }
}