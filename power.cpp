#include<bits/stdc++.h>
using namespace std;

/*int power(int a,int b)
{
    //base case
    if(b==0)
    return 1;
    //recursive approach
    int sub=power(a,b-1);
    //self work
    return a*sub;
}*/
int power(int a,int b)
{
    //base case
    if(b==0)
    return 1;
    if(b==1)
    return a;
    //recursive assumption
    int temp=power(a,b/2);

    //self work
    if(b%2==0)
    return temp*temp;
    else
    return a*temp*temp;
}
int main()
{
    int a1,b1;
    cin>>a1>>b1;
    cout<<power(a1,b1);
}