/*#include<bits/stdc++.h>
#include<string>
using namespace std;

int totalPath=0;
void matrixx(int i,int j, int n,int m,string osf)
{
    //base cases
    if(i==n-1 and j==m-1)
    {
        totalPath+=1;
        cout<<osf<<endl;
        return;
    }
    else if(i>=n or j>=m){
    return ;
    }
    matrixx(i,j+1,n,m,osf+"R");//rigt move
    matrixx(i+1,j,n,m,osf+"D");//down move
    //matrixx(i+1,j+1,n,m,osf+"->"); //diagonal move
    
}

int main(int args,char const *argv[])
{
    matrixx(0,0,3,3,"");
    cout<<totalPath<<endl;
}*/

// another method

#include<bits/stdc++.h>
using namespace std;

long long numberOfPaths(int m, int n)
{
if(m==0&&n==0){return 0;}
if(m==1||n==1){return 1;}
return numberOfPaths(m-1,n)+numberOfPaths(m,n-1);
}
int main()
{
    //int t;
    //cin>>t;
    //while(t--)
    //{
        int m,n;
        cin>>m>>n;
        cout<<numberOfPaths(m,n)<<endl;
    //}
    return 0;
}