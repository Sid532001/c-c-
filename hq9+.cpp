#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int i;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='H'||str[i]=='Q'||str[i]=='+'||str[i]=='9')
        {
            cout<<"YES";
            return 0;
        }
    }
        
        
            cout<<"NO"<<endl;
        
    
    return 0;
}