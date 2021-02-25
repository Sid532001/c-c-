
#include<iostream>
#include<algorithm>
#include<conio.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    sort(a,n+1);
    for(i=0;i<n;i=i+2)
    {
        sum=sum+a[i];
    }
    cout<<sum;
    return 0;
}