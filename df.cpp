#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int d1,v1,d2,v2,p;
	cin>>d1>>v1>>d2>>v2>>p;
	int sum=0,flag=0;
	if(d1<d2)
	{
		int day=d1-1;
		while(sum<p)
		{
			sum+=v1;
			if(d1==d2 || flag==1)
			{
				sum+=v2;
				flag=1;
			}
			d1++;
			day++;
		}
		cout<<day<<endl;
		
	}
	else
	{
		int day d2-1;
		while(sum<p)
		{
			sum+=v2;
			if(d1==d2 || flag ==1)
			{
				sum+=v1;
				flag=1;
			}
			d2++;
			day++
		}
		cout<<day<<endl;
	}
	return 0;
}
