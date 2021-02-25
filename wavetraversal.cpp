#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    int m;
    cout<<"enter the number of rows:";
    cin>>n;
    cout<<"enter the number of columns:";
    cin>>m;
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
        cin>>a[i][j];
        }

    }
    for(j=0;j<n;j++)
    {
        if(j%2==0)
        {
            for(i=0;i<n;i++)
            {
                cout<<a[i][j];
            }
        }
        else
        {
            for(i=n;i>0;i--)
            {
                cout<<a[i][j];
            }
        }

    }
    return 0;
}
