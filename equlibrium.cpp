#include<iostream>
using namespace std;

int main()
{
	int n,i,sum=0;
	int a[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		
	}
	if(sum==0)
		{
			cout<<"YES";
		}
		else
		{
			cout<<"NO";
		}

	return 0;
}

