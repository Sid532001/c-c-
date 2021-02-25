#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,i=0;
    cout<<"enter the number  of elements";
    cin>>n;
    int j=n-1;
    cout<<"enter the array elements :";
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        while(i<j)
        {
            
        
        if(a[i]%2==0)
        {
            i++;
        }
        else{
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            --j;
        }
        }
        
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}
