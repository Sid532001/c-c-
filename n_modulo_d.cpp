#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    int x;
    x=n&(d-1);
    cout<<x;
    
    return 0;
}