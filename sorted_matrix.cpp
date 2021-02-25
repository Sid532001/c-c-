#include<iostream>
#include<algorithm>

using namespace std;


int main()
{
    int i,j,n,m;
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
    int temp[n*m];
    int k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            temp[k++]=a[i][j];
        }
    }
    sort(temp,temp+k);
    k = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            a[i][j] = temp[k++];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j];
        }
    }
    cout<<endl;
    
        
}