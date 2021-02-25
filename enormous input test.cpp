#include<iostream>
using namespace std;
int main()
{
	int n,k,i;
	cin>>n>>k;
	int a[n];
	int count=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%k==0)
		count ++;
	}
	cout<<count;
	return 0;
}
