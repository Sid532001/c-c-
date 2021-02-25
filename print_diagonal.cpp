#include<iostream>
using namespace std;

int main()
{
    int i,j,g,n,m;
    cout<<"enter the number of rows and coulmn:";
    cin>>n;
    cout<<"enter the elements of the matrix:";
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(g=0;i<n;g++)
    {
        for(i=0,j=g;j<n;i++,j++)
        {
            cout<<a[i][j];
        }
    }
    cout<<endl;
    return 0;

}