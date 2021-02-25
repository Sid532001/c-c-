#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string str;
    cout<<"Enter the string:";
    cin>>str;
    int count=0;
    for(i=0;i<str.size();i++)
    
    {
        if(str[i]=='0' ||str[i+1]=='1' && str[i]=='1' ||str[i+1]=='0')
        //if(str[i]!='0' && str[i]!='1')
        {
            count++;
        }
    }
    cout<<count;
    return 0;

}