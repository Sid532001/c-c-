#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    string str_rev;
    cin>>str_rev;
    string str1;
    for(int i=str.size()-1;i>=0;i--)
    str1.push_back(str[i]);
    if(str1==str_rev)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
}