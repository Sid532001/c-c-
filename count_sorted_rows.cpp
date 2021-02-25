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
    cout<<"enter the elements of the matrix:";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]>=a[i][j+1])
            {
                break;
            }
            if(j==m-1)
            {
                count++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=m-1;j>0;j--)
        {
            if(a[i][j-1]<=a[i][j])
            {
                break;
            }
            if(m>1 && j==0)
            {
                count++;
            }
        }

    }
    cout<<count;
    return 0;
    
}