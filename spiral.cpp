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
    cout<<"enter the array elements:";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int minr=0;  //top wall
    int minc=0; //Left wall
    int maxr=n-1; //Bottom wall
    int maxc=m-1; //Right wall
    int tne=n*m;
    int cnt=0;
    while(cnt<tne)
    { // left wall
    for(i=minr,j=minc;i<=maxr && cnt<tne;i++)
    {
        cout<<a[i][j];
        cnt++;

    }
    minc++;
    //Bottom wall
    for(i=minr,j=minc;i<=maxc && cnt<tne;j++)
    {
        cout<<a[i][j];
        cnt++;

    }
    maxr--;

    //Right Wall
    for(i=maxr,j=maxc;i>=maxr && cnt<tne;i--)
    {
        cout<<a[i][j];
        cnt++;

    }
    maxc--;

    //Top Wall
    for(i=minr,j=maxc;j<=minc  && cnt<tne;j--)
    {
        cout<<a[i][j];
        cnt++;

    }
    minr++;
}
}