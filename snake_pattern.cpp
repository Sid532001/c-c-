#include<iostream>
using namespace std;

int main()
{
    int i,j,n,m;
    cout<<"enter the number of rows:";
    cin>>n;
    cout<<"enter the number of columns:";
    cin>>m;
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
        if(i%2==0)
        {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j];
        }
        }
        else
        {
            for(j=n-1;j>=0;j--)
            {
                cout<<a[i][j];
            }
        }
    }
    return 0;
}