/*#include<bits/stdc++.h>
#include<string>

using namespace std;
int totalPath=0;
bool isItSafe(int i,int j,int n,vector<vector<bool>>&visited)
{
    return i>=0 and j>=0 and i<n and j<n and visited[i][j]==false;
}
void helper(int i,int j,int n,vector<vector<int>>&grid,vector<vector<bool>>&visited)
{
    if(i==n-1 && j==n-1)
    {
        totalPath++;
        return;
    }
    if(not isItSafe(i,j,n,visited))
    {
        //pruning
        return ;
    }
    visited[i][j]=true;
    //recursion
    if(i+1<n and grid[i+1][j]==0)
    {//down
        helper(i+1,j,n,grid,visited);
    }
    if(i-1>=0 and grid[i-1][j]==0)
    {//up
        helper(i-1,j,n,grid,visited);
    }
    if(j+1<n and grid[i][j+1]==0)
    {
        helper(i,j+1,n,grid,visited);
    }
    if(j-1>=0 and grid[i][j-1]==0)
    {
         helper(i,j-1,n,grid,visited);
    }
    visited[i][j]==false;
    return;

}//i->current row,j->current column
int countRatPath(vector<vector<int>>&grid)
{
    int n=grid.size();
    vector<vector<bool>> visited(n,vector<bool>(n,false));
    helper(0,0,n,grid,visited);
    return totalPath;


}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>grid(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>grid[i][j];
        }
    }
    cout<<countRatPath(grid);
    //cout<<totalPath<<endl;
}
*/


//code chef rat in a maze solution



#include <bits/stdc++.h>
using namespace std;

int total=0;
bool isvalid(int i,int j,int n,vector<vector<bool>> &vis)
{
    return i>=0 && i<n && j>=0 && j<n && vis[i][j]==false;
}

void helper(int i,int j,int n,vector<vector<int>> &grid,vector<vector<bool>> &vis)
{
    if(i==n-1 && j==n-1)
    {
        total++;
        return;
    }
    if(!isvalid(i,j,n,vis))
        return;
    vis[i][j]=true;
    if(i+1<n && grid[i+1][j]==0)
        helper(i+1,j,n,grid,vis);
    if(i-1>=0 && grid[i-1][j]==0)
        helper(i-1,j,n,grid,vis);
    if(j+1<n && grid[i][j+1]==0)
        helper(i,j+1,n,grid,vis);
    if(j-1>=0 && grid[i][j-1]==0)
        helper(i,j-1,n,grid,vis);
    vis[i][j]=false;
    return;
}

int count_paths(vector<vector<int>> &grid)
{
    int n=grid.size();
    vector<vector<bool>> vis(n,vector<bool>(n,false));
    helper(0,0,n,grid,vis);
    return total;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<vector<int>> grid(n);
    for(int i=0;i<n;++i)
    {
        grid[i].resize(n);
        for(int j=0;j<n;++j)
        {
            cin>>grid[i][j];
        }
    }
    cout<<count_paths(grid)<<"\n";
	return 0;
}


