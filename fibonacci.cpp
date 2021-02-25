#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    //base case
    if(n==0 or n==1)
    return n;

    //Recursive approach
    int subprob1=fib(n-1);
    int subprob2=fib(n-2);
    //self work
    return subprob1+subprob2;
}
int main()
{
    int p;
    cout<<"enter the number"<<":";
    cin>>p;
    cout<<"the fibonacci of the number  is:"<<fib(p);
    return 0;
}