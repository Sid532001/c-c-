#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,count=0;
    string str;
    cout<<"enter the string:";
    cin>>str;
    for(i=0;i<=str.size();i++)
    {
    if(str[i]>='A'&& str[i]<='Z')
    {
        count++;
    }
    }
    cout<<count;
    return 0;
}