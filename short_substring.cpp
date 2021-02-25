#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(t--)
    {
        string str;
        cin>>str;
        int i;
        for(i=0;i<str.size();i++)
        {
            if(str[i]==str[i+1])
            {
                i=i+1;
                cout<<str[i];

            }
        }
        
    }
    return 0;
}