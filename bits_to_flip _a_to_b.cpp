#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a,b,c;
    cin>>a>>b;
    c=a^b;
    int counter=0;
    while(c!=0)
    {
        int r=c&(c-1);
        c-=r;
        counter++;


    }
    cout<<counter;
    return 0;
}