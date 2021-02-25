#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n;
		cin>>n;
		int a[n],b[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>b[i];
		}
		int s1=0,s2=0;
		for(i=0;i<n;i++)
		{
			s1=s1+a[i];
		}
		for(i=0;i<n;i++)
		{
			s2=s2+a[i];
		}
		if(s1>s2)
		{
			cout<<"Bob"<<endl;
		}
		else if(s1<s2)
		{
			cout<<"Alice"<<endl;
		}
		else
		{
			cout<<"Draw"<<endl;
		}
		
	}
	return 0;
}
