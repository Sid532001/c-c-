#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"enter the number of rows:";
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }
    for(i=0;i<n/2;i++)
    {
        for(j=0;j<n;j++)
        {
            swap(a[i][j],a[n-1-i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
    cout<<endl;
    return 0;
}