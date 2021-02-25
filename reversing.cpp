#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int i,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	reverse(a,a+n);
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}
