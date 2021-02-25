#include<iostream>
using namespace std;

int main()
{
	int n,i,d,count=0;
	cin>>n>>d;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];	
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==d)
		{
			count++;
		}
		
	}
	cout<<count;
	return 0;
}
