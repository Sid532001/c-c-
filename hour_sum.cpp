#include<iostream>
using namespace std;

int main()
{
    int i,j,n,m;
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
            cin>>a[n][m];
        }
    }
    int max_sum=INT32_MIN;
    int sum;
     for(i=0;i<n-2;i++)
    {
        for(j=0;j<m-2;j++)
        {
            sum=(a[i][j]+a[i][j+1]+a[i][j+2])
            +(a[i+1][j+1])
            +(a[i+2][j]+a[i+2][j+1]+a[i+2][j+2]);
            max_sum=max(max_sum,sum);
        }
    }
    cout<< max_sum;
    return 0;
}