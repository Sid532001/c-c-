#include<string>
#include<bits/stdc++.h>
using namespace std;

string addlast(string s)
{
    if(s.length()==0)
    return"";
    char ch=s[0];
    string ans=addlast(s.substr(1));
    if(ch=='x')
    {
        return ans+ch;
    }
}
int main()
{
    cout<<addlast("ssvbshscxxkjhsxxddzz");
}