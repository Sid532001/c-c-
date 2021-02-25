#include<iostream>
using namespace std;

int main()
{
	int n,i,d;
	cout<<"enter the number of elements :";
	cin>>n;
	cout<<"enter the number which is to be found:";
	cin>>d;
	cout<<"enter the elements :";
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==d)
		{
			return i;
		}
		else
		{
			cout<<"-1";
		}
	}
	return 0;
}
