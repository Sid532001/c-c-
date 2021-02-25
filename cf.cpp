#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,pos,largest;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			if(a[i]==a[i+1])
			{
				cout<<"-1"<<endl;
			}	
			else
			{
				
				if(a[i]>largest)
				{
					largest=a[i];
					pos=i;
					
					
				}
				cout<<pos<<endl;
			}
		}
	
	return 0;
}
}
