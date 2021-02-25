#include<iostream>
using namespace std;

int main()
{
	int n,i,counte=0,counto=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			counte++;
		}
		else if(a[i]%2!=0)
		{
			counto++;
		}
		if(counte>counto)
		{
			cout<<"READY FOR BATTLE";
		}
		else
		{
			cout<<"NOT READY";
		}
	}
	return 0;
		
}

