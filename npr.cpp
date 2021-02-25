#include<iostream>
using namespace std;

int main()
{
	int n,r,i;
	cin>>n>>r;
	int nfact=1;
	for(i=1;i<=n;i++)
	{
		nfact*=1;
	}
	int nmrfact=1;
	for(i=1;i<=n-r;i++)
	{
		nmrfact*=i;
	}
	int npr;
	npr=nfact/nmrfact;
	cout<<npr;
	return 0;
}
