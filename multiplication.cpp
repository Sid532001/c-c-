#include<iostream>
using namespace std;

int main()
{
    int i,j,r,c,k;
    int a[10][10],b[10][10],mul[10][10];
    cout<<"enter the number of rows:";
    cin>>r;
    cout<<"enter the number of columns:";
    cin>>c;
    cout<<" enter the elements of first matrix :";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<" enter the elements of second matrix :";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>b[i][j];
        }
    }

    cout<<" the product of matrix wil be:\n";
    for(i=0;i<r;i++)
    {
        for ( j = 0; j < c; i++)
        {
            mul[i][j]=0;
            for(k=0;k<c;k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
        
    }
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}