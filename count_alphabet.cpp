#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    cout<<"enter the string";
    string str;
    cin>>str;
    int count=0;
    for(i=0;i<str.size();i++)
    {
        if(str[i]>=65 || str[i]>=91)
        {
            count++;
        }
        else if(str[i]>=97 || str[i]>=122)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}