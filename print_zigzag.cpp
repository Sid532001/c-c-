/*#include<bits/stdc++.h>
using namespace std;

void zig(int n)
{
    if(n==0)
    return;
    cout<<n;
        zig(n-1);
    cout<<n;
        zig(n-1);
    cout<<n;
}
int main()
{
    int p;
    cin>>p;
    zig(p);
}
*/

#include<bits/stdc++.h>
using namespace std;

void zig(int n)
{
    if(n==0)
    return;
    cout<<"pre"<<n<<endl;
        zig(n-1);
    cout<<"in"<<n<<endl;
        zig(n-1);
    cout<<"post"<<n<<endl;
}
int main()
{
    int p;
    cin>>p;
    zig(p);
}