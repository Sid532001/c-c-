#include<bits/stdc++.h>
using namespace std;

void pattern(int n,int i)
{
    //base case
    if(n==0) return;
    if(i<n)
    {
        //printing column
        cout<<"* ";
        pattern(n,i+1);

    }else{
        cout<<endl;
        pattern(n-1,0);
    }
}
int main()
{
    pattern(7,0);
}