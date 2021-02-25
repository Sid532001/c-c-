#include<bits/stdc++.h>
using namespace std;

void toh(int n,char src,char dest,char helper)
{
    if(n==0)
    {
        return ;
    }
    toh(n-1,src,dest,helper);
    cout<<"move from "<<src<<" to"<<dest<<endl;
    toh(n-1,helper,dest,src);
}
int main()
{
    toh(3,'A','C','B');
}