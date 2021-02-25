#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int i;
    int j;
    int k;
    int l;

    cin>>n>>i>>j>>k>>l;
    int onmask=(1<<i);
    int offmask=~(1<<j);
    int tmask=(1<<k);
    int checkmask=(1<<l);

    cout<<(n|onmask)<<endl;
    cout<<(n&offmask)<<endl;
    cout<<(n^tmask)<<endl;
    cout<<((n&checkmask)==0?false:true)<<endl;

    return 0;
    
}