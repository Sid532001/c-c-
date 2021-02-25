#include<bits/stdc++.h>
using namespace std;

_STRINGS_H main()
{
    int i;
    string str;
    cout<<"enter the string";
    cin>>str;
    string s2;
    for(i=0;i<str.size();i++)
    {
        if(str[i]<'A'|| str[i]>'Z'&&str[i]<'a'||str[i]>'z')
        {
            s2+=str[i];
        }
        
    }
    cout<<s2;
    return 0;
    
}