/*#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    //base case
    if(n==0)
    
        return 0 ;
    
    //recursive intution  
        sum(n-1);
    //Self work
        cout<<n;
        
    
}
int main()
{
    int p;
    cout<<"enter the number:"<<" ";
    cin>>p;
    cout<<sum(p);
    return 0;
}

*/
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
    int p;
    cin>>p;
    printIncDec(p);
    return 0;
}