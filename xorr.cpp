#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int a[n];
	int xorr;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		xorr=xorr^a[i];
	}
	cout<<xorr;
	return 0;
}
