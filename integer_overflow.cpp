#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,result;
    cin>>a>>b;
    result=a+b;
    if(a>0 && b>0 && result <0)
    {
    cout<<-1;
    cout<<result;
    }
    else if(a<0 && b<0 && result>0)
    {
    cout<<-1<<endl;
    cout<<result<<endl;
    }
    else 
    return 0;
}