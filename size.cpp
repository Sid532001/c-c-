#include<iostream>
using namespace std;

int main()
{
	int n,i,count=0;
	cin>>n;
	char a[50];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==a[i+1])
		{
			count++;
		}
		
	}
	cout<<count;
	return 0;
}


