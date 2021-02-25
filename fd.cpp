#include<iostream>
using namespace std;

int main()
{
	int n,k,i;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]-a[i+1]+1==k)
		{
			cout<<k;
		}
	}
}
