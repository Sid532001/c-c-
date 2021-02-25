#include<iostream>
using namespace std;

int main()
{
    int n,m,i,j;
    cout<<"enter the number of rows:";
    cin>>n;
    cout<<"enter the number of columns:";
    cin>>m;
    int a[n][m];
    cout<<"enter the elements of the array:";
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
            if(i==j)
            {
                sum+=a[i][j];
            }

        }
    }
    int som=0;
    for(i=n;i>=0;i--)
    {
        for(j=m;j>=0;j--)
        {
            if(i==n-j-1)
            {
                som+=a[i][j];
            }
        }
    }
   int  diff=sum-som;
   cout<<diff;
   //cout<<sum;
   return 0;
}