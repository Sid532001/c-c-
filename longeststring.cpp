#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"enter the number of words:";
    cin>>n;
    string a[n];
    cout<<"enter the words:";
    
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
    int max_length=0;
    for(i=0;i<n;i++)
    {
        if (a[i].length() > a[max_length].length()) {
        max_length = i;
    }
    }
    return max_length;
    
}