#include<bits/stdc++.h>
using namespace std;

int fun(int num)
{
    int count=0;
    while(num)
    {
        count++;
        num>>=1;
    }
    return count;
}
int main()
{
    cout<<fun(435);
}