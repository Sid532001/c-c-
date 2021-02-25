#include<iostream>
#include<algorithm>
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
	sort(a,a+n);
	cout<<a[1];
	return 0; 
}
