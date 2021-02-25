#include<iostream>
using namespace std;

int main()
{
    int n,m,i,j;
    cout<<"enter the number of rows:";
    cin>>n;
    cout<<"enter the number of columns:";
    cin>>m;
    cout<<"enter the elements of the matrix:";
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum+=a[i][j];
        }
    }
    cout<<sum;
    return 0;
}