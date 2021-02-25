#include<bits/stdc++.h>
#include<string>

using namespace std;
int main()
{
    int i;
    string str;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='W'&&str[i+1]=='U'&&str[i]=='B')
        {
            i=i+2;
            cout<<" ";
        }
        else
        {
            cout<<str[i];
        }
    }
    
    return 0;
}