/*
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void floodfill(int maze,int row,int col,string psf,bool visited)
{
    int n,m;
    if(row<0||col<0||row==n-1||col==m-1||maze[row][col]==1||visited[row][col]==true)
    {
        return;
    }
    
    if(row==n&&col==m)
    {
        cout<<psf<<endl;
        return ;

    }
    visited[row][col]=true;
    floodfill(maze,row-1,col,psf+"t");
    floodfill(maze,row,col-1,psf+"l");    
    floodfill(maze,row+1,col,psf+"d");    
    floodfill(maze,row,col+1,psf+"r");    
    visited[row][col]=false;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    bool visited[n][m];
    floodfill( arr,0,0," ",visited);

    return 0;

}
*/