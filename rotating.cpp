#include<iostream>
using namespace std;

int main()
{
    int n,i,d;
    cout<<"enter the number of elements:";
    cin>>n;
    cout<<"enter the value of D:";
     cin>>d;
    cout<<"enter the array elements:";
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[(i+n-d)%n];
    }
   
   
    for(i=0;i<n;i++)
    {
         cout<<a[i]<<" ";
    }
    cout<<endl;
   
    return 0;
}