#include<iostream>
using namespace std;

int main()
{
	int n,i;
	int a[n];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	
	a[i]+=a[i-1];
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
return 0;
	
}
