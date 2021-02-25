#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string str;
    cout<<"enter the string:";
    cin>>str;
    int r=0,g=0;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='G')
        {
            g++;
            
        }
        else if(str[i]=='R')
        {
            r++;
        }
        
    }
    if(r<g)
    {
        cout<<r;
    }
    else
    {
        cout<<g;
    }
    return 0;
}