#include<iostream>
using namespace std;

int main()
{

		int n,i,sum=0;
		int a[n];
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			sum=sum+a[i];
		}
		cout<<sum;
		
	return 0;
	
}
