#include<bits/stdc++.h>
using namespace std;
int totalpath=0;
void jumpp(int n,int i,string osf)
{
    if(i>=n)

    return ;
    if(i==n-1)
{
    totalpath+=1;
    cout<<osf<<endl;
    return;
}
    for(int j=1;j<=6;j++)
    {
        jumpp(n,i+j,osf+to_string(j)+"->");
    }

}

int main()
{
    jumpp(3,0,"");
    cout<<totalpath<<endl;
}