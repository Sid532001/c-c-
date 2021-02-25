#include<iostream>
using namespace std;

int main()
{
	char a[1000];
	char c;
	int i,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	
		if(a[0]>=97&&a[0]<=122) a[0]=65+a[0]-97;
    	
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}
