#include<bits/stdc++.h>
using namespace std;

int poweroftwo(int n)
{
    int i=1;
    while(i*2<=n)
    {
        i=i*2;
    }
    return i;

}
int solution(int n)
{
    int hp2=poweroftwo(n);
    int l=n-hp2;
    return 2*l+1;
}
int main()
{
    int n;
    cin>>n;
    cout<<poweroftwo(n);
}