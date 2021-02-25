#include<bits/stdc++.h>
using namespace std;

void queens(int chess[n][n],string qsf,int row)
{
    if(row==n){
    cout<<qsf<<endl;
    return ;
    }
    for(int col=0;col<n;col++)
    {
        chess[row][col]=1;
        queens(chess,(qsf+row+"-"+col+","),row+1);
        chess[row][col]=0;
    }

}

int main()
{
    int n;
    cin>>n;
    int chess[n][n];
    queens(chess,"",0);
    return 0;

}