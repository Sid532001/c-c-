#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string str;
    cout<<"enter the string:";
    cin>>str;
    int sum=0;
    for(i=0;i<str.size();i++)
    {
        if(str[i]>=48 && str[i]<= 57)
        {
            sum=sum+str[i];
        }
    }
    cout<<sum;
    return 0;
}