#include<bits/stdc++.h>
using namespace std;

int choice(int n)
{
    if(n==1)
    return 1;
    int subprob=choice(n-1);
    return subprob+(n-1)*choice(n-2);
}
int main()
{
    int p;
    cin>>p;
    cout<<choice(p);
    return 0;
}