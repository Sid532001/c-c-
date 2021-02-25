#include<iostream>
using namespace std;

int main()
{
    int n,i,largest=0,smallest=0;
    cout<<"\n enter the number of elements: ";
    cin>>n;
    cout<<"\ enter the elements: ";
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    largest=a[0];
    smallest=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>largest)
        largest =a[i];
        else if(a[i]<smallest)
        smallest=a[i];
    }
    cout<<largest-smallest;
    return 0;

    

}