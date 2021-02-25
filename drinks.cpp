#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i;
    int a[n];
    double sum=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<fixed << setprecision(12)<<sum/n;
    return 0;
}