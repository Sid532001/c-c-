#include<bits/stdc++.h>
using namespace std;

void printIncDec(int n)
{
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    cout<<n<<endl;
    printIncDec(n-1);
    cout<<n<<endl;
}
int main()
{
    
    printIncDec(5);
    return 0;
}
