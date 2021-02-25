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
    int x;
    cin>>x;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]==x)
            {
                cout<<"1";
                
            }
            else if(a[i][j]>=x)
            {
                
                j--;
            }
            else
            {
                i++;
            }
        }
    }
    cout<<endl;
    return 0;
    
}