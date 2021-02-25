#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str;
    cin>>n;
    cin>>str;
    int i;
    int a=0;
    int d=0;
    for(i=0;i<n;i++)
    {
        if(str[i]=='A')
        {
            a++;
        }
        else if(str[i]=='D')
        {
            d++;
        }
        
    }
         if(a>d)
        {
            cout<<"Anton";
        }
        else if(a==d)
        {
            cout<<"Danik";
        }
        else
        {
            cout<<"Friendship";
        }

}