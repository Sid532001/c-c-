#include<iostream>
using namespace std;

int main()
{
    int i,j,n,m;
    cout<<"enter the number of rows:";
    cin>>n;
    cout<<"enter the number of columns:";
    cin>>m;
    cout<<"enter the number of elements of the matrix:";
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int temp;
    int b[10][10];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            a[i][j]=b[j][i];

        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<b[i][j];
        }
    }
    cout<<endl<<endl;
    return 0;
}