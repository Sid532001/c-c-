#include<iostream>
using namespace std;

int maint()
{
    int n,m,i,j;
    cin>>n>>m;
    cout<<"enter the array elements";
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=i;j<(m/2);j++)
        {
            int temp=a[i][j];
            a[i][j]=a[i][n-1-j];
            a[i][n-1-j]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           cout<<a[i][j];
        }
    }
    cout<<"\n";
    return 0;
}