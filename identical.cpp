#include<iostream>
using namespace std;

int main()
{
    int n,m,i,j;
    cout<<"enter the number of rows:";
    cin>>n;
    cout<<"enter the number of columns:";
    cin>>m;
    int a[n][m];;
    cout<<"enter the elements of array:";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int b[n][m];
    cout<<"enter the elements of 2nd array:";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>b[i][j];
        }
    }
    
    if(a[i][j]!=b[i][j])
    
        return 0;
    
    
    
    return 1;
}