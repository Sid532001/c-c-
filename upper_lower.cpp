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
    int SumUpp=0;
    int SumLow=0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<m;j++)
        {
            SumUpp+=a[i][j];
        }
        for(j=0;j<=i;j++)
        {
        SumLow+=a[i][j];
        }
    }
    
    cout<<SumUpp<<" "<<SumLow;
    return 0;
}